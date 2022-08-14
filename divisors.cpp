//PRINT ALL THE DIVISORS OF THE NUMBER OF 1 TO N.
//OF Nlog(N) OR OF N.
#include<bits/stdc++.h>
using namespace std;
void divisors(int num)
 {
    vector<int>divisor[1000];
    for(int i=1;i<=num;i++)
    {
        for(int j=i;j<=num;j+=i)
        {
            divisor[j].push_back(i);
        }
    }
    for(int i=1;i<=num;i++)
    {
        cout<<"Divisors of "<<i<<" : ";
        vector<int>::iterator it;
        for ( it = divisor[i].begin();
             it != divisor[i].end(); it++)
        {
            cout << *it << ' ';
        }
        cout << endl;
    }
}

int main()
{
    int num;
    cin>>num;
    divisors(num);    
} 
