#include <iostream>
#include <cstdio>
#include <string.h>
#include <set>
#define max(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })
typedef long long int lli;
using namespace std;

bool powerof2(lli x){
    if ((x & (x+1)) == 0) return true; else return false;
}

int main(){
    lli t;
    scanf("%lld",&t);
    while(t--){
        lli num;
        scanf("%lld",&num);
        if(num==1){
            printf("%lld\n",lli(2));
        }
        else if(powerof2(num)){
            printf("%lld\n",(num-1)/2);
        }
        else{
            printf("%lld\n",lli(-1));
        }
    }
}