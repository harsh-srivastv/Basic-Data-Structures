// https://practice.geeksforgeeks.org/problems/reverse-an-array/0

#include <iostream>
using namespace std;

void reverse(int arr[], int n){
    int i=0;
    int j = n-1;
    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main() {
	//code
	int test;
	cin>>test;
	while(test>0)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	    }
	    reverse(arr, n);
	    for(int i=0; i<n; i++)
    	{
	    cout<<arr[i]<<" ";
    	}
	    test--;
	    cout<<endl;
	}
	
	
	return 0;
}