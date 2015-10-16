#!/bin/bash

echo "hello world"
read a

if [ "$a" = "ENGLISH" ];then
echo "right"
else 
echo "wrong"
fi

test -w student.txt
echo $?
[ -x student.txt -o -w student.txt ]
echo $?

if [ -z $EDITOR ];then
	echo "the \$EDITOR is not set"
elif [ $EDITOR = "vi" ];then
	echo "the edior is vi"
else 
	echo "the editor is $EDITOR ,but not vi"
fi

#number test 

[ "100" -lt "110" ] 
echo "1 test =  $?"

NUMBER=100
[ $NUMBER -ge "100" ]

echo "2 test =  $?"

[ "900" -le "910" -a "100" -gt "99" ]
echo "3 test = $?"


#expr test
LOOP=0

LOOP='expr$LOOP + 1'
echo "loop = $LOOP"


#make a directory
mkdir /home/wangyf/shell_test
#copy all doc files
cp * /home/wangyf/shell_test

#this is parameter test

echo "Program name is $0"
echo "there are totally $# parameters pass to this program"
echo "the last is $?"
echo "the parameter are $*"

