FIBONACCI NUMBER USING RECURSION


#include<bits/stdc++.h>
using namespace std;

int fib(int n,int last,int slast)
{
    if(n<=1)
    {
        return n;
    }
    last=fib(n-1,last,slast);
    slast=fib(n-2,last,slast);
    return last+slast;
    
}

int main()
{
    int N;
    cout << "Enter the number: ";
    cin >> N;
    cout << fib(N,0,0);
    return 0;
}
