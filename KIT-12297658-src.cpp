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

int main()
{	lli i ,j ,k,z;
	string line;
 	i=1;
while(i!=0){i--;
	cin>>j;
	lli arr[j];
	for(k=0;k<j;k++){
		cin>>arr[k];
	}
	z=j;
	j=0;
	vector<string> list;
	
	while(1){
		cin>>line;
		if(line.compare("-1")==0){
			break;
		}
		list.push_back(line);
		j++;
	}
	
	string opu= "";
	k=0;
	for(lli b = 0 ;b<j;b++){
		for(lli r = 0;r<list[b].length();r++){
			char d = list[b].at(r);
			if(d+arr[k]>122){
				d = (char)(96 +  arr[k]  - (122-d));
			}
			else{
				d = (char)(d + arr[k]);
			}
			k++;
			if(k>=z){
				k=0;
			}
			opu = opu + d;
		}
		cout<<opu<<endl;
		opu = "";
		}
	
	}
}


