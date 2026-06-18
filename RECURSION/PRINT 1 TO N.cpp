PRINT 1 TO N NUMBERS USING RECURSION

#include<bits/stdc++.h>
using namespace std;


void print(int i,int n)
{
    if(i>n) return;
    else
    {
        cout << i << "\n";
        i++;
        print(i,n);
    }
}

int main()
{
    int N;
    cout << "Enter: ";
    cin >> N;
    print(1,N);
    return 0;
}
