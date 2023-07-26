#include<iostream>
using namespace std;

#define N 3

int Min(int* arr)
{
    int min = 0;
    for (int i=1; i<N; i++)
        if (arr[i] < arr[min])
            min = i;
    return min;
}

int Max(int* arr)
{
    int max = 0;
    for (int i=1; i<N; i++)
        if (arr[i] > arr[max])
            max = i;
    return max;
}

int minOf2(int x, int y)
{
    return (x<y)? x: y;
}

void minCashFlowRec(int* amount)
{
    int mxCredit = Max(amount), mxDebit = Min(amount);
    if (amount[mxCredit] == 0 && amount[mxDebit] == 0)
        return;
    int min = minOf2(-amount[mxDebit], amount[mxCredit]);
    amount[mxCredit] -= min;
    amount[mxDebit] += min;
    cout << "Person " << mxDebit << " pays " << min
         << " to " << "Person " << mxCredit << endl;
    minCashFlowRec(amount);
}

void minCashFlow(int** graph)
{
    int* amount = new int[N];
    for (int p=0; p<N; p++)
    {
       amount[p] = 0;
       for (int i=0; i<N; i++)
          amount[p] += (graph[i][p] -  graph[p][i]);
    }
    minCashFlowRec(amount);
    delete[] amount;
}

int main()
{
    int** graph = new int*[N];
    for (int i = 0; i < N; i++)
        graph[i] = new int[N];

    graph[0][0] = 0; graph[0][1] = 1000; graph[0][2] = 2000;
    graph[1][0] = 0; graph[1][1] = 0; graph[1][2] = 5000;
    graph[2][0] = 0; graph[2][1] = 0; graph[2][2] = 0;

    minCashFlow(graph);

    for (int i = 0; i < N; i++)
        delete[] graph[i];
    delete[] graph;

    return 0;
}