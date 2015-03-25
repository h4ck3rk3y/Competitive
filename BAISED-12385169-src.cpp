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
typedef unsigned long long  int ui;
#define max(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })
#define min(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _b : _a; })
lli div(lli a);
lli prime(lli a);
int main()
{   lli r,x,badness ;
	cin>>r;
	string name;
	while(r!=0){
		badness=0;
		r--;
		cin>>x;
		lli arr[x];
		for(int i =0 ;i<x;i++){
			cin>>name;
			cin>>arr[i];
		}
		
		sort(arr,arr+x);
		for(int i =0;i<x;i++){
			
			badness = fabs(arr[i]-i-1) +badness;
		}
				cout<<badness<<endl;

	}

return 0; }

