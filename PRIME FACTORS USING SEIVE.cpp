#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int N=1000001;
int seive[1000001];
void Gen_seive()
{
    seive[0]=seive[1]=0;
    for(int i=2;i<=N;i++)seive[i]=i;
    for(int i=2;i*i<=N;i++)
    {
        if(seive[i]==i)//prime numbers
        {
            for(int j=i*i;j<=N;j+=i)
            {
                if(seive[j]==j)
                {
                    seive[j]=i;
                }
            }
        }
    }
}
int main() {
    Gen_seive();
    int n;
    cin>>n;
    while(n!=1)
    {
        cout<<seive[n]<<" ";
        n=n/seive[n];
    }
    return 0;
}
