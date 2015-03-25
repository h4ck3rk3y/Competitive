#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
#include <math.h> 
#include <vector>
#include <set>
#include <map> 
#include <string.h>
#include <cstdlib>
#include <limits.h>
#include <tr1/unordered_map>
#include <tr1/unordered_set>
#include <functional>
#include <stack>
#include <queue>
typedef long long int lli;
#define max(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })
#define min(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _b : _a; })
#define toInt(c) (c-'0')
#define toChar(c) (c+'0')
using namespace std;
double dp[1000][6000];
double comb(lli n,lli k)
{
	if (n == 0) {
		return k == 0 ? 100 : 0;
	}
	if (k <= 0) {
		return 0;
	}
	if (dp[n][k] > -0.5){ 
		return dp[n][k];
	}
	return dp[n][k] = (comb(n - 1, k - 1) + comb(n-1,k-2)+comb(n-1,k-3)+comb(n-1,k-4)+comb(n-1,k-5) + comb(n - 1, k - 6)) / 6;
}
int main(){			
	for(lli i = 0;i<1000;i++){
    	for(lli j=0;j<6000;j++){
    		dp[i][j]=-5;
    	}
    }
	lli t,a,b;
	scanf("%lld",&t);
  	while(t!=0){
		t--;
		scanf("%lld %lld",&a,&b);
	    if(b > a*6 or b<a or a>547){
	    	printf("0\n");
	    	continue;
	    }
	    dp[a][b]=comb(a,b);
		printf("%.0f\n",floor(dp[a][b]));
	}
}