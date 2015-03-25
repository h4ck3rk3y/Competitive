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
#define MOD 1000007
using namespace std;
typedef long long int lli;
typedef unsigned long long  int ui;
using namespace std;
int main(void)
{
	lli t;
	cin>>t;
	while(t!=0){
		lli n;
		scanf("%lld",&n);
		lli sum;
		sum = (n*(n+1))%MOD + ((n*(n-1))/2)%MOD; 
		sum = sum%MOD;
		printf("%lld\n",sum);
		t--;
	}


}
