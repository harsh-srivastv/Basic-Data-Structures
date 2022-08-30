//  Search, Insert and Delete takes O(1) time

#include<bits/stdc++.h>
using namespace std;


int main()
{   // creating unordered map
    unordered_map<string, int> m;
    // Inserting key and values 
    m["A"] = 10;
    m["B"] = 20;
    m["C"] = 30;

    // Finding Key
    if(m.find("A") != m.end()){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    // Printinig all Key and Value Pairs
    for(auto t = m.begin(); t != m.end(); t++){
        cout<<t->first<<" "<<t->second<<endl;
    }
    return 0;
}