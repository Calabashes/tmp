#!/bin/bash
if [ -z $EDITOR ];then
	echo "The \$EDITOR is not set"
	elif [ $EDITOR = "vi" ];then
	echo "the editor is vi"
else 
	echo "The editor is $EDITOR, but not vi"
fi
