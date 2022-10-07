#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
    node(int x){
        data = x;
        next = NULL;
    }
};
// Iterative printing approad
/*void print_list(node *head){
    while(head->next != NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<head->data;
}*/
// Recursive printing approach
void print_list(node *head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    print_list(head->next);
}

int main()
{   
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);

    print_list(head);
    return 0;
}