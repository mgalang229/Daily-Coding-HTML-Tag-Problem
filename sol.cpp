// Using C++ by: jasonpogi
#include <bits/stdc++.h>

using namespace std;

const int mxN = 1e5;
char s[mxN];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> s;
	for(int i = 0; i < strlen(s); i++){
		if(ispunct(s[i])){
			continue;
		} else if(s[i] == 'h' && s[i+1] == 'r'){
			for(int i = 0; i < 9; i++){
				cout << "-";
			}
			i++;
		} else if(s[i] == 'b' && s[i+1] == 'r'){
			cout << "\n";
			i++;
		} else{
			cout << s[i];
		}
	}
	cout << "\n";
	return 0;
}