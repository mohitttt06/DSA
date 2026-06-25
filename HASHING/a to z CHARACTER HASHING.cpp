a to z CHARACTER HASHING


#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    string arr;
    cout << "enter the chars: ";
    cin >> arr;
    
    int hash[26]={0};
    
    //precomputation
    for(int i=0;i<arr.size();i++)
    {
        
        hash[arr[i]-'a']++;
    }
    
    
    //fetching
    int Q;
    cout << "Enter no. queries: ";
    cin >> Q;
    char q;
   for(int i=0;i<Q;i++)
   {
        cin>>q;
        cout << hash[q-'a'] << "\n";
        
    }
    
    return 0;
}
