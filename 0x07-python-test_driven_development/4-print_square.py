#!/usr/bin/python3

'''
function to print the square
'''


def print_square(size):
    '''
    print_square function
    '''
    if type(size) is not int and type(size) is not float:
        raise TypeError("size must be an integer")
    if type(size) is float and size < 0:
        raise TypeError("size must be an integer")
    if size < 0:
        raise ValueError("size must be >= 0")
    else:
        if type(size) is float:
            size = int(size)
        for row in range(size):
            print("#" * size)
