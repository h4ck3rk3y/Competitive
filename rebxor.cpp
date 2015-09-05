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
    lli n;
    scanf("%lld",&n);
    lli dp[n];
    map<lli, pair <lli, lli> > point_map;
    lli max_index;
    lli second_max_index;
    lli i = 0;
    lli k = n;

    scanf("%lld",&dp[i]);
    i++;
    n--;

    max_index = 0;
    second_max_index = -1;

    lli temp;

    while(n--){
    	scanf("%lld",&temp);
    	dp[i] = max(dp[i-1]^temp, temp);
    	if(dp[i]>=dp[max_index]){
    		if(second_max_index!= i-1 or temp > dp[i-1]^temp){
    			second_max_index = max_index;
    			max_index = i;
    		}
    		else{
    			max_index = i;
    			second_max_index = -1;
    			temp = i;
    			dp[i-1] = -1;
    			while(i--){if (second_max_index==-1 or dp[i]>dp[second_max_index]) second_max_index = i;}
    			i = temp;
    		}
    	}
    	else if (second_max_index == -1 or dp[i] >= dp[second_max_index]){
    		if(second_max_index!=i-1 or temp>dp[i-1]^temp){
    			second_max_index = i;
    		}
    		else{
    			second_max_index = i;
    			dp[i-1] = -1;
    		}
    	}
    	i++;
    }
    printf("%lld\n",dp[max_index]+dp[second_max_index]);
}
