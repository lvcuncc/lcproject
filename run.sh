#!bin/bash

if [ -d 'build' ]
then
	cd build && make;
else
	make build;
	cd build && cmake ..;
fi
