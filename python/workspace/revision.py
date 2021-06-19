# A sample function that takes 4 arguments
# and prints the,
def fun(a, b, c, d):
    print(a, b, c, d)

# Driver Code
my_list = [1, 2, 3, 4]

# Unpacking list into four arguments
fun(*my_list)

# A Python program to demonstrate use
# of packing

# This function uses packing to sum
# unknown number of arguments
def mySum(*args):
    sum = 0
    for i in range(0, len(args)):
        sum = sum + args[i]
    return sum

# Driver code
print(mySum(1, 2, 3, 4, 5))
print(mySum(10, 20))


# A sample program to demonstrate unpacking of
# dictionary items using **
def fun(a, b, c):
    print(a, b, c)

# A call with unpacking of dictionary
d = {'a':2, 'b':4, 'c':10}
fun(**d)


# A sample program to demonstrate unpacking of
# dictionary items using **
def fun(a, b, c):
    print(a, b, c)

# A call with unpacking of dictionary
d = {'a':2, 'b':4, 'c':10}
fun(**d)

# Python code to demonstate Byte Decoding

# initialising a String
a = 'GeeksforGeeks'

# initialising a byte object
c = b'GeeksforGeeks'

# using decode() to decode the Byte object
# decoded version of c is stored in d
# using ASCII mapping
d = c.decode('ASCII')

# checking if c is converted to String or not
if (d==a):
    print ("Decoding successful")
else :
    print ("Decoding Unsuccessful")


# Python code to illustrate how mangling works
class Map:
    def __init__(self, iterate):
        self.list=[]
        self.__geek (iterate)

    def geek(self, iterate):
        for item in iterate:
            self.list.append (item)

        # private copy of original geek() method

    __geek=geek


class MapSubclass (Map):
    # provides new signature for geek() but
    # does not break __init__()
    def geek(self, key, value):
        for i in zip(keys,values):
            self.list.append (i)

# File1.py
print ("File1 __name__ = %s" %__name__ )
if __name__ == "__main__":
    print ("File1 is being run directly")
else:
    print ("File1 is being imported")

