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
#define 	S(a)            scanf("%s",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)

int main()
{
    int Case=0;
    char ch[100];
    while(S(ch)==1)
    {
        if(!strcmp(ch,"*")) break;
        printf("Case %d: ",++Case);

        if(!strcmp(ch,"Hajj")) puts("Hajj-e-Akbar");
        else if(!strcmp(ch,"Umrah")) puts("Hajj-e-Asghar");


    }
    return 0;
}

