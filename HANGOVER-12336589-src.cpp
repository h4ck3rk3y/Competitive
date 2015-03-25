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
using namespace std;
typedef long long int lli;
typedef unsigned int ui;
typedef long double lld;
#define max(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })
#define min(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _b : _a; })
int main()
{	lld i,n,sum;
	cin>>i;
	while(i!=0.0){
		n=1;
		sum=0;
		for(;sum<i;){
			sum = sum + (1/(n+1));
			n++;
		}
		cout<<n-1<<" card(s)"<<endl;
		cin>>i;
	}
	return 0;

}
