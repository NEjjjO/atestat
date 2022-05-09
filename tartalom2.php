<html>
	<head>
	</head>
	<body>
<?php
	$mysql_hostname = "localhost";
	$mysql_username = "root";
	$mysql_password = "";
	$mysql_db = "diakok";
	
	$con = mysqli_connect($mysql_hostname, $mysql_username, $mysql_password, $mysql_db);
	
	if(mysqli_connect_errno()){
		echo "Failed to connect to MySQL: " . mysqli_connect_error();
		exit();
	}

	if ($result = mysqli_query($con, "SELECT * FROM diak")) {
	  echo "A tabla sorainak szama: " . mysqli_num_rows($result);
	  echo "<br>";
	  echo "A tabla tartalma: " ;
	  echo "<table border=1>
		<tr>
			<th>Szemelyi_szam</th>
			<th>Vezetek_nev</th>
			<th>Kereszt_nev</th>
			<th>Osztaly</th>
			<th>Media</th>
			<th>Hianyzasok</th>
			<th>Szuletesi_datum</th>
			<th>Bentlako</th>
		</tr>";
	  while ($row = mysqli_fetch_row($result))
	  {
		echo "<tr>";
		echo " <td>" . $row[0] . "</td>";
		echo " <td>" . utf8_encode($row[1]). "</td>";
		echo " <td>" . utf8_encode($row[2]) . "</td>";
		echo " <td>" . $row[3] . "</td>";
		echo " <td>" . $row[4] . "</td>";
		echo " <td>" . $row[5] . "</td>";
		echo " <td>" . $row[6] . "</td>";
		echo " <td>" . $row[7] . "</td>";
		echo "</tr>";
	  }
		echo "</table>";
	  
	  mysqli_free_result($result);
	}
	mysqli_close($con);
?>
<a href="menu.php"><input  type="submit"  value="vissza " ></input></a> 
</body>
</html>