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

if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    $username = trim($_POST['username']);
    $password = trim($_POST['password']);

    $userData = findUser($username);

    if ($userData && password_verify($password, $userData['password'])) {
        
            header("Location: reset_password.php?username=" . urlencode($username));
            exit();
   } else {
        echo "Invalid username or password.";
    }
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Login</title>
    <link rel="stylesheet" href="styleEdit.css">
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
            <li class="navbar-item"><a href="publication.php" class="navbar-link">Publication</a></li>
            <li class="navbar-item"><a href="#" class="navbar-link">Student</a></li>
            <li class="navbar-item"><a href="#" class="navbar-link">Project</a></li>
            <li class="navbar-item_h"><a href="#" class="navbar-link_h">Edit Profile</a></li>
        </ul>
    </nav>
    
    
    <div class="body">
    <div class="login-container">
        <form action="login.php" method="post" class="login-form">
            <h2></h2>
            
            
            <div class="form-group">
                <label for="username">Username</label>
                <input type="text" id="username" name="username" required>
            </div>
            <div class="form-group">
                <label for="password">Password</label>
                <input type="password" id="password" name="password" required>
            </div>
            <div class="button">
                <button type="submit" class="login-button">Login</button>
                <p></p>
                </div>
        </form>
    </div></div>
    </body>
    </html>
