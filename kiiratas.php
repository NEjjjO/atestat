<html>
    <body>
        <?php
                $con = mysqli_connect("localhost", "root", "", "raktar");
                
                $result = mysqli_query($con, "SELECT * from RAKTAR");
                echo "<table border=1>
                    <tr>
                        <th>
                            Aru kod
                        </th>
                        <th>
                            Aru neve
                        </th>
                        <th>
                            Egyseg ar
                        </th>
                        <th>
                            Mennyiseg
                        </th>
                    </tr>";

                while($row = mysqli_fetch_row($result)) {
                    echo "<tr>
                    <td>$row[0]</td>
                    <td>$row[1]</td>
                    <td>$row[2]</td>
                    <td>$row[3]</td>
                    </tr>";
                }
                echo "</table>"
            ?>
    </body>
</html>