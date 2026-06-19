PARAMETERIZED RECURSION (FACTORIAL)
#include<bits/stdc++.h>
using namespace std;

void fact(int i,int j,int k)
{
    if(j>k)
    {
        cout << i;
        return;
    }
    else
    {
        i=i*j;
        j++;
        fact(i,j,k);
    }
}

int main()
{
    int n;
    cout << "Enter the Number for Factorial: ";
    cin >> n;
    fact(1,1,n);
    return 0;
}




FUNCTIONAL RECURSION (FACTORIAL)
#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n==0) return 1;
    else
    {
        return n*fact(n-1);
    }
}

int main()
{
    int N;
    cout << "Enter the number for Factorial: ";
    cin >> N;
    cout << fact(N);
    return 0;
}
















