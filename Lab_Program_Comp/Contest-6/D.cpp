#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b,c,original,k,aux=0,rem;

    cin>>original>>a>>b>>c;

    for(int i=0;i*a<=original;++i)
    {
        for(int j=0;i*a+j*b<=original;++j)
        {
            rem=original-i*a-j*b;
            if(rem%c==0)
            {
                k=rem/c;
            aux=max(aux,i+j+k);}
        }

    }
    cout<<aux<<endl;
    
    return 0;
}