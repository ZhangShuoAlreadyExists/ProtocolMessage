
protoc=`which protoc`
if [ "x$protoc" == "x" ]
then
    echo "Cannot find protoc in path."
    exit 1
fi

protoc -I=proto --python_out=libproto proto/*.proto
exit $?
