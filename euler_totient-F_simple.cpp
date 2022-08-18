#include<bits/stdc++.h>
using namespace std;
int GCD_FUNCTION(int num1,int num2)
{
    if(num1 % num2 == 0)
    {
        return num2;
    }
    else
    {
        return GCD_FUNCTION(num2,num1%num2);
    }
}
int main()
{
    int num,phi=0;
    cin>>num;
    for(int num2=1;num2<num;num2++)
    {
        int gcd=GCD_FUNCTION(num,num2);
        if(gcd==1)
            phi++;
    }
    cout<<"Phi("<<num<<") = "<<phi<<endl;
    
}