#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef		vector<ll>      vll;
#define		pb              push_back
#define		pob             pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           v.size()
#define		mms(ar,a)       memset(ar,a,sizeof(ar))
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)

int main()
{
    ll n;
    int rem;

    while(S(n)==1 && n)
    {
        int sum=0;
        while(1)
        {
            while(n!=0)
            {
                rem = n%10;
                sum = sum+rem;
                n = n /10;
            }
            if(sum/10==0)
            {
                break;
            }
            else
            {
                n=sum;
                sum=0;
            }
        }
        printf("%d\n", sum);


    }

}
