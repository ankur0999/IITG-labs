<?php
ini_set('display_errors', 1);
ini_set('display_startup_errors', 1);
error_reporting(E_ALL);
echo "Hi";
?>


<?php
function findAndUpdateUser($username, $newData) {
    $lines = file("user.txt");
    $updatedLines = [];
    foreach ($lines as $line) {
        $userData = json_decode(trim($line), true);
        if ($userData['username'] === $username) {
            $userData = array_merge($userData, $newData);
        }
        $updatedLines[] = json_encode($userData) . PHP_EOL;
    }
    file_put_contents("user.txt", $updatedLines);
}

function validatePassword($password) {
    return preg_match('/^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)(?=.*[\W_]).{7,}$/', $password);
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
                'first_login' => false
            ]);
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
