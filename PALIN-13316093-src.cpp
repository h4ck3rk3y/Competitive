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
typedef long long int lli;
#define toInt(c) (c-'0')
#define toChar(c) (c+'0')
using namespace std;
char charInc(char c){
	int r = (toInt(c) + 1) ;
	char f = toChar(r);
	return f;
}
//while to get rid of the 9 issue
string incMid(string input){
	if(input.size()%2==0){
		if(input[input.size()/2]  !='9'){
		input[input.size()/2] = charInc(input[input.size()/2]) ;
		input[input.size()/2-1] = charInc(input[input.size()/2-1]) ;
		}
		else{
			input[input.size()/2] = '0' ;
			input[input.size()/2-1] = '0' ;
			lli r = input.size()/2,j=input.size()/2-1,i=1;
			while(i+1!=input.size() and input[r+i]=='9' and input[j-i]=='9'){
				input[r+i] = '0';
				input[j-i] = '0';
				i = i + 1;
			}
			input[r+i] = charInc(input[r+i]) ;
			input[j-i] = charInc(input[j-i]) ;
			}
	}
	else{
		if(input[(input.size()-1)/2]!='9'){
		input[(input.size()-1)/2] = charInc(input[(input.size()-1)/2]);}
		else{
			input[(input.size()-1)/2] = '0';
			lli r = (input.size()-1)/2,i=1;
			while(i+1!=input.size() and input[r+i]=='9' and input[r-i]=='9'){
				input[r+i] = '0';
				input[r-i] = '0';
				i = i + 1;
			}
			input[r-i] = charInc(input[r-i]);
			input[r+i] = charInc(input[r+i]);
			
		}
	}
	return input;
}
string compMid(string input){
	if(input.size()%2==0){
		lli begin = input.size()/2-1;
		lli end   = input.size()/2;
		if(input[end]>input[begin]){
			input[begin] = charInc(input[begin]);
			input[end] 	 = input[begin];
		}
		else{
			input[end]=input[begin];
		}
	}
	return input;
}
int makepalindrome(string input){
	string inp = compMid(input);
	bool flag;
	if(inp==input){
		flag =true;
	}
	else{
		flag = false;
	}
	input = inp;
	lli begin,end ;
	if(input.size()%2==0){
		begin = input.size()/2-2;
		end   = input.size()/2+1;
	}
	else{
		begin = (input.size()+1)/2 -2;
		end   = (input.size()+1)/2;	
	}
	while (true){
		if(begin==-1 or end == input.size()){
			cout<<input<<endl;
			break;
		}
		else if(input[begin] != input[end]){
			if(input[end]>input[begin]){
				if(flag==true){
					input=incMid(input);
					flag=false;
				}
				input[end] = input[begin];
			}
			else{
				input[end]=input[begin];
			}
			begin = begin -1;
			end = end  + 1;
		}
		else{
			begin = begin -1;
			end = end +1;
		}
	}
}
int main(){
	lli testcases;
	string input;
	scanf("%lld",&testcases);
	while(testcases!=0){
		testcases--;
		cin>>input;
		string inp = input;
		string i = "";
		while(inp.size()>0 and inp.at(inp.size()-1)=='9'){
			inp = inp.substr(0,inp.size()-1);
			i = i + "0";
		}
		if(inp.size()>0){
		inp = inp.substr(0,inp.size()-1) + charInc(inp.at(inp.size()-1)) + i;}
		else{
		inp = "1" + i;	
		}
		makepalindrome(inp);
	}
}