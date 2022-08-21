#include<bits/stdc++.h>
using namespace std;

void Tower_of_Hanoi(int n, char A, char B, char C)
{
    if(n==1){
        cout<<"Move Disk 1 from "<<A<<" to "<<C<<endl;
        return ;
    }
    Tower_of_Hanoi(n-1, A, C, B);
    cout<<"Move Dsik "<<n<<" from "<<A<<" to "<<C<<endl;
    Tower_of_Hanoi(n-1, B, A, C);
}

int main()
{   
    char A, B, C;
    int n;
    cout<<"Enter no. of Disk: ";
    cin>>n;
    Tower_of_Hanoi(n, 'A', 'B', 'C');
    return 0;
}