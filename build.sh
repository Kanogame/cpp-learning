#/!bin/bash


echo "write folder to compile:"
read foldername
echo "write name of file"
read filename

g++ ./$foldername/$filename -o result
