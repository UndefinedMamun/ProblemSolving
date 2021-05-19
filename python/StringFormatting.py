def print_formatted(number):
    # your code goes here
    width = len(bin(number)[2:])

    for i in range(1, number+1):
        integar = str(i).rjust(width)
        o = oct(i)[2:].rjust(width)
        h = hex(i)[2:].upper().rjust(width)
        b = bin(i)[2:].rjust(width)
        print("{} {} {} {}".format(integar, o, h, b))


 


print_formatted(99)