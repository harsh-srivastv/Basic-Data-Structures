# https://practice.geeksforgeeks.org/problems/linked-list-that-is-sorted-alternatingly/1

#User function Template for python3

'''
class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
'''
def sort(head):
    temp = head
    arr = []
    
    while temp:
        arr.append(temp.data)
        temp = temp.next
    
    arr.sort()
    new = Node(arr[0])
    head = new
    for i in range(1, len(arr)):
        new.next = Node(arr[i])
        new = new.next
    
    return head
    



#{ 
 # Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
class Node:
    def __init__(self,data):
        self.data=data
        self.next=None

class Llist:
    def __init__(self):
        self.head=None
    
    def insert(self,data,tail):
        node=Node(data)
        
        if not self.head:
            self.head=node
            return node
        
        tail.next=node
        return node
        

def printList(head):
    while head:
        print(head.data,end=' ')
        head=head.next
        
if __name__ == '__main__':
    t=int(input())
    
    for tcs in range(t):
        
        n1=int(input())
        arr1=[int(x) for x in input().split()]
        ll1=Llist()
        tail=None
        for nodeData in arr1:
            tail=ll1.insert(nodeData,tail)
            
            
        resHead=sort(ll1.head)
        printList(resHead)
        print()
        
    
    
# } Driver Code Ends