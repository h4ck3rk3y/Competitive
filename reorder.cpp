#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
#include <math.h>
#include <vector>
#include <set>
#include <deque>
#include <map>
#include <string.h>
#include <cstdlib>
#include <limits.h>
#include <tr1/unordered_map>
#include <tr1/unordered_set>
#include <functional>
#include <stack>
#include <queue>
typedef long long int lli;
using namespace std;
int main(){
    lli orders, depth, i=0;
    char type;
    cin>>orders>>depth;
    lli price,vol;
    vector <lli>  S;
    vector <lli> B;
    map <lli, lli> S_vol;
    map <lli, lli> B_vol;
    while(i!=orders){
        i++;
        cin>>type>>price>>vol;
        if(type=='S'){
            if(S_vol.find(price) != S_vol.end()){
                S_vol[price] = S_vol[price] + vol;
            }
            else{
                if (S.empty()){
                    S_vol[price] = vol;
                    S.push_back(price);
                }
                else if(S.size()<depth){
                    S_vol[price] = vol;
                    i = S.size() - 1;
                    while(price < S[i]){
                        S[i+1] = S[i];
                        i = i -1;
                    }
                    S[i] = price;
                }
                else if(price < S.back()){
                    S_vol[price] = vol;
                    i = S.size();
                    S_vol.erase(S[S.size()-1]);
                    while(price < S[i]){
                        S[i+1] = S[i];
                        i = i -1;
                    }
                    S[i] = price;
                }
            }
        }
        else{
            if(B_vol.find(price) != B_vol.end()){
                B_vol[price] = B_vol[price] + vol;
            }
            else{
                if (B.empty()){
                    B_vol[price] = vol;
                    B.push_back(price);
                }
               if(B.size()<depth){
                    B_vol[price] = vol;
                    i = B.size() - 1;
                    while(price > S[i]){
                        B[i+1] = B[i];
                        i = i -1;
                    }
                    B[i] = price;
                }
                else if(price > B.back()){
                    B_vol[price] = vol;
                    i = B.size();
                    B_vol.erase(B[B.size()-1]);
                    while(price > B[i]){
                        B[i+1] = B[i];
                        i = i -1;
                    }
                    B[i] = price;
                }
            }
        }

    }
    for(i=0;i<S.size();i++){
        if(S[i] == 'S'){
            cout<<"S"<<" "<<S[i]<<" "<<S_vol[S[i]]<<endl;
        }
    }
    for(i=0;i<B.size();i++){
        if(B[i] == 'B'){
            cout<<"B"<<" "<<S[i]<<" "<<B_vol[B[i]]<<endl;
        }
    }
}