 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     vector <int> a = {1,2,3,4,5};
     vector <int> b;
     int final=0;
     
             for(int i=0;i<5;i++)
             {
                  if (i==0)
                     {
                         b.push_back(a[0]);
                     }
                     else
                     {
                         final = a[i]+b[i-1];
                   b.push_back(final);
                     }
                   
            }
             
             for(int k=0;k<5;k++)
             {
                 cout << b[k] << " ";
             }
         
     
     
     
    
 }
