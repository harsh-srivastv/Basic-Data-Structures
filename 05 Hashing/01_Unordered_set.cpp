#include<bits/stdc++.h>
using namespace std;


int main()
{   
    // creating unordered set
    unordered_set<int> set;
    
    // inserting values
    set.insert(15);
    set.insert(26);
    set.insert(44);
    set.insert(3);

    // printing values of the set
    for(auto i = set.begin(); i!=set.end(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<set.size()<<endl; //prints size of the set
    // set.clear(); // it clears the set
    // cout<<set.size()<<endl;
    cout<<endl;

    // finding element in the set
    if(set.find(15) == set.end()){
        cout<<"Not Found";
    }
    else{
        cout<<"Found";
    }
    cout<<endl;

    // finding element using count function
    if(set.count(15)) cout<<"Found";
    else cout<<"Not Found";

    // erase() is used to delete elements from the set
    set.erase(15); // it removes 15 from the set
    // another way to delete an element
    auto i = set.find(44);
    set.erase(i);
    
    return 0;
}