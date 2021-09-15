#!/usr/bin/python3
"""print from 1 to 100 with multiple 3 tr by fizz
multiples of 5 tr by buzz and both multiples 3 and 5
by fizzbuzz sparated by a coma"""


def fizzbuzz():
    """main function"""
    color_begin = "\x1b[6;30;41m"
    color_end = "\x1b[0m"

    print("_____________________________________________________")
    print("")
    print("                       " + color_begin + "FizzBuzz" + color_end + "                      ")
    print("")
    print("-----------------------------------------------------")
    for i in range(1, 101):
        if i % 15 == 0:
            print(color_begin + 'FizzBuzz' + color_end, end="")
        elif i % 3 == 0:
            print('Fizz', end="")
        elif i % 5 == 0:
            print('Buzz', end="")
        else:
            print(i, end="")
        if (i < 100):
            print(end=", ")
    print("")


if __name__ == '__main__':
    fizzbuzz()
