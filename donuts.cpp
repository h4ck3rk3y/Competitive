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
    lli t;
    scanf("%lld",&t);
    while(t--){
        lli n,m;
        scanf("%lld",&n);
        scanf("%lld",&m);
        lli number_of_groups = m;
        lli i=0,num;
        vector<lli> v;
        while(i!=m){
            scanf("%lld",&num);
            v.push_back(num);
            i++;
        }
        sort(v.begin(),v.end());
        i=0;
        lli breaks=0,length;
        while(true){
            while(v[i]!=1){;
                if(number_of_groups>1){
                    length = v[v.size()-1] + v[v.size()-2] + 1;
                    v.pop_back();
                    v.pop_back();
                    v.push_back(length);
                    v[i]--;
                    number_of_groups--;
                    breaks++;
                }
                else{
                    break;
                }
            }
            i++;
            if(number_of_groups>1){
                number_of_groups -= 2;
                breaks++;
            }
            else{
                break;
            }
        }
        printf("%lld\n",breaks);
    }
}
