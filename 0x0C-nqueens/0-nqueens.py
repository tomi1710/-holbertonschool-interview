#!/usr/bin/python3
""" Made by Tomas de Castro for Holberton School 2022"""


from sys import argv, exit


def test(res, pos):
    """ test """
    for i in res:
        if i[1] == pos[1]:
            return False
        if (i[0] + i[1]) == (pos[0] + pos[1]):
            return False
        if (i[0] - i[1]) == (pos[0] - pos[1]):
            return False
    return True


def iterar(res, n, row):
    """ iterar """
    if (row == n):
        print(res)
    else:
        for col in range(n):
            pos = [row, col]
            if test(res, pos):
                res.append(pos)
                iterar(res, n, row + 1)
                res.remove(pos)


def salir(msg):
    """ salir """
    print(msg)
    exit(1)


def inicio():
    """ inicio """
    if len(argv) != 2:
        salir("Usage: nqueens N")
    num = argv[1]
    if not num.isdigit():
        salir("N must be a number")
    num = int(num)
    if num < 4:
        salir('N must be at least 4')
    res = []
    iterar(res, num, 0)


if __name__ == '__main__':
    """ inicio """
    inicio()
