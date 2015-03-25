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
{   ui a;
	cin>>a;
	int flag = 0;
	if(a==1){
		cout<<"TAK";
	}
	else {
		while(a%2==0){
			a=a/2;
			if(a==1){
				flag =1;
			}	
		}
		if(flag==1){
			cout<<"TAK";
		}	
		else{cout<<"NIE";}
	}

return 0; }

