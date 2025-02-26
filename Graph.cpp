#include "Graph.h"
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

Graph::Graph(int vertices)
{
    this->vertices = vertices;
    adjList = new vector<int>[vertices];
}
void Graph::addEdge(int v, int w)
{
    adjList[v].push_back(w);
    adjList[w].push_back(v);
}
void Graph::BFS(int start_vertex)
{
    bool* visited = new bool[vertices];
    for (int i = 0; i < vertices; i++)
    {
        visited[i] = false;
    }
    queue<int> que;
    visited[start_vertex] = true;
    que.push(start_vertex);
    while (!que.empty())
    {
        int current = que.front();
        que.pop();
        cout << current << " ";
        for (int i = 0; i < adjList[current].size(); i++)
        {
            int neighbor = adjList[current][i];
            if (!visited[neighbor])
            {
                visited[neighbor] = true;
                que.push(neighbor);
            }
        }
    }
}
void Graph::DFS(int start_vertex)
{
    bool* visited = new bool[vertices];
    for (int i = 0; i < vertices; i++)
    {
        visited[i] = false;
    }
    stack<int> stack;
    visited[start_vertex] = true;
    stack.push(start_vertex);
    while (!stack.empty())
    {
        int current = stack.top();
        stack.pop();
        cout << current << " ";
        for (int i = 0; i < adjList[current].size(); i++)
        {
            int neighbor = adjList[current][i];
            if (!visited[neighbor])
            {
                visited[neighbor] = true;
                stack.push(neighbor);
            }
        }
    }
}