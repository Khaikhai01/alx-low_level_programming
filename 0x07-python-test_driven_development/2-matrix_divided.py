#!/usr/bin/python3
"""
Function to divide elements of a matrix
"""
def matrix_divided(matrix, div):
    """
    Function to divide matrix elements
    Args:
    matrix - The matrix
    div - No to divide by
    Return: New matrix
    """
    new_matrix = []
    if div == 0:
        raise ZeroDivisionError("division by zero")
    if type(div) is not int and type(div) is not float:
        raise TypeError("div must be a number")
    if len(matrix) == 0 or type(matrix) and type(matrix[0]) is not list:
        raise TypeError("matrix must be a matrix (list of lists) of integers/floats")
    if len(matrix[0]) == 0:
        raise TypeError("matrix must be a matrix (list of lists) of integers/floats")
    size = len(matrix[0])
    for row in matrix:
        if len(row) != size:
            raise TypeError("Each row of the matrix must have the same size")
            #break
        if type(row) is not list:
            raise TypeError("matrix must be a matrix (list of lists) of integers/floats")
            #break
        new_list = []
        for column in row:
            if type(column) is not int and type(column) is not float:
                raise TypeError("matrix must be a matrix (list of lists) of integers/floats")
                #break
            else:
                result = column / div
                result = float(f"{result:.2f}")
                new_list.append(result)
        
        new_matrix.append(new_list)

    return new_matrix
