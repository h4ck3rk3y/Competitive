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
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        map < int, pair <int,int> > location;
        int n;
        scanf("%d",&n);
        int i,j,a,count=0;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                scanf("%d",&a);
                location[a] = make_pair(i,j);
            }
        }
        n = n*n;
        for(i=2;i<=n;i++){
            count = abs(location[i].first - location[i-1].first) + abs(location[i].second - location[i-1].second) + count;
        }
        printf("%d\n",count);
    }
}
