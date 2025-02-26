#pragma once
#ifndef Graph_h
#define Graph_h
#include <vector>

using namespace std;

class Graph
{
private:
	int vertices;
	vector<int>* adjList;

public:
	Graph(int vertices);
	void addEdge(int v, int w);
	void BFS(int start_vertex);
	void DFS(int start_vertex);
};

#endif // !Graph_h