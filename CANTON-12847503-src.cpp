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
using namespace std;
int main(void)
{
	lli t;
	cin>>t;
	while(t!=0){
		lli n,temp,i,o;
		cin>>n;
		temp=n;
		i=1;
		while(temp>i){
			temp = temp - i;
			i=i+1;
		}
		lli a,b;
		if(i%2==0){
			a=temp;
			b=i-temp+1;
		}
		else{
			a=i-temp+1;
			b=temp;
		}
		cout<<"TERM "<<n<<" IS "<<a<<"/"<<b<<endl;
		t--;
	}
}
