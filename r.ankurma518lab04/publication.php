<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ashok Singh</title>
    <link rel="stylesheet" href="stylePub.css">
    <style>
        .navbar-item_h {
            margin: 0 10px;
            background-color: #ddd;
        }
        .navbar-link_h {
            display: block;
            color: rgb(12, 11, 11);
            text-align: center;
            padding: 14px 20px;
            text-decoration: none;
        }
    </style>
</head>
<body>
<nav class="navbar">
        <ul class="navbar-list">
            <div class="name">Ashok Singh Sairam</div>
        </ul>
        <ul class="navbar-list">
            
            <li class="navbar-item"><a href="index.php" class="navbar-link">Home</a></li>
            <li class="navbar-item_h"><a href="#" class="navbar-link_h">Publication</a></li>
            <li class="navbar-item"><a href="#" class="navbar-link">Student</a></li>
            <li class="navbar-item"><a href="#" class="navbar-link">Project</a></li>
            <li class="navbar-item"><a href="edit_profile.php" class="navbar-link">Edit Profile</a></li>
        </ul>
    </nav>
    <div class="col-sm-9">
        <?php 

   $filename = "international.txt";
   $pubs = file($filename, FILE_IGNORE_NEW_LINES);
   $pub_array = array();
   $i = 0;
   foreach($pubs as $pub){
       $year =  (int)substr($pub, strrpos($pub, ',')+ 1);
       if($year != 0) $i++;
       if(!isset($pub_array[$year])){
           $pub_array[$year] = array();
       }
       array_push($pub_array[$year] , $pub);
}

krsort($pub_array);

echo "<br>";

foreach($pub_array as $key => $list){
    if($key != 0){
    foreach($list as $value){
        
        echo "$i. ". htmlspecialchars($value)."<br><br>";
        $i--;
     }
   }
}



?>   

 </div>
    

</body>
</html>