#include <bits/stdc++.h>
using namespace std;

vector<int> suffixArray(string s) {
    s += "$"; // 문자열 끝에 구분자를 추가.
    int n = s.size();
    vector<int> p(n), c(n);

    // k = 0인 경우, 접미사들을 정렬.
    vector<pair<char, int> > a(n);
    for (int i = 0; i < n; i++) a[i] = {s[i], i};
    sort(a.begin(), a.end());

    // p 배열과 c 배열을 갱신.
    for (int i = 0; i < n; i++) p[i] = a[i].second;
    c[p[0]] = 0;
    for (int i = 1; i < n; i++) {
        if (a[i].first == a[i - 1].first) c[p[i]] = c[p[i - 1]];
        else c[p[i]] = c[p[i - 1]] + 1;
    }

    // k > 0인 경우, p 배열을 갱신.
    int k = 0;
    while ((1 << k) < n) {
        vector<pair<pair<int, int>, int> > a(n);
        for (int i = 0; i < n; i++) {
            a[i] = {{c[i], c[(i + (1 << k)) % n]}, i};
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++) p[i] = a[i].second;
        c[p[0]] = 0;
        for (int i = 1; i < n; i++) {
            if (a[i].first == a[i - 1].first) c[p[i]] = c[p[i - 1]];
            else c[p[i]] = c[p[i - 1]] + 1;
        }
        k++;
    }

    // 접미사 배열을 반환.
    vector<int> sa(n - 1);
    for (int i = 1; i < n; i++) sa[i - 1] = p[i];
    return sa;
}

int main() {
    string s;
    cin >> s;
    vector<int> sa = suffixArray(s);
    for (int i = 0; i < sa.size(); i++) {
    	cout << s.substr(sa[i]) << "\n";
    }
    cout << endl;
    return 0;
}
