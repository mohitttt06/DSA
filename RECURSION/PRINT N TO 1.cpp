PRINT N TO 1 NUMBERS USING RECURSION

#include<bits/stdc++.h>
using namespace std;


void print(int i)
{
    
    if(i<1) return;
    else
    {
        cout << i << "\n";
        i--;
        print(i);
    }
}

int main()
{
    int N;
    cout << "Enter: ";
    cin >> N;
    int c=N;
    print(c);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;


void print(int i)
{
    
    if(i<1) return;
    else
    {
        cout << i << "\n";
        i--;
        print(i);
    }
}

int main()
{
    int N;
    cout << "Enter: ";
    cin >> N;
    int c=N;
    print(c);
    return 0;
}
