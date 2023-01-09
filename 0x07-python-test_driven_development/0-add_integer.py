#!/usr/bin/python3
"""
add integer task
"""
def add_integer(a, b=98):
    """
    Function to add two integers
    Args:
    a - parameter 1
    b - parameter 2
    Returns: sum of a and b
    """
    if type(a) is not int and type(a) is not float:
        raise TypeError("a must be an integer")
    elif type(b) is not int and type(b) is not float:
        raise TypeError("b must be an integer")
    else:
        return int(a) + int(b)
