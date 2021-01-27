#User function Template for python3

class Solution:
    def findNth(self,N):
        i = 0
        a = 0
        while N:
            a += (10**i)*(N%9)
            N = N//9
            i += 1
        return a


#{ 
#  Driver Code Starts
#Initial Template for Python 3

t=int(input())
for i in range(0,t):
    n=int(input())
    obj=Solution()
    s=obj.findNth(n)
    print(s)
# } Driver Code Ends