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
 lli multi(lli a, lli b);
 int main(){    
 	lli t,k,f,n,i;
 	cin>>t;
 	while(t!=0){
 		f=0;
 		t--;
 		cin>>n;
 		for( i=1;i<=n;i++){
 			cin>>k;
 			if(k>i-1){
 				f=1;
 			}
 		}
 		if(f==0){
 			cout<<"YES"<<endl;
 		}
 		else{
 			cout<<"NO"<<endl;
 		}

 	}
 	return 0;

}
 