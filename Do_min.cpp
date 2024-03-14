#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m, n; cin >> m >> n;
	char a[m+1][n+1];
	memset(a , '.', sizeof a );
	for (int i = 1; i <= m; i++){
		for (int j = 1; j <= n; j++){
			char x;
			cin >> x;
			a[i][j]= x;
		}
	}
	for (int i = 1; i <= m; i++){
		for (int j = 1; j <= n; j++){
			if (a[i][j] == '*') cout << "*" <<" ";
		 if (a[i][j] == '.'){
		 	int count = 0;
		 	for (int k = i -1; k <= i+1; k++){
		 		for (int h = j-1; h <= j+1; h++){
		 			if (a[k][h] == '*'){
		 				count ++;
					 }
					 
				 }
			 }
			 cout << count << " ";
			 
		 }
		}
		cout << endl;
	}
}