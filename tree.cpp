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
#define max(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })

bool dfs(int matrix[][10000], int visited[], int row, int n, bool *flag){
	if(visited[row] == 1){
		*flag = false;
		return false;
	}
	else{
		int i;
		visited[row] = 1;
		for(i = 0; i<n; i++){
			if (matrix[row][i] == 1){
				matrix[i][row] = -1;
				dfs(matrix, visited, i, n, flag);
			}
		}
		return true;
	}
}

int main()
{
	int n, m;
	cin>>n>>m;

	int matrix[n][10000];
	int visited[n];
	int i;

	for(i=0; i<n; i++){
		matrix[i][i] = -1;
		visited[i] = -1;
	}

	while(m--){
		int a,b;
		cin>>a>>b;
		matrix[a-1][b-1] = 1;
		matrix[b-1][a-1] = 1;
	}


	bool isTree;
	isTree = true;
	bool found = false;

	for(i = 0; i<n; i++){
		for(m = 0; m<n; m++)
			if (matrix[i][m] == 1){
				matrix[m][i] = -1;
				dfs(matrix, visited, i, n, &isTree);
				found = true;
				break;
		}
		if(found)
			break;
	}


	for(i=0;i<n;i++){
		if(visited[i] == -1)
			isTree = false;
	}

	if(isTree == true)
		cout<<"YES";
	else
		cout<<"NO";

}