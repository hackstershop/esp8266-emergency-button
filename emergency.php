<?php

require('twilio-php-master/Services/Twilio.php');
$account_sid = 'your account sid';
$auth_token = 'your account token';
$client = new Services_Twilio($account_sid, $auth_token);

$client->account->messages->create(array(
'To' => "send sms to this number for example +972534448888",
'From' => "your twilio number for example +13233456781",
'Body' => "קריאת חירום"
));

?>
