<?php
	session_start();


	$filename = 'assignment11-account-info.txt';

	if (filesize($filename) > 0)
	{
			$read = fopen($filename, 'r');
			$data = fread($read, filesize($filename));
			$data_array = explode(';', $data);
			
		if (isset($_GET["cookieOn"]))
		{
			setcookie("user", $data, time()+3600,'/');
			
		}
		
		
	}

	if (isset($_GET["submit2"]))
	{
			
			$write_array = array($_GET['username'],$_GET['password'],$_GET['fname'],$_GET['lname']);
	
			$writeString = implode(';', $write_array);
						 
			

			$write = fopen($filename, 'w+');
			fwrite($write, $writeString);
		
			 
			if (filesize($filename) > 0)
			{
				$read = fopen($filename, 'r');
				$data = fread($read, filesize($filename));
				$data_array = explode(';', $data);
			}	
			
		
			
	
	}


			
	if ($_GET["submit4"] == "Logout" )
	{
		
		setcookie("user", $data, time()-36000,'/');
		
		session_unset();
		session_destroy();
	}		

	if ($_GET['username'] == $data_array[0] && $_GET['password'] == $data_array[1] 
	   && $_GET['username'] != null && $_GET['password'] != null)
	{
			
	
			
		if (filesize($filename) > 0)
		{
			$read = fopen($filename, 'r');
			$data = fread($read, filesize($filename));
			$data_array = explode(';', $data);
			
		}
			//fclose('assignment11-account-info.txt');
		
			$_SESSION['username'] = $data_array[0]; 
			$_SESSION['password'] = $data_array[1];
			
			
	}

	
		
	 if ( $_SESSION['username'] == $data_array[0] && $_SESSION['password'] == $data_array[1]
	   && $_SESSION['username'] != null)
		{
		
	
			$read = fopen($filename, 'r');
			$data = fread($read, filesize($filename));
			$data_array = explode(';', $data);
			//fclose('assignment11-account-info.txt');
			$write_array = array($data_array[0],$data_array[1],$data_array[2],
							 $data_array[3],$_GET['Bcolor'],$_GET['lname'],$_GET['image']);
	
			$writeString = implode(';', $write_array);
						 
			//echo $writeString;

			$write = fopen($filename, 'w+');
			fwrite($write, $writeString);
			
			
			
		}

	
	
	

	
	

	
	

	
?>




<html>
<head>
<title>
Welcome to Christopher McNames's Assignment 11 PHP page! 
</title>
</head>
<body>
<h1>Welcome to Christopher McNames's Assignment 11 PHP page!</h1>
<hr />	
<?php	
	//echo "before";
	//echo $_SESSION['username'];
	//echo $_SESSION['password'];
	 // echo $_COOKIE["user"]."here is cookie user data";
	if(isset($_SESSION["username"])) 
	{
		
			?>
			<body style="background-color:<?php echo $_GET['Bcolor']; ?>;">
			<img id =IMG1 src= <?php echo $_GET['image']; ?> style="width:200px">
		
			<form  name = "makeAccountForm" action="assignment11.php" method="get">
			<input type="submit" name="submit4" value="Logout">	<br>
			First name: <input type="text" name="fname"> <br>
			Last name: <input type="text" name="lname"> <br>
			Background color:  <input type="text" name="Bcolor"> <br> 
			Title:  <input type="text" name="title"> <br>
			Image:  <input type="text" name="image"> <br>
		
			<input type="submit" name="submit3" value="Edit Account Infomation">
			</form>
			</body>	
			<?php
		
	}
	else
	{
		
		
		
		
	
			?>	

			<br />
			If you have an existing account, log in here:
			<br />	
	
			<form  name = "accountForm" action="assignment11.php" method="get">
			User name: <input type="text" name="username"> <br>
			Password: <input type="text" name="password"> <br>
			<input type="hidden" name="cookieOn" value="on" >
			<input type="submit" name="submit" value="Login">
			</form>
			<hr />
			<br />
		
			Otherwise, if you'd like to create an account, please fill out the following form:
			<br />	

	
			<form  name = "makeAccountForm" action="assignment11.php" method="get">
			User name: <input type="text" name="username"> <br>
			Password: <input type="text" name="password"> <br>
			First name: <input type="text" name="fname"> <br>
			Last name: <input type="text" name="lname"> <br>
			<input type="hidden" name="cookieOn" value="on" >
			<input type="submit" name="submit2" value="Create Account">
			</form>

			<?php
	
		
	}
	?>

	






</body>

</html>