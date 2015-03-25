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
int lcs(string word1,string word2,short len){
  short i,j;
  for(i=0;i<=len;i++){
    for(j=0;j<=len;j++){
      if(i==0||j==0){
        arr[i][j]=0;
      }
      else if(word1[i-1]==word2[j-1]){
        arr[i][j] = arr[i-1][j-1] + 1;
      }
      else{
        arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
      }
    }
  }
  return arr[len][len];
}


int main(){
  lli testcases;
  scanf("%lld",&testcases);
  string word1;
  string word2="";
  while(testcases--){
    cin>>word1;
    word2 = "";
    for(lli i =word1.size()-1 ;i>=0;i--){
      word2 = word2 + word1[i];
    }
    short len = word1.size();
    short cool = lcs(word1,word2,len);
    if(cool==0){
      printf("%d\n",len-cool+1);
    }
    else{
      printf("%d\n",len-cool);
    }
  }
}