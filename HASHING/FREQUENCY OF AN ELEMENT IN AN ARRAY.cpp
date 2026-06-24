#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]={1,1,2,3,2};
    int n=5;
    int hash[1000001]={0};
    
    //precompuation of hashmap
    for(int i=0;i<n;i++)
    {
        hash[a[i]]=hash[a[i]]+1;
    }
    //fetching
    int q;
    cout << "Enter no of queries ";
    cin >> q;
    int r;
    cout << "Enter the query: ";
    while(q--)
    {
        cin >> r;
        cout << hash[r] << " " << "\n";
    }
    
    
    
}
