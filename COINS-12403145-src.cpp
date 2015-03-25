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
  map<lli,lli> m;
  lli f(lli n){
  	if(n==0){
  		return 0;
  	}
  	lli r = m[n];
  	if(r==0){
  		r = max(n,f(n/2)+f(n/3)+f(n/4));
  		m[n]=r;
  	}
  	return r;
  }	
  int main()
   { lli x;
     while(cin>>x){
      m.clear();
      cout<<f(x)<<endl;

    }
    
    return 0;
    }