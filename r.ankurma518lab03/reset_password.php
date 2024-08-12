<?php
function findAndUpdateUser($username, $newData) {
    $lines = file("users.txt");
    $updatedLines = [];
    foreach ($lines as $line) {
        $userData = json_decode(trim($line), true);
        if ($userData['username'] === $username) {
            $userData = array_merge($userData, $newData);
        }
        $updatedLines[] = json_encode($userData) . PHP_EOL;
    }
    file_put_contents("users.txt", $updatedLines);
}

function validatePassword($password) {
    return preg_match('/^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)(?=.*[\W_]).{7,}$/', $password);
}

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
    $oldPassword = trim($_POST['old_password']);
    $newPassword = trim($_POST['new_password']);
    $confirmPassword = trim($_POST['confirm_password']);
    


    $userData = findUser($username);

    if ($userData && password_verify($oldPassword, $userData['password'])) {
        if ($newPassword === $confirmPassword && validatePassword($newPassword)) {
            $newHashedPassword = password_hash($newPassword, PASSWORD_BCRYPT);
            findAndUpdateUser($username, [
                'password' => $newHashedPassword,
                
            ]);
            header("Location: index.html");
            echo "Password reset successful!";
        } else {
            echo "Passwords do not match or do not meet complexity requirements.";
        }
    } else {
        echo "Old password is incorrect.";
    }
} else {
    $username = isset($_GET['username']) ? $_GET['username'] : '';
}
?>




<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ashok Singh</title>
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
            
            <li class="navbar-item"><a href="index.html" class="navbar-link">Home</a></li>
            <li class="navbar-item"><a href="publication_nat.html" class="navbar-link">Publication</a></li>
            <li class="navbar-item"><a href="#" class="navbar-link">Student</a></li>
            <li class="navbar-item"><a href="#" class="navbar-link">Project</a></li>
            <li class="navbar-item_h"><a href="#" class="navbar-link_h">Edit Profile</a></li>
        </ul>
    </nav>
    <div class="body">
    <div class="login-container">
        <form action="reset_password.php" method="post" class="login-form">
            <h2></h2>
            <div class="form-group">
                <input type="hidden" id="username" name="username" value="<?php echo htmlspecialchars($username); ?>">
            </div>
            
            <div class="form-group">
                <label for="password">Old Password</label>
                <input type="password" id="old_password" name="old_password" required>
            </div>
            <div class="form-group">
                <label for="password">New Password</label>
                <input type="password" id="new_password" name="new_password" required>
            </div>
            <div class="form-group">
                <label for="password">retype Password</label>
                <input type="password" id="confirm_password" name="confirm_password" required>
            </div>
            <div>         
               <button type="submit" class="login-button">Reset Password</button>
            </div>
           
        </form>
    </div></div>
    </body>
    </html>
