REVERSING AN ARRAY USING TWO POINTERS BY RECURSION

#include<bits/stdc++.h>
using namespace std;
void rev(int l,int r,int ar[])
{
    if(l>=r) return;
    else
    {
        swap(ar[l],ar[r]);
        rev(l+1,r-1,ar);
    }
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    rev(0,4,arr);
    for(int i=0;i<5;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}


REVERSING AN ARRAY USING SINGLE POINTER BY RECURSION

#include<bits/stdc++.h>
using namespace std;

void rev(int i,int n,int arr[])
{
    if(i>=n/2) return;
    else
    {
        swap(arr[i],arr[n-i-1]);
        rev(i+1,n,arr);
    }
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    rev(0,5,arr);
    for(int i=0;i<5;i++)
    {
        cout << arr[i] << " ";
    }
}
