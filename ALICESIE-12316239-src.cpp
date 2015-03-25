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
#define max(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })
#define min(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _b : _a; })
lli div(lli a);
lli prime(lli a);
int main()
{lli t,n;
	cin>>t;
	while(t!=0){
		t--;
		cin>>n;
		if(n%2==0){
			cout<<n/2<<endl;
		}
		else{
			cout<<(n+1)/2<<endl;
		}
	}


return 0; }
