SELECTION SORT

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the array size: ";
    cin >> n;
    int arr[n];
    
    cout << "Enter The Elements: ";
    
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                swap(arr[j],arr[min]);
            }
        }
    }
    
    cout << "Sorted Array By Insertion Sort: ";
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}
