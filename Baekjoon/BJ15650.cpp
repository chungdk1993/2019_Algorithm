#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> list;
vector<bool> visited;

void solution(int index = 1, int cnt = 1);

int main()
{
    cin >> n >> m;
    list.assign(n + 1, 0);
    visited.assign(n + 1, false);
    solution();
    return 0;
}

void solution(int index, int cnt) {
    if(cnt == m + 1) {
        for(int index = 1; index <= m; index++) {
            cout << list[index] << " ";
        }
        cout << "\n";

        return;
    }

    for(int num = index; num <= n; num++) {
        if(visited[num]) continue;
        visited[num] = true;
        list[cnt] = num;
        solution(num + 1, cnt + 1);
        visited[num] = false;
    }
}