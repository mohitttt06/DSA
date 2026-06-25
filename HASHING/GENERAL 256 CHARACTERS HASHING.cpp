GENERAL 256 CHARACTERS HASHING

#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    string arr;
    cout << "enter the chars: ";
    cin >> arr;
    
    int hash[256]={0};
    
    //precomputation
    for(int i=0;i<arr.size();i++)
    {
        
        hash[arr[i]]++;
    }
    
    
    //fetching
    int Q;
    cout << "Enter no. queries: ";
    cin >> Q;
    char q;
   for(int i=0;i<Q;i++)
   {
        cin>>q;
        cout << hash[q] << "\n";
        
    }
    
    return 0;
}
