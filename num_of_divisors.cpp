//count the total divisors of a number.
#include<bits/stdc++.h>
using namespace std;
int count_divisors(int num)
{
    //sieve methode to calcute the prime numbers.
    bool prime[num + 1];
    memset(prime, true, sizeof(prime));
    int limit=sqrt(num)+1;
    for(int i=2;i<limit;i++)
    {
        if(prime[i])
        {
            for(int j=i*i;j<limit;j+=i)
            {
                prime[j]=false;
            }
        }
    }

    // Traversing through all prime numbers
    int total = 1;
    for (int p = 2; p <= num; p++)
    {
        if (prime[p])
        {
            int cnt = 0;
            if (num % p == 0)
            {
                while (num % p == 0)
                {
                    num = num / p;
                    cnt++;
                }
                total = total * (cnt + 1);
            }
        }
    }
    return total;
}

int main()
{
    int num;
    cin>>num;
    cout<<"Total number of the divisors of "<<num<<" : "<<count_divisors(num)<<endl;
}