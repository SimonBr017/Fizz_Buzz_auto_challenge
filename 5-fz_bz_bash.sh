#!/usr/bin/env bash
# bash script FizzBuzz

for ((i=1; i <= 100; i++))
	do
		if (( i % 15 == 0))
		then
			printf "FizzBuzz"
		elif ((i % 3 == 0))
		then
			printf "Fizz"
		elif ((i % 5 == 0))
		then
			printf "Buzz"
		else
			printf "$i"
		fi
		if (( i < 100))
		then
			printf ", "
		fi
	done
printf "\n"
	
