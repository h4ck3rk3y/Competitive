#include <iostream>
#include <cstdio>
#include <string.h>
#include <algorithm>
#include <vector>
#include <set>
#include <functional>
#define max(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })
typedef long long int lli;
using namespace std;
#define MAX 5000

lli arr[MAX][MAX];

lli search_related_row(lli row, vector<lli> interesting,lli n){
    lli i =0;
    lli j;
    lli cur_min = -1;
    while(i!=interesting.size()){
        if(arr[row][interesting[i]] == 1 and interesting[i]!=row){
            lli curr;
            for(j=0;j<n;j++){
                if(arr[interesting[i]][j]==1){
                    curr = curr + 1;
                }
            }
            if(cur_min==-1){
                cur_min = curr;
            }
            else if(cur_min<curr){
                cur_min = curr;
            }
        }
        i++;
    }
    return cur_min;
}
lli seach_row(lli i, lli n,lli final_output){
    lli t;
    vector <lli> interesting;
    for(t=i;t<n;t++){
        if(arr[i][t]==1){
            interesting.push_back(t);
        }
    }
    t = 0;
    while(t!=interesting.size()){
        lli op = search_related_row(interesting[t], interesting, n);
        if(op!=-1){
            lli count=0;
            lli j = 0;
            while(j!=n){
                if(arr[interesting[i]][j]==1){
                    count = count + 1;
                }
                j++;
            }
            if(final_output==-1){
                final_output = op + interesting.size() + count -6;
            }
            else if(op + interesting.size() + count -6 < final_output){
                final_output = op + interesting.size() + count -6;
            }
        }
        t++;
    }
    return final_output;
}
int main(){
   lli n,m;
   cin>>n>>m;
   lli i = 0;
   lli j = 0;
   for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        arr[i][j]  = 0;
    }
   }
   lli a,b;
   while(m--){
    cin>>a>>b;
    arr[a-1][b-1]=1;
    arr[b-1][a-1]=1;
   }

   lli final_output=-1;

   for(i=0;i<n;i++){
      final_output = seach_row(i,n,final_output);
   }
   cout<<final_output;
}