// https://practice.geeksforgeeks.org/problems/delete-middle-of-linked-list/1

//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

/* Function to get the middle of the linked list*/
struct Node *deleteMid(struct Node *head);
void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
} 
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		head = deleteMid(head);
		printList(head); 
	}
	return 0; 
} 



// } Driver Code Ends


/* Link list Node:

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

// Deletes middle of linked list and returns head of the modified list
Node* deleteMid(Node* head)
{
    Node *curr = head;
    Node *size = head;
    
    int n=0;
    while(size != NULL){
        n++;
        size = size->next;
    }
    
    if(n==1) return head;
    
    if(n==2){
        head->next = NULL;
        return head;
    }
    
    int pos;
    if(n%2==0) pos = n/2;
    else pos = n/2;
    
    while(curr != NULL){
        pos--;
        if(pos == 0){
            Node *temp = curr->next;
            curr->next = curr->next->next;
            delete(temp);
            return head;
        }
        curr = curr->next;
    }
}