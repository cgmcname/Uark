 <!DOCTYPE html>

<html>
<body>



<?php



	if ($_REQUEST == null)
	{
		echo "<title>Assignment 9: no query string </title>";
		echo "<p1>Hello world!</p1><br>";
		echo "<p2>Christopher McNames's assignment 9.</p2><br>";
		echo "<p3>The query string is null.</p3><br>";
	}
	else
	{
		
		echo "<title>Assignment 9: with a query string </title>";
		echo "<p1>Hello world!</p1><br>";
		echo "<p2>Christopher McNames's assignment 9.</p2><br>";
		print "<p3>The query string is </p3>"; var_dump($_REQUEST);
		
	}

	phpinfo();

?>

</body>
</html>
 
