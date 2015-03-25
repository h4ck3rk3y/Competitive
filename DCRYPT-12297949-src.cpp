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
int main()
{int t;
 int key;
 string line;
 cin>>t;
 while(t!=0){
 	t--;
 	cin>>key;
 	cin>>line;
 	int l,f;
 	for(l=0;l<line.length();l++){
			char d = line.at(l);
			if(d=='.'){
				cout<<" ";
				continue;
			}
			if(key<26){

					if(d>96){
						f = key ;
							if(d+f>122){
								d = (char)(96 +  f   - (122-d));
							}
							else {
								d = (char)(d + f);
							}
						}

					else{
						f = key ;
						if(d+f>90){
								d = (char)(64 +  f   - (90-d));
							}
						else {
								d = (char)(d + f);
							}
						}
					}
			else{
				
					if(d>96){
						f = key - 26;
							if(d+f>122){
								d = (char)(96 +  f   - (122-d));
							}
							else {
								d = (char)(d + f);
							}
						d =(char)(d-32);
						
					}

					else{
						f = key -26;
							if(d+f>90){
								d = (char)(64 +  f   - (90-d));
							}
							else {
								d = (char)(d + f);
							}
						d = (char)(d+32);
					}
				}
				cout<<d;
				}
				cout<<endl;
	}	

	return 0;
}
