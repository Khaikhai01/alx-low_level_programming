>>> matrix_divided = __import__('2-matrix_divided').matrix_divided
>>> matrix = [[1, 2, 3], [2, 3]]
>>> matrix_divided(matrix, 2)
Traceback (most recent call last):
...
TypeError: Each row of the matrix must have the same size
>>> matrix = [[1, 2, "list"], [4, 3, 5]]
>>> matrix_divided(matrix, 2)
Traceback (most recent call last):
...
TypeError: matrix must be a matrix (list of lists) of integers/floats
>>> matrix = [1, 2, 3]
>>> matrix_divided(matrix, 2)
Traceback (most recent call last):
...
TypeError: matrix must be a matrix (list of lists) of integers/floats
>>> matrix = [[1, 2, "list"], (4, 3, 5)]
>>> matrix_divided(matrix, 2)
Traceback (most recent call last):
...
TypeError: matrix must be a matrix (list of lists) of integers/floats
>>> matrix = [[1, 2, 4], (4, 3, 5)]
>>> matrix_divided(matrix, 2)
Traceback (most recent call last):
...
TypeError: matrix must be a matrix (list of lists) of integers/floats
>>> matrix = []
>>> matrix_divided(matrix, 2)
Traceback (most recent call last):
...
TypeError: matrix must be a matrix (list of lists) of integers/floats
>>> matrix = [[1, 2, 4], (4, 3, 5)]
>>> matrix_divided(matrix, 2)
Traceback (most recent call last):
...
TypeError: matrix must be a matrix (list of lists) of integers/floats
>>> matrix = (4, 3, 5)
>>> matrix_divided(matrix, 2)
Traceback (most recent call last):
...
TypeError: matrix must be a matrix (list of lists) of integers/floats
>>> matrix = [(4, 3, 5), [1, 2, 3]]
>>> matrix_divided(matrix, 2)
Traceback (most recent call last):
...
TypeError: matrix must be a matrix (list of lists) of integers/floats
>>> matrix = [[], []]
>>> matrix_divided(matrix, 2)
Traceback (most recent call last):
...
TypeError: matrix must be a matrix (list of lists) of integers/floats
>>> matrix = [[], [1, 2, 4]]
>>> matrix_divided(matrix, 2)
Traceback (most recent call last):
...
TypeError: matrix must be a matrix (list of lists) of integers/floats
>>> matrix = [[2, 4, 5, 7], []]
>>> matrix_divided(matrix, 2)
Traceback (most recent call last):
...
TypeError: Each row of the matrix must have the same size
>>> matrix = [[2, 4, 5, 7], "string"]
>>> matrix_divided(matrix, 2)
Traceback (most recent call last):
...
TypeError: Each row of the matrix must have the same size
>>> matrix = [[2, 4, 5, 7], [3, 7, 4, 1]]
>>> matrix_divided(matrix, "c")
Traceback (most recent call last):
...
TypeError: div must be a number
