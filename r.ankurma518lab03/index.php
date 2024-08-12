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
        if ($userData['first_login']) {
            header("Location: home.html?username=" . urlencode($username));
            exit();
        } else {
            echo "Login successful!";
        }
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
    
    
    <div class="body">
    <div class="login-container">
        <form action="index.php" method="post" class="login-form">
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