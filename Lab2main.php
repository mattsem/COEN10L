<html>
<h1>
Muliplication
</h1>

<p>
Enter your answer to the problem below
</p>

<?php
    $product1 = rand(0,12);
    $product2 = rand(0,12);
    echo $product1."x".$product2."=";
    ?>


<form action="check.php" method="POST">
<input type = "hidden" name="product1" value = "<?php echo $product1;
?>"/>
<input type = "hidden" name = "product2" value = "<?php echo $product2;
?>"/>
<input type = "number" name ="answer" />
<input type = "submit" value = "Calculate" />
</form>


</html>
