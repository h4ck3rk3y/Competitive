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
#define max(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })
int main()
{
	int n, i;
	cin>>n;
	for(i=0; i<n; i++){
		int nm, j;
		long long int a[1001], b[1001];
		cin>>nm;
		for(j=0; j<nm; j++)
			cin>>a[j];
		b[0]=a[0];
		b[1]=max(b[0],a[1]);
		for(j=2; j<nm; j++)
			b[j]=max(b[j-1],a[j]+b[j-2]);
		cout<<"Case "<<i+1<<": "<<b[nm-1]<<endl;
	}
	return 0;
}