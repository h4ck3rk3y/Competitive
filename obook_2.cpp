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
    vector <pair<char,lli> > S;
    bool b1 = false;
    bool b2 = false;
    lli S_ind_max_ele, B_ind_least_ele;
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
                if(S.size()<2*depth){
                    if(b1 and price > S[S_ind_max_ele].second){
                        S_ind_max_ele = S.size() -1;
                    }
                    else{
                        b1 = true;
                        S_ind_max_ele = 0;
                    }
                    S_vol[price] = vol;
                    S.push_back(make_pair('S',price));
                }
                else if(price < S[S_ind_max_ele].second){
                    lli j = S_ind_max_ele;
                    S_vol.erase(S[S_ind_max_ele].second);
                    while(j!=(2*depth)-1){
                        S[j] = S[j+1];
                        j++;
                    }
                    S[S.size()-1] = (make_pair('S',price));
                    S_vol[price] = vol;
                }
            }
        }
        else{
            if(B_vol.find(price) != B_vol.end()){
                B_vol[price] = B_vol[price] + vol;
            }
            else{
                if(S.size()<2*depth){
                    if(b2 and price < S[B_ind_least_ele].second){
                        B_ind_least_ele = S.size() - 1;
                    }
                    else{
                        b2 = true;
                        B_ind_least_ele = 0;
                    }
                    B_vol[price] = vol;
                    S.push_back(make_pair('B',price));
                }
                else if(price > S[B_ind_least_ele].second){
                    lli j = B_ind_least_ele;
                    B_vol.erase(S[B_ind_least_ele].second);
                    while(j!=(2*depth)-1){
                        S[j] = S[j+1];
                        j++;
                    }
                    S[S.size()-1] = (make_pair('B',price));
                    B_vol[price] = vol;
                }
            }
        }

    }
    for(i=0;i<S.size();i++){
        if(S[i].first == 'S'){
            cout<<"S"<<" "<<S[i].second<<" "<<S_vol[S[i].second]<<endl;
        }
        else{
            cout<<"B"<<" "<<S[i].second<<" "<<B_vol[S[i].second]<<endl;
        }
    }
}