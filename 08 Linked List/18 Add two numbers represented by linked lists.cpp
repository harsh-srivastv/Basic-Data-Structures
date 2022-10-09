// https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1?page=1&company[]=Morgan%20Stanley&category[]=Linked%20List&sortBy=submissions

//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    Node* reverse(Node *head)
    {
        Node* curr = head;
        Node* prev = NULL;
        Node *next = curr->next;
        
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        Node* l1 = reverse(first);
        Node* l2 = reverse(second);
        
        Node* head = new Node(0);
        Node* temp = head;
        
        int carry=0;
        while(l1 or l2 or carry){
            int sum=0;
            if(l1){
                sum += l1->data;
                l1 = l1->next;
            }
            if(l2){
                sum += l2->data;
                l2 = l2->next;
            }
            
            sum += carry;
            carry = sum/10;
            Node *node = new Node(sum%10);
            temp->next = node;
            temp = temp->next;
        }
        Node* ans = reverse(head->next);
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends