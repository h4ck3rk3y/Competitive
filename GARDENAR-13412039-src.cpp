#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <set>
#define max(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })
typedef long long int lli;
using namespace std;
double doIt(double a){
  return ((a*a*sqrt(3))/4);
}
int main(){
  double t,a,b,c,s,result;
  cin>>t;
  while(t--){
    cin>>a>>b>>c;
    s = ((a+b+c)/2);
    result = 0.5*(doIt(a)+doIt(b)+doIt(c)+3*sqrt(((s)*(s-a)*(s-b)*(s-c))));
    printf("%.2f\n",result);
  }
}
