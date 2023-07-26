#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

#define INF INT_MAX

vector<vector<pair<int, int>>> graph; // {vertex, weight}

void dijkstra(int source, int n)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    vector<int> dist(n, INF);
    dist[source] = 0;

    pq.push({0, source});

    while (!pq.empty())
    {
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();

        if (d > dist[u])
            continue;

        for (auto v : graph[u])
        {
            int vertex = v.first;
            int weight = v.second;

            int newDist = dist[u] + weight;

            if (newDist < dist[vertex])
            {
                dist[vertex] = newDist;
                pq.push({dist[vertex], vertex});
            }
        }
    }

    cout << "Shortest distances from source vertex " << source << ":\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Vertex " << i << ": " << dist[i] << endl;
    }
}

int main()
{
    int n = 6; // Number of vertices

    graph.resize(n);
    graph[0] = {{1, 2}, {2, 3}};
    graph[1] = {{3, 1}, {4, 4}};
    graph[2] = {{3, 1}, {4, 3}};
    graph[3] = {{4, 2}, {5, 4}};
    graph[4] = {{5, 2}};
    graph[5] = {};

    int source = 0;

    dijkstra(source, n);

    return 0;
}