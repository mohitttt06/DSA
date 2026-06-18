PRINT A NAME UPTO N TIMES USING RECURSION

#include<bits/stdc++.h>
using namespace std;

int c=0;
void myself(string peru,int n)
{
    if(c==n) return;
    else
    {
        cout << peru << "\n";
        c++;
        myself(peru, n);
    }
}

int main()
{
    string name;
    int N;
    cout << "name: ";
    cin  >> name;
    cout << "N: ";
    cin >> N;
    myself(name,N);
    return 0;
}
