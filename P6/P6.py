def P6(string,rows):

    middleRows = rows-1
    count = 0
    array = [[]]
    print(string)    

    if rows == 1:
        return string
    else:
        for i,letter in enumerate(string):
            if i%rows==0:
                array.append([])
                count+=1
            
            


print(P6("PAYPALISHIRING",1))