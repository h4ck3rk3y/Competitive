#include <iostream>
#include <cmath>
#include <vector>
#include <cstdio>
#include <set>
#define toInt(c) (c-'0')
typedef  long long int lli;
using namespace std;
vector <lli> v;
vector <lli> p_list;
void  seive(lli input){
for(lli i  =  2 ; i<=input;i++){
	v.push_back(i);
}
for(lli i = 2  ; i<=input;i++){
	if (v[i]!=-1) {
		for(lli j = 2*i;j<=input;j=j+i){
			if(v[j]!=-1){
			v[j]=-1;
			}
		}
	}
}
for(lli i =0;i<v.size();i++){
	if(v[i]!=-1){
		p_list.push_back(i);
		// printf("%lld\n",p_list[p_list.size()-1]);
	}
}			
}	
lli lpf(char *inp,lli input){
	lli i,modulus=0;
	for(i=0;inp[i];i++){
		modulus =(modulus*10 + inp[i] - '0')%input;
	}
	return modulus;
}
int main()
{
 lli l,act,i;
 v.push_back(-1);
 v.push_back(-1);
 seive(1000000);
 char k[128];
 scanf("%s %lld",k,&l);
 	while((k!="0")  && (l!=0)){
	for(i=0;i<p_list.size() and p_list[i]<l;i++){
		if(!lpf(k,p_list[i])){
			break;
		}
	}
	if (i>=p_list.size()){
		printf("GOOD\n");
	}
	else if(p_list[i]>=l){
		printf("GOOD\n");
	}
	else{
		printf("BAD %lld\n",p_list[i]);
	}
	scanf("%s %lld",k,&l);
	} 
}
