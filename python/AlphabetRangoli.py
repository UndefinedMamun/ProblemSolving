def print_rangoli(size):
    # your code goes here
    arr = list(map(chr, range(97, 123)))
    lastHalf = []
    width = (size*2)-1
    for i in reversed(range(size)):
        line = ''
        for l in reversed(range(i,size)):
            line = line+arr[l]+'-'
        
        #spliting the last -
        line = line[:-1].rjust(width, '-')

        #reversing the string and concating by removing the first char
        line = line+line[::-1][1:]

        lastHalf.append(line)
        print(line)
    
    for line in reversed(lastHalf[:-1]):
        print(line)


print_rangoli(26)
