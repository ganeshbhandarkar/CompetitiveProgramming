# https://www.geeksforgeeks.org/program-to-find-whether-a-no-is-power-of-two/
#User function Template for python3

# bool isPowerOfTwo(int n)
# {
#    if(n==0)
#    return false;
 
#    return (ceil(log2(n)) == floor(log2(n)));
# }

##Complete this function
def isPowerofTwo(n):
    ##Your code here
    if(bin(n).count('1') == 1):
        return True
    return False

#{ 
#  Driver Code Starts
#Initial Template for Python 3

import math



def main():
    
    T=int(input())
    
    while(T>0):
        
        
        n=int(input())
        if isPowerofTwo(n):
            print("YES")
        else:
            print("NO")
        
        T-=1

if __name__=="__main__":
    main()
# } Driver Code Ends