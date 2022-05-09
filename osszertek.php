<html>
    <body>
        
            <?php
                $con = mysqli_connect("localhost", "root", "", "raktar");

                $result = mysqli_query($con, "SELECT SUM(egyseg_ar * mennyiseg) FROM RAKTAR");
                echo "<table border=1>
                <tr>
                    <th>
                        Osszertek
                    </th>
                </tr>
                <tr>";
                while($row = mysqli_fetch_row($result)) {
                    echo "<td>$row[0]</td>";
                }
                echo "
                </tr>
            </table>";
            ?>
    </body>
</html>