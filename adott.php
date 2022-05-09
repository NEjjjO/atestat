<html>
    <body>

        <form action="adott.php" method="post">
            Aru kod
            <input type="text" name="aru_kod">
            Aru nev
            <input type="text" name="aru_neve">
            Egyseg ar
            <input type="text" name="egyseg_ar">
            Mennyiseg
            <input type="text" name="mennyiseg">
            <input type="submit" value="Modositas">
        </form>

            <?php
                $con = mysqli_connect("localhost", "root", "", "raktar");
 
                if(array_key_exists("aru_kod", $_POST)) {
                    $aru_kod = $_POST["aru_kod"];
                    $aru_neve = $_POST["aru_neve"];
                    $egyseg_ar = $_POST["egyseg_ar"];
                    $mennyiseg = $_POST["mennyiseg"];

                    $result = mysqli_query($con, "UPDATE RAKTAR SET aru_neve='$aru_neve', egyseg_ar='$egyseg_ar', mennyiseg='$mennyiseg' WHERE aru_kod='$aru_kod'");
                    if($result) {
                        echo "Sikeres modositas";
                    }
                }
            ?>
    </body>
</html>