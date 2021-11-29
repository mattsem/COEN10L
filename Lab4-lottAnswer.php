//Matt Seminatore Tu 2:15 Lab 4
<html>
	<h1> Results</h1>	
	<?php

//		$n1 = $_POST["n1"];
//		$n2 = $_POST["n2"];
//		$n2 = $_POST["n3"];
//		$n2 = $_POST["n4"];
//		$n5 = $_POST["n5"];
		$n1 = 1;
		$n2 = 2;
		$n3 = 3;
		$n4 = 4;
		$n5 = 5;

		$x = array($n1,$n2,$n3,$n4,$n5);
		$ansArr = array();

		//This loop adds random #s
		for($i=0; $i<5; $i++){
			$add = rand(1,20);
			$contains = 0;

			//This for loop looks for a repeated lotto #
			for($j=0; $j<$i; $j++){
				if($ansArr[$j] == $add)
					$contains = 1;
			}
			if($contains == 0)
				array_push($ansArr, $add);
			else{
				$i--;
			}
		}
		
		$count = 0;
		
		//This loop goes through the correct #loop and outputs them 
		echo "Lotto number";
		for($k = 0; $k<5; $k++){
				
			//This loop checks to look for matches
			for($l = 0; $l<5; $l++)	{
				if($x[$l] == $ansArr[$k])
					$count++;
			}
				
			echo $ansArr[$k].",";
		}
		echo "Your Numbers";
		//this loop outputs the x array
		for($i = 0; $i<5;$i++){
			echo $x[$i]. ",";
		}
			
		echo "\n You got ".$count." right";
	?>

	<form method="POST" action = "lottMain.html">	
		<input type = "submit" value = "Try Again"/>
	</form>


</html>
