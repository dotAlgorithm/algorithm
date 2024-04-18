/*
	authored by jihwankim
	24-04-18 PM 03:04 ~ 03:12
*/

#include <iostream>
#include <unordered_set>
#include <vector> 

using namespace std;

int n, m;
vector<int> cardList;
unordered_set<int> cards;

void input() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int card;
		cin >> card;
		cards.insert(card);
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		int card;
		cin >> card;
		cardList.push_back(card);
	}
}

vector<int> solve() {
	vector<int> answer(m, 0);
	for (int i = 0; i < m; i++) {
		if (cards.find(cardList[i]) != cards.end()) {
			answer[i] = 1;
		}
	}
	return answer;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	vector<int> answer = solve();
	for (int x : answer) {
		cout << x << ' ';
	}
	
	return 0;
}

/*
	M개의 숫자 중 상근이가 가진 숫자 카드인지 확인 
	처음 N개의 상근이 카드가 주어짐.
	두 번째에 M개의 카드가 주어짐.
	같은 수는 없다. 50만개이므로 해쉬를 써도 되고
	이분 탐색을 해도 됨. 
*/
