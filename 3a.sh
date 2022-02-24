#Create a shell script file called file properties that reads a filename entered and outputs it properties.
if [ -e $1 ]
then
set -- `ls -ld $1`
echo "Permissions are $1"
echo "File link $2"
echo "user: $3"
echo "group: $4"
echo "file size: $5"
echo "month: $6"
echo "date: $7"
echo "time/year: $8"
else
echo "File doesnt exists"
fi


