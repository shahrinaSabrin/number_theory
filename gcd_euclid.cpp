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
    int num1,num2;
    cin>>num1>>num2;
    int gcd=GCD_FUNCTION(num1,num2);
    cout<<"Greatest Common Divisor : "<<gcd<<endl;
}