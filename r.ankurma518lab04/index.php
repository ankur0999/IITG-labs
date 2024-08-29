<?php

function findUser($username) {
    $lines = file("users.txt");
    foreach ($lines as $line) {
        $userData = json_decode(trim($line), true);
        if ($userData['username'] === $username) {
            return $userData;
        }
    }
    return null;
}
if(isset($_SERVER['QUERY_STRING'])){
$queries = array();
parse_str($_SERVER['QUERY_STRING'], $queries);
if(isset($queries['username'])){
$userData = findUser($queries['username']);

    if ($userData) {
        if ($userData['first_login']) {
            header("Location: login.php");
            exit();
        }
    } 
}
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ashok Singh</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <nav class="navbar">
        <ul class="navbar-list">
            <div class="name">Ashok Singh Sairam</div>
        </ul>
        <ul class="navbar-list">
            
            
            <li class="navbar-item"><a href="publication.php" class="navbar-link">Publication</a></li>
            <li class="navbar-item"><a href="#" class="navbar-link">Student</a></li>
            <li class="navbar-item"><a href="#" class="navbar-link">Project</a></li>
            <li class="navbar-item"><a href="edit_profile.php" class="navbar-link">Edit Profile</a></li>
        </ul>
    </nav>

    <div class="container">
        <div class="profile">
            <img src="ashok.jpg" alt="Profile Picture">
            <div class="profile-info">
                <h2>Ashok Singh Sairam</h2>
                <p><strong>Position:</strong> Faculty</p>
                <p><strong>Department:</strong> Mathematics</p>
                <p><strong>Biography:</strong> Ashok Singh is a prof. of mathematics with over 10 years of experience in teaching. He specializes in programming, networking and security. </p>
                <div class="contact-info">
                    <p><strong>Email:</strong> <a href="https://iitg.ac.in/maths/index_faculty_profile.php?name=UHBkK3RSbEMrcndmeVhzUnBWY2hhbTFqczFLVWVlNjNPSWFBSEc0SjYyST0=#">ashok ◊ iitg ⋅ ac ⋅ in</a></p>
                    <p><strong>Phone:</strong> +91 (0)361 258 3727 </p>
                    
                </div>
            </div>
        </div>
    </div>
</body>
</html>
