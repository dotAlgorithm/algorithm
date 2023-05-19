#include <bits/stdc++.h>

using namespace std;

int n;
vector<pair<string, vector<int> > > student;

void input() {
	cin >> n;
	while(n--) {
		string name;
		cin >> name;
		vector<int> v;
		for(int i =0;i<3; i++) {
			int score;
			cin >> score;
			v.push_back(score);
		}
		student.push_back(make_pair(name, v));
	}
}

bool comp(pair<string, vector<int> > &v1, pair<string, vector<int> > &v2) {
	if(v1.second[0] == v2.second[0]) {
		if(v1.second[1] == v2.second[1]) {
			if(v1.second[2] == v2.second[2]) {
				return v1.first < v2.first;
			}
			return v1.second[2] > v2.second[2];
		}
		return v1.second[1] < v2.second[1];
	}
	return v1.second[0] > v2.second[0];
	
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	sort(student.begin(), student.end(), comp);
	
	for(int i = 0; i<student.size(); i++) {
		cout << student[i].first << "\n";
	}
	
	return 0;
}
