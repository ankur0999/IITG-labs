<?php
$filename = "international.txt";
$file = fopen($filename, "a");

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    // Collect and sanitize form data
    $pub = htmlspecialchars(trim($_POST['publications']));

    // Basic form validation
    if (!empty($pub) && $file) {
        fwrite($file, $pub."\n");
        fclose($file);
    }
} 
?>




<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Enter Publications</title>
    <link rel="stylesheet" href="editpub.css">
    
</head>
<body>
<nav class="navbar">
        <ul class="navbar-list">
            <div class="name">Ashok Singh Sairam</div>
        </ul>
        <ul class="navbar-list">
            
            <li class="navbar-item"><a href="index.php" class="navbar-link">Home</a></li>
            <li class="navbar-item"><a href="publication.php" class="navbar-link">Publication</a></li>
            <li class="navbar-item"><a href="#" class="navbar-link">Student</a></li>
            <li class="navbar-item"><a href="#" class="navbar-link">Project</a></li>
            <li class="navbar-item_h"><a href="#" class="navbar-link_h">Edit Profile</a></li>
        </ul>
    </nav>
<div class="body">
    <form action ="textArea.php" method="post" class="textbox-container">
        <h2>Enter Your Publications</h2>
        <textarea class="designer-textbox" rows="8" id="pub" name="publications" type="text" placeholder="Type here..."></textarea>
        <input class="designer-button" type="submit" value="Submit">
    </div>
    </form>
</div>

</body>
</html>
