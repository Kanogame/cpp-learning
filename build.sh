#/!bin/bash

if [ "$1" != "" ] && [ "$2" != "" ]; then 
	g++ ./$1/$2 -o result
	return
fi

echo "write folder to compile:"
read foldername
echo "write name of file:"
read filename

g++ ./$foldername/$filename -o result
