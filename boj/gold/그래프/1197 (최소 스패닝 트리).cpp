#include <bits/stdc++.h>

using namespace std;

int n, m;
int univ[10001];

class Edge{
	public:
		int s;
		int e;
		int w;
		Edge(int a, int b, int w) {
			this->s = a;
			this->e = b;
			this->w = w;
		}
		bool operator<(const Edge &e) const {
        	return this->w < e.w;
    	}
};

vector<Edge> v;

void input() {
	cin >> n >> m;
	for(int i = 0; i<m; i++) {
		int a, b, w;
		cin >> a >> b >> b >> w;
		v.push_back(Edge(a,b,w));
	}
}

void init() {
	for(int i = 0; i<=n; i++) univ[i] = i;
}

int find(int i) {
	int j = i;
	while(univ[j] != j) {
		j = univ[j];
	}
	return j;
}
bool equal(int p, int q) {
	if(p==q) return true;
	return false;
}

int merge(int p, int q){
	if(p < q) univ[q] = p;
	else univ[p] = q;
}

void kruskal() {
	int p, q;
	sort(v.begin(), v.end());
	vector<Edge> F;
	init();
	
	int pointer = 0;
	while(F.size() < n-1) {
		Edge edge = v[pointer];
		int i = edge.s;
		int j = edge.e;
		int p = find(i);
		int q = find(j);
		if(!equal(p, q)) {
			merge(p, q);
			F.push_back(edge);
		}
	}
	for(int i = 0; i<F.size(); i++) {
		cout << F[i].s << ", " << F[i].e << ", " << F[i].w << "\n";
	}
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	kruskal();
	
    return 0;
}

