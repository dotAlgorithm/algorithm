#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

using namespace std;

const int MAX_N = 16; // �ִ� ������ ��

int n; // ������ ��
int dist[MAX_N][MAX_N]; // ���ð��� �Ÿ��� ������ 2���� �迭
int dp[MAX_N][1 << MAX_N]; // ���� ��ȹ���� ���� �޸������̼� �迭

// �κ� ���� A�� ���� v�� ���ԵǾ� �ִ��� Ȯ���ϴ� �Լ�
bool isCityInSubset(int v, int subset) {
    return (subset & (1 << v)) != 0;
}

// ���ǿ� ������ ���� ��ȹ���� �̿��� �ع�
int tsp() {
    // ��� ���ø� �湮���� ���� ���¿��� �����ϴ� ��츦 �������� �ʱ�ȭ
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (1 << n); j++) {
            dp[i][j] = 1e6;
        }
    }
    
    // ���� ���ÿ��� ���� ���÷� ���ư��� ���� �Ÿ��� 0
    dp[0][1] = 0;

    // �κ� ������ ũ�Ⱑ 2 �̻��� ������ �ִ� ��� ���
    for (int size = 2; size <= n; size++) {
        for (int subset = 1; subset < (1 << n); subset++) {
            // �κ� ������ ũ�Ⱑ size�� ���
            if (__builtin_popcount(subset) == size) {
                for (int v = 0; v < n; v++) {
                    // subset�� v�� ���ԵǾ� ���� ������ ���� �ݺ�������
                    if (!isCityInSubset(v, subset)) continue;

                    int prevSubset = subset ^ (1 << v); // subset���� v�� ������ �κ� ����
                    for (int u = 0; u < n; u++) {
                        // u�� v�� �ƴϰ�, subset�� u�� ���ԵǾ� ������ �ִ� ��� ���
                        if (u != v && isCityInSubset(u, subset)) {
                            dp[v][subset] = min(dp[v][subset], dp[u][prevSubset] + dist[u][v]);
                        }
                    }
                }
            }
        }
    }
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<(1<<n); j++) {
			cout << dp[i][j] << " ";
		}
		cout << "\n";
	}
    // ��� ���ø� �湮�ϰ� ���� ���÷� ���ư��� �ִ� ��� ã��
    int shortestPath = 1e6;
    int fullSubset = (1 << n) - 1;
    for (int v = 1; v < n; v++) {
        shortestPath = min(shortestPath, dp[v][fullSubset] + dist[v][0]);
    }

    return shortestPath;
}

int main() {
    cin >> n; // ������ �� �Է�

    // ���ð��� �Ÿ� �Է�
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> dist[i][j];
        }
    }

    int minPath = tsp(); // �ִ� ��� ���
    cout << minPath << endl;

    return 0;
}

