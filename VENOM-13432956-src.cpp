#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <set>
#define max(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })
typedef long long int lli;
using namespace std;
  int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {   long long int h,p,a;
        scanf("%lld %lld %lld",&h,&p,&a);
        if(h<=p)
        {
            printf("1\n");
            continue;
        }
        double term1,term2,term3;
        long long int result=0;
        term1 = 2*a - p;
        term2 = 2*(a-h);
        term3 = sqrt(term1*term1 - 4*p*term2);
        result = ceil((term1 + term3)/(2*p));
        result = result + (result-1);
        printf("%lld\n",result);
    }
}
  