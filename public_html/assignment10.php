<!DOCTYPE html>
<html>
<head>
<script>

function validateForm() {
    var x = document.forms["myForm"]["fname"].value;
    if (x == "") {
        alert("First name must be filled out");
        return false;
    }
	var y = document.forms["myForm"]["lname"].value;
    if (y == "") {
        alert("Last name must be filled out");
        return false;
    }
	var z = document.forms["myForm"]["email"].value;
	
	
    if (z == "") {
        alert("E-Mail must be filled out");
        return false;
    }
	
	if(z.indexOf('.') == -1)
	{
		alert("E-Mail name is invalid");
		return false;
	}
	
	if(z.indexOf('@') == -1)
	{
		alert("E-Mail name is invalid");
		return false;
	}
	
	
}
</script>
</head>
<body>

<?php
$Display = true;
$LastS = true;

if ((isset($_GET['check']) || $_POST['bob'] == 100))
{
	
	
	$Display = false;

	
	
	
	if ( ($_POST['randv'] == '1' || $_POST['randv'] == '2' || 
	$_POST['randv'] == '3'|| $_POST['randv'] == '4'|| $_POST['randv'] == '5' || $_POST['bob'] == 100))
	{
		
		if ($_POST['randv'] == $_POST['guess'])
		{
			echo "You are correct";
			$LastS = false;
		}
		if ($LastS)
		{
			echo "Please try Again";
		?>
		<form  action="assignment10.php" method="post">
		Your Guess: <input type="number" name="guess"> <br>
		<input type="hidden"  value=  100  name = "bob"> 
		<input type="hidden"  value= "<?php echo $_POST['randv']; ?>" name = "randv">
		<input type="submit" name="submit" value="guess">
		</form>
		<?php
		}
		
	}
	else
	{
	
	echo "Hi " . $_GET['fname'] . " " . $_GET['lname'] ."!";
	$hold = rand(1,5);
	?>
	
	<form  action="assignment10.php" method="post">
	Your Guess: <input type="text" name="guess"> <br>
	<input type="hidden"  value= "<?php echo $hold; ?>"  name = "randv"> 
	<input type="hidden"  value=  100  name = "bob"> 
	<input type="submit" name="submit" value="guess">
	</form>
	

	<?php
	}

	
}

if ($Display == true )
{
	
	 ?>
	
	<form name="myForm" action="assignment10.php"
	onsubmit="return validateForm()" method="get">
	First Name: <input type="text" name="fname" value="Christopher"> <br>
	Last Name: 	<input type="text" name="lname" value="McNames"> <br>
	E-Mail: 	<input type="text" name="email" value="cgmcname@uark.edu" > <br>

	<input type="submit" name="check" value="submit">
	</form>
	<?php
	
}

?>





</body>

</html>
