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

int search_list(node *head, int key){
    static int pos=1;
    if(head == NULL){
        return -1;
    }
    else
    {
        if(head->data==key)
        {
        return pos;
        }
        else
        {
            pos++;
            return search_list(head->next, key);
        }
    }
}

int main()
{   
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    int key = 30;
    int res = search_list(head, key);
    cout<<res;
    return 0;
}