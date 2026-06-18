RECURSION -> A FUNCTION CALLING ITSELF AGAIN AND AGAIN UNTIL A BASE CONDITION IS MET.

WIHTOUT BASE CONDITION WE ENCOUNTER STACK OVERFLOW.
#include <bits/stdc++.h>
using namespace std;

void print()
{
    cout << 1;
    print();
}


THIS IS THE RECURSION.
int main()
{
    print();
}


#include<bits/stdc++.h>
using namespace std;

int cnt =0;
void print()
{
    if(cnt==5) return;
    else
    {
        cout << cnt << "\n";
        cnt++;
        print();
    }
}


int main()
{
    print();
}
