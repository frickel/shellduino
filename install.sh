#!/bin/bash
PATH=/opt/shellduino
CP=/bin/cp

# Our internal functions
function installShellduino {
	echo "Copying shellduino-tree to $PATH.."

	if [ -d $PATH ] ; then
		echo "Sorry, destination path does already exist."
		exit 0
	fi

	if [ -d $PWD ] ; then
		$CP -r $PWD/src $PATH || echo "Error. Couldn't copy shellduino-tree. Do you have enough permissions in order to write to $PATH?"
	else
		echo "Error. The source path could not be found."
		echo "Are you calling $0 indirectly or is the source"
		echo "distribution faulty/corrupted?"
		exit 0
	fi

	echo "Finished.."
}

echo -n "Are you sure you want to install Shellduino to $PATH? (y/n)"
read userAnswer

case "$userAnswer" in
	"y")
		echo "Okay. Continuing."
		installShellduino
		;;
	"n")
		echo "Exiting."
		exit 0
		;;
esac
