/*
  
 University of Zurich
 Department of Informatics
 Visualization and Multimedia Laboratory
 
 Author: Rafael Ballester
 Date: 12.04.2013
 */

#include <iostream>
#include <vector>
#include <set>
#include <map>

typedef std::vector<int> VI; // to store the distances
typedef std::vector<VI> VVI; // to store an adjacency matrix
typedef std::pair<int,int> PI; // to manipulate elements in the priority queue (key = distance, value = node)

VI dijkstra(VVI& graph, int v) {
    //TODO: fill in your code here
}

int main() {
	VVI graph(9,VI(9,0)); // Create a graph with 9 nodes and no edges (empty adjacency matrix)

	// Add the undirected, weighted edges
	graph[0][1] = graph[1][0] = 3;
	graph[0][3] = graph[3][0] = 7;
	graph[1][2] = graph[2][1] = 1;
	graph[2][4] = graph[4][2] = 9;
	graph[3][2] = graph[2][3] = 3;
	graph[3][4] = graph[4][3] = 6;
	graph[3][6] = graph[6][3] = 11;
	graph[5][4] = graph[4][5] = 2;
	graph[6][5] = graph[5][6] = 4;
	graph[6][8] = graph[8][6] = 5;
	graph[7][3] = graph[3][7] = 5;
	graph[7][8] = graph[8][7] = 4;
	graph[8][5] = graph[5][8] = 8;

	// Do the Dijkstra algorithm forthe first node
	VI distances = dijkstra(graph,0);

	// Output should be 0 3 4 7 13 15 18 12 16
	for (int i = 0; i < distances.size(); ++i) {
		std::cout << distances[i] << " ";
	}
	std::cout << std::endl;
}

