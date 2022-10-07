// https://practice.geeksforgeeks.org/problems/linked-list-insertion-1587115620/0

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
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
  }  
  cout<<"\n";
} 



// } Driver Code Ends
/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       Node *temp = new Node(x);
       Node *p = head;
       if(head == NULL){
           head = temp;
           head->next = NULL;
       }
       else{
       temp->next = head;
       head = temp;
       }
       return head;
    //   while(p != NULL){
    //       cout<<p->data<<endl;
    //       p = p->next;
    //   }
    }
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
        Node *temp = new Node(x);
        Node *p = head;
        temp->next = NULL;
        if(head == NULL){
            head = temp;
        }
        else{
            Node *curr = head;
            while(curr->next != NULL){
                curr =  curr->next;
            }
            curr->next = temp;
            
        }
        return head;
        
    //     while(p != NULL){
    //       cout<<p->data<<endl;
    //       p = p->next;
    //   }
        
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        struct Node *head = NULL;
        for (int i = 0; i < n; ++i)
        {
            int data, indicator;
            cin>>data;
            cin>>indicator;
            Solution obj;
            if(indicator)
                head = obj.insertAtEnd(head, data); 
            else
                head = obj.insertAtBegining(head, data);
        }
        printList(head); 
    }
    return 0; 
} 


// } Driver Code Ends