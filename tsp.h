#include "graph.h"

#include <vector>
#include <algorithm>
#include<iostream>

/// Solve Travelling Salesman Problem (TSP) for the graph:
/// Find the shortest (with a minimal total weight) tour and return it as an array of vertices.

std::vector<int> tsp_native(const Graph& graph, int start_vertex);

std::vector<int> tsp_bnb(const Graph& graph, int start_vertex);

std::vector<int> tsp_greed(const Graph& graph, int start_vertex);