for i in range(3): 
    yut = list(map(int, input().split()))  
    zero_count = yut.count(0)  

    if zero_count == 1:
        print("A")  
    elif zero_count == 2:
        print("B")  
    elif zero_count == 3:
        print("C")  
    elif zero_count == 4:
        print("D")  
    else:
        print("E") 