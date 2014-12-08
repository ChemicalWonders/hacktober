#Script to send test mail with netcat. 
# expects the following arguments:
# 1. mail to (e.g. to@example.com)
# 2. mail from (e.g. from@example.com)
 
# for mail_input function
to=$1
from=$2

# error handling
function err_exit { echo -e 1>&2; exit 1; }
 
# check if proper arguments are supplied
if [ $# -ne 2 ]; then
  echo -e "\n Usage error!"
  echo " This script requires two arguments:"
  echo " 2. mail to (e.g. to@example.com)"
  echo " 2. mail from (e.g. from@example.com)"
  exit 1
fi
 
# create message
function mail_input { 
  echo "ehlo mail.cs.ucr.edu"
  echo "MAIL FROM: <$from>"
  echo "RCPT TO: <$to>"
  echo "DATA"
  echo "From: <$from>"
  echo "To: <$to>"
  echo "Subject: This email is SPAM!"
  
  while read line
  do 
    echo "$line"
  done
  echo "."
  echo "quit"

}
 
# test
#mail_input
 
# send
mail_input | nc mail.cs.ucr.edu 25 || err_exit
