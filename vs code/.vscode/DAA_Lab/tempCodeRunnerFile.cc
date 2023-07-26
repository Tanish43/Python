#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge
{
    int src, dest, weight;
};

bool compareEdges(const Edge &a, const Edge &b)
{
    return a.weight < b.weight;
}

int findParent(int vertex, vector<int> &parent)
{
    if (parent[vertex] == vertex)
        return vertex;
    return findParent(parent[vertex], parent);
}

void unionVertices(int vertex1, int vertex2, vector<int> &parent, vector<int> &rank)
{
    int root1 = findParent(vertex1, parent);
    int root2 = findParent(vertex2, parent);

    if (rank[root1] < rank[root2])
        parent[root1] = root2;
    else if (rank[root1] > rank[root2])
        parent[root2] = root1;
    else
    {
        parent[root1] = root2;
        rank[root2]++;
    }
}

vector<Edge> kruskalMST(vector<Edge> &edges, int numVertices)
{
    // Sort the edges based on their weight
    sort(edges.begin(), edges.end(), compareEdges);

    vector<Edge> mst;
    vector<int> parent(numVertices);
    vector<int> rank(numVertices, 0);

    for (int i = 0; i < numVertices; i++)
    {
        parent[i] = i;
    }

    for (const Edge &edge : edges)
    {
        int src = edge.src;
        int dest = edge.dest;
        int srcRoot = findParent(src, parent);
        int destRoot = findParent(dest, parent);

        if (srcRoot != destRoot)
        {
            mst.push_back(edge);
            unionVertices(srcRoot, destRoot, parent, rank);
        }
    }

    return mst;
}

int main()
{
    int numVertices = 5;
    vector<Edge> edges = {{0, 1, 2}, {0, 2, 3}, {1, 2, 1}, {1, 3, 4}, {1, 4, 5}, {2, 4, 6}, {3, 4, 3}};

    vector<Edge> mst = kruskalMST(edges, numVertices);

    cout << "Edges in the Minimum Spanning Tree:" << endl;
    for (const Edge &edge : mst)
    {
        cout << edge.src << " - " << edge.dest << " : " << edge.weight << endl;
    }

    return 0;
}