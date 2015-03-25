#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <set>
#define max(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })
typedef long long int lli;
using namespace std;
static short arr[6101][6101];
lli lcs(vector<lli> agnes,vector<lli>tom,lli len1,lli len2){
  short i,j;
  for(i=0;i<=len1;i++){
    for(j=0;j<=len2;j++){
      if(i==0||j==0){
        arr[i][j]=0;
      }
      else if(agnes[i-1]==tom[j-1]){
        arr[i][j] = arr[i-1][j-1] + 1;
      }
      else{
        arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
      }
    }
  }
  return arr[len1][len2];
}


int main(){
  lli testcases,max=0;
  scanf("%lld",&testcases);
  while(testcases--){
    vector<lli> agnes;
    lli temp;
    max=0;
    while(true){
      scanf("%lld",&temp);
      agnes.push_back(temp);
      if(temp==0){
      break;  
      }
    }
    while(true){
      vector <lli> tom;
      scanf("%lld",&temp);
      if(temp==0){
        break;
      }
      while(true){
        tom.push_back(temp);
        if(temp==0){
          break;
        }
        scanf("%lld",&temp);
      }
      lli result = lcs(agnes,tom,agnes.size(),tom.size());
        if(result>max){
          max = result;
        }
    }
    max = max-1;
    printf("%lld\n",max);
  }
}