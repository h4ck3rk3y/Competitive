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
typedef unsigned long long int ulli;
#define max(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })
#define min(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _b : _a; })
int main()
{	ulli t1,t;
	cin>>t1;
	ulli x,y;
	ulli f;
	while(t1!=0){
		t1--;
		cin>>t;
		vector < pair<ulli,ulli> > p;
		vector < pair<ulli,ulli> > c;
		for(ulli x1 = 0 ;x1<t;x1++){
			cin>>x>>y;
			p.push_back(make_pair(y,x));
		}
		sort(p.begin(),p.end());
		f= 1;
		c.push_back(p[0]);
		ulli ccounter=0;
		for(ulli i=1;i<t;i++){
			if(p[i].second>=c[ccounter].first){
				c.push_back(p[i]);
				f++;
				ccounter++;
			}
		}

		cout<<f<<endl;
		
	}




	return 0; }

