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
typedef unsigned long long  int ui;
#define max(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })
#define min(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _b : _a; })
lli div(lli a);
lli prime(lli a);
int main()
{	lli t1;
	cin>>t1;
	string exp,rpn;
	rpn = "";
	stack <char> op;
	stack <char> br;
	string operators = "+-*/^";
	while(t1!=0){
		rpn = "";
		t1--;
		cin>>exp;
		lli x = 0;
		char c;
		while(x!=exp.length()){
			c = exp[x];
			if(c>=97 && c<=122){
				rpn = rpn + c;
			}
			else if(c=='('){
				br.push(c);
			}
			else if(c==')'){
				while(br.top()!='('){
					rpn = rpn + br.top();
					br.pop();
				}
				br.pop();
			}
			else{
				if(br.top()!='('){
					while(operators.find(br.top())>operators.find(c)){
					rpn = rpn + br.top();
					br.pop();					
					}
				}
				br.push(c);
			}
			x++;	
		}
	cout<<rpn<<endl;
	}
}


	