def countWays(n, m): 
    res = [0 for x in range(n)]  
    res[0], res[1] = 1, 1
      
    for i in range(2, n): 
        j = 1
        while j<= m and j<= i: 
            res[i] = res[i] + res[i-j] 
            j = j + 1 
    return res[n-1] 
  
def countW(s, m): 
    return countWays(s + 1, m) 

s=int(input("Number of stairs: ") )
m=int(input("how hight the rebbit can jump? "))     
print ("Number of ways =", countW(s, m)) 
