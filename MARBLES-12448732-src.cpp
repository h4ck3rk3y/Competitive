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
lli i;
cin>>i;
lli n,k,r;
lli pnc(lli n, lli k);
while(i!=0){
i--;

cin>>n>>k;
n= n -1;
k = k - 1;
if(k>=n/2){
r=pnc(n,n-k);}
else{
r = pnc(n,k);	
}
cout<<r<<endl;
}
return 0;
}


lli pnc(lli n, lli k)
{if(k==0){
	return 1;
}
else{
	return pnc(n,k-1)*(n-k+1)/k;
}

}
 




