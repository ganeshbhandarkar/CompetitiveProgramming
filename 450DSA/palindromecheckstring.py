# https://www.geeksforgeeks.org/c-program-check-given-string-palindrome/
#User function Template for python3
class Solution:
	def isPlaindrome(self, S):
		# code here
		r = S[::-1]
		if r == S:
		    return 1
		return 0



#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		S = input()
		ob = Solution()
		answer = ob.isPlaindrome(S)
		print(answer)

# } Driver Code Ends