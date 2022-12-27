#!/usr/bin/python3
"""
Function that prints My name is <first name> <last name>
"""


def say_my_name(first_name, last_name=""):
    """
    Prints a Name
    Arguments:
    first_name: must be a string
    last_name: must be a string, if no argument given, then empty by default
    Otherwise a TypeError is raised
    """
    if not isinstance(first_name, str):
        msg = "first_name must be a string"
        raise TypeError(msg)

    if not isinstance(last_name, str):
        msg = "last_name must be a string"
        raise TypeError(msg)

    print("My name is {} {}".format(first_name, last_name))                                                                                        if len(set(checkl)) != 1:
                                                                                                                            msg = "Each row of the matrix must have the same size"
                                                                                                                                    raise TypeError(msg)

                                                                                                                                    if not isinstance(div, (int, float)) or div != div:
                                                                                                                                                msg = "div must be a number"
                                                                                                                                                        raise TypeError(msg)

                                                                                                                                                        if div == 0:
                                                                                                                                                                    msg = "division by zero"
                                                                                                                                                                            raise ZeroDivisionError(msg)

                                                                                                                                                                            new_m = [[round(j / div, 2) for j in i] for i in matrix]
                                                                                                                                                                                return (new_m)
