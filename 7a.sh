#Write a shell script that gets executed and displays the message either "Good Morning" or "Good Afternoon" or "Good Evening"
#depending upon time at which the user logs in..
set -- `who`
user=$1
set -- `echo $4 | tr ":" " "`
h=$1
if [ $h -ge 4 ] && [ $h -lt 12 ]
then
echo "Good Morning Mr/Ms $user"
elif [ $h -ge 12 ] && [ $h -lt 16 ]
then
echo "Good Afternoon Mr/Ms $user"
elif [ $h -ge 16 ] && [ $h -lt 19 ]
then
echo "Good Evening"
else
echo "Good Night"
fi
