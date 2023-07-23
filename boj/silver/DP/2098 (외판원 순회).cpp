#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

using namespace std;

const int MAX_N = 16; // 최대 도시의 수

int n; // 도시의 수
int dist[MAX_N][MAX_N]; // 도시간의 거리를 저장한 2차원 배열
int dp[MAX_N][1 << MAX_N]; // 동적 계획법을 위한 메모이제이션 배열

// 부분 집합 A에 도시 v가 포함되어 있는지 확인하는 함수
bool isCityInSubset(int v, int subset) {
    return (subset & (1 << v)) != 0;
}

// 외판원 문제의 동적 계획법을 이용한 해법
int tsp() {
    // 모든 도시를 방문하지 않은 상태에서 시작하는 경우를 기준으로 초기화
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (1 << n); j++) {
            dp[i][j] = 1e6;
        }
    }
    
    // 시작 도시에서 시작 도시로 돌아가는 경우는 거리가 0
    dp[0][1] = 0;

    // 부분 집합의 크기가 2 이상인 경우부터 최단 경로 계산
    for (int size = 2; size <= n; size++) {
        for (int subset = 1; subset < (1 << n); subset++) {
            // 부분 집합의 크기가 size인 경우
            if (__builtin_popcount(subset) == size) {
                for (int v = 0; v < n; v++) {
                    // subset에 v가 포함되어 있지 않으면 다음 반복문으로
                    if (!isCityInSubset(v, subset)) continue;

                    int prevSubset = subset ^ (1 << v); // subset에서 v를 제외한 부분 집합
                    for (int u = 0; u < n; u++) {
                        // u가 v가 아니고, subset에 u가 포함되어 있으면 최단 경로 계산
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
    // 모든 도시를 방문하고 시작 도시로 돌아가는 최단 경로 찾기
    int shortestPath = 1e6;
    int fullSubset = (1 << n) - 1;
    for (int v = 1; v < n; v++) {
        shortestPath = min(shortestPath, dp[v][fullSubset] + dist[v][0]);
    }

    return shortestPath;
}

int main() {
    cin >> n; // 도시의 수 입력

    // 도시간의 거리 입력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> dist[i][j];
        }
    }

    int minPath = tsp(); // 최단 경로 계산
    cout << minPath << endl;

    return 0;
}

