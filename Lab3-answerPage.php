//Matt Seminatore
//Tuesday 2:15 Lab
//Lab#3



<html>
<?php
//$guess= $_POST["guess"];
$guess = 5;
?>

<p>You guessed:<?php echo $guess ?></p>


<?php
	$correct = "Incorrect";
	$answers = array(0,0,0,0,0);
	for($i=0;$i<5;$i++){
		$answers[$i]= rand(1,20);
	}
	for($j=0;$j<5;$j++){
		if($guess == $answers[$j]){
			$correct = "Correct";
		}

	} 	
?>	
<h2><?php echo $correct ?></h2>
<p>The correct answers were: <?php
for($k=0;$k<5;$k++){
	echo $answers[$k].",";
}	
?> </p>
</html>
