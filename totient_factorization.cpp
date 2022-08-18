//O(nloglog(n))
#include<bits/stdc++.h>
using namespace std;
void phi_1_to_n(int n)
{
    vector<int> phi(n + 1);
    for (int i = 0; i <= n; i++)
        phi[i] = i;

    for (int i = 2; i <= n; i++)
    {
        if (phi[i] == i)
        {
            for (int j = i; j <= n; j += i)
            {
                phi[j] -= phi[j] / i;//remove the divisors of phi[j]    
            }
        }    
    }
    for (int i = 1; i <= n; i++)
    {
        cout<<"phi("<<i<<") = " << phi[i]<<"\n";
    }
}
int main()
{
    int n;
    cin>>n;
    phi_1_to_n(n);
}