#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<string> hear;
vector<string> see;
vector<string> noSeeNoHear;

void input() {
	cin >> n >> m;
	string s;
	for(int i =0; i<n; i++) {
		cin >> s;
		hear.push_back(s);
	} 
	for(int i = 0; i<m; i++) {
		cin >> s;
		see.push_back(s);
	}
	sort(see.begin(), see.end());
}

void find_NoSeeNoHear(int s, int e, string key) {
	while(s<=e) {
		int mid = (s+e)/2;
		int cmp = key.compare(see[mid]);
		//cout << key << " - " << cmp << "\n";
		if(cmp == 0) {
			noSeeNoHear.push_back(key);
			break;
		}
		else if(cmp > 0) {
			s = mid+1;
		}else {
			e = mid-1;
		}
	}
}
void solve() {
/*	for(int i = 0; i<see.size(); i++) {
		cout << see[i] << " ";
	}
	cout << "\n\n";*/
	for(int i = 0; i<hear.size(); i++) {
		find_NoSeeNoHear(0, see.size()-1, hear[i]);
	}
	
	cout << noSeeNoHear.size() << "\n";
	sort(noSeeNoHear.begin(), noSeeNoHear.end());
	
	for(int i = 0; i<noSeeNoHear.size(); i++) {
		cout << noSeeNoHear[i] << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
