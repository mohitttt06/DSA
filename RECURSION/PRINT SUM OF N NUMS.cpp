 PRINT SUM OF N NUMBERS USING RECURSION

#include<bits/stdc++.h>
using namespace std;

int l=0;
void print(int c,int k,int n)
{
    
    if(k>n) 
    {
        cout << c;
        return;
    }
    else
    {
        c=c+k;
        k++;
        print(c,k,n);
    }
}

int main()
{
    int N;
    cout << "Enter: ";
    cin >> N;
    
    print(0,0,N);
    return 0;
}
