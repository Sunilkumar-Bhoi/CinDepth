#!/bin/bash

for((i=10;i<=62;i++))
do
	echo "int main(void){
	
		return 0;
	}" >> "program0$i.c"
done
