#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int optimalMerge(vector<int> files) {
    priority_queue<int, vector<int>, greater<int>> pq(files.begin(), files.end());

    int cost = 0;

    while (pq.size() > 1) {
        int file1 = pq.top();
        pq.pop();
        int file2 = pq.top();
        pq.pop();

        int mergedFile = file1 + file2;
        cost += mergedFile;
        pq.push(mergedFile);
    }

    return cost;
}

int main() {
    vector<int> files = {2, 3, 4, 5, 6, 7};

    int cost = optimalMerge(files);

    cout << "Minimum cost of merging all files: " << cost << endl;

    return 0;
}