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
{   lli t;
	cin>>t;
	lli x,y,x1,y1,cost;
	while(t!=0){
		x1 = 1;
		y1 = 1;
		cost =0;
		t--;
		lli i;
		cin>>x>>y;
		vector< pair<lli,lli> > v;
		for(lli z =0;z<x+y-2;z++){
			if(z<x-1){
				
				cin>>i;
			v.push_back(std::make_pair(i,0));
			}
			else{
				
				cin>>i;
				v.push_back(std::make_pair(i,1));
			}
		}
		sort(v.begin(),v.end());
		for( i = x+y-3 ; i>=0 ;i--){
			if(v[i].second==0){
				cost = cost + y1*v[i].first;
				x1++;
			}
			else{
				cost = cost + x1*v[i].first;
				y1++;
			}
		}
		cout<<cost<<endl;
		
	}
return 0; }


