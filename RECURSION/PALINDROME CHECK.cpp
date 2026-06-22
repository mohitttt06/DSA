PALINDROME CHECK USING RECURSION

#include<bits/stdc++.h>
using namespace std;
bool cp(int l,int r,string palin)
{
    if(l>=r)
    {
        return true;
    }
    else if(palin[l]==palin[r])
    {
                l++;
        r--;
        
    }
    return cp(l,r,palin);
}

int main()
{
    string str = "icci";
    
    int s=str.size()-1;
    if(cp(0,s,str)==true)
    {
        cout << "PALINDROME";
    }
    else
    {
        cout << "NOT A PALINDROME";
    }
    
    
}
