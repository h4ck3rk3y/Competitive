#include <iostream>
#include <cstdio>
#include <string.h>
#include <algorithm>
#include <set>
#include <functional>
#define max(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })
typedef long long int lli;
using namespace std;

int main(){
    lli n,limak,t,samemax;
    lli i = 0;
    lli count =0;
    cin>>n;
    lli others[n-1];
    t =n;
    while(n--){
        if(n==t-1){
            cin>>limak;
        }
        else{
            cin>>others[i];
            i = i+1;
        }
    }
    sort(others,others+t-1,greater<lli>());
    i=0;
    while(limak<=others[i] ){
        count = count + 1;
        others[i] = others[i] -1;
        limak = limak + 1;
        if(i!=t-2  and ((limak > others[i]) or (others[i] < others[i+1]))){
            i = i + 1;
        }
        else if(i == t - 2){
            i = 0;
        }
        if(limak>others[i] and limak>others[0]){
            break;
        }
        else if(limak>others[i] and limak<=others[0]){
            i = 0;
        }
    }
    cout<<count<<endl;
}