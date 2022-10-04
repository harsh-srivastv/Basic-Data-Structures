# https://practice.geeksforgeeks.org/problems/merge-sort/1

#User function Template for python3

class Solution:
    def merge(self,arr, l, m, r): 
        n1 = m-l+1
        n2 = r-m
        left = list()
        right = list()
        res = list()
        for i in range(n1):
            left.append(arr[l+i])
        for j in range(n2):
            right.append(arr[m+1+j])
        
        i=0
        j=0
        k=l
        while i<n1 and j<n2:
            if left[i]<=right[j]:
                arr[k] = left[i]
                i+=1
                k+=1
            else:
                arr[k] = right[j]
                j+=1
                k+=1
        while i<n1:
            arr[k] = left[i]
            i+=1
            k+=1
        while j<n2:
            arr[k] = right[j]
            j+=1
            k+=1
        
    def mergeSort(self,arr, l, r):
        if r>l:
            m = l+(r-l)//2
            self.mergeSort(arr, l, m)
            self.mergeSort(arr, m+1, r)
            self.merge(arr, l, m, r)



#{ 
 # Driver Code Starts
#Initial Template for Python 3


import sys
input = sys.stdin.readline
if __name__ == "__main__":
    t=int(input())
    for i in range(t):
        n=int(input())
        arr=list(map(int,input().split()))
        Solution().mergeSort(arr, 0, n-1)
        for i in range(n):
            print(arr[i],end=" ")
        print()
# } Driver Code Ends