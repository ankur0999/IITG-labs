<?php
/*
 $lines = file("international.txt");
 foreach($lines as $line){
    echo $line;
    echo "<br>";
 }*/

 $myFile = fopen("international.txt","r");
 while(!feof($myFile)){
    $line = fgets($myFile);
    echo $line;
    echo "<br>";
 }
 ?>