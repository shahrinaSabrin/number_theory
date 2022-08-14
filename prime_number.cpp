//OF nlog(log(n)) OR OF(N)
//SIEVE OF ERATOSTHENES.
#include<bits/stdc++.h>
using namespace std;
int sieve(int k)
{
    int num=1000;
    int prime_nums[num];
    for(int i=2;i<=num;i++)
    {
        //suppose all the numbers from 2 to num is prime.
        prime_nums[i]=1;
    }
    int limit=sqrt(num);
    for(int i=2;i<limit;i++)
    {
        if(prime_nums[i])
        {
            for(int j=i*i;j<=num;j+=i)
            {
                //mark that the num is not prime.
                prime_nums[j]=0;
            }
        }
    }
    vector<int>prime;
    for(int i=2;i<=num;i++)
    {
        if(prime_nums[i])
        {
            //put the prime numbers in a vector.
            prime.push_back(i);
        }
    }
    return prime[k];
   

}
int main()
{
    int k;
    cin>>k;
    int num=sieve(k);//find Kth prime number.
    cout<<num<<endl;
}