<html>
<?php

    
    $product1 = $_POST["product1"];
    $product2 = $_POST["product2"];
    $answer = $_POST["answer"];

		echo $product1."x".$product2."=".($product1*$product2);
if($answer == $product1 * $product2){
    echo "Congrats!"
}
else{
    echo "Sorry that is incorrect"
}
	?>
<form method= "POST" action = "main.php">
    <input type = "submit" value= "Try again!"/>
</form>


</html>
