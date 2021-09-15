#!/usr/bin/python3
"""print from 1 to 100 with multiple 3 tr by fizz
multiples of 5 tr by buzz and both multiples 3 and 5
by fizzbuzz sparated by a space"""


def fizzbuzz():
    """main function"""
    for i in range(1, 101):
        if i % 15 == 0:
            print('FizzBuzz', end=" ")
        elif i % 3 == 0:
            print ('Fizz', end=" ")
        elif i % 5 == 0:
            print ('Buzz', end=" ") 
        else:
        	print(i, end=" ")
    print("")


if __name__ == '__main__':
    fizzbuzz()
