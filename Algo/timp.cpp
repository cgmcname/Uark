#include <cstdio>
#include <queue>
#include <vector>

using namespace std;
 
#define OP pair< int, int >

const int LIMIT = 1000;
const int INFINITE = 1000000; 
vector< OP > G[LIMIT];

struct weightCheck {
    bool operator() (const OP &x, const OP &y) {
        return x.second > y.second;
    }
};
 
priority_queue< OP, vector< OP >, weightCheck > Q;

int Distance[LIMIT];
bool Flag[LIMIT];
 
int main() {
    
    int i, starting, nodes,
        edges, source, destination, 
        weight, sz; 
        
         
        
 
    // create graph
    scanf("%d %d", &nodes, &edges);
    
	for(i=0; i<edges; i++) 
	{
        
		scanf("%d %d %d", &source, &destination, &weight);
                G[source].push_back(OP(destination, weight));
         
        }
    scanf("%d", &starting);
 
    // initialize distance vector
    for(i=1; i<=nodes; i++) Distance[i] = INFINITE;
    Distance[starting] = 0;
    Q.push(OP(starting, 0));
 
    // dijkstra
    while(!Q.empty()) {
        source = Q.top().first;
        Q.pop();
        if(Flag[source]) continue;
        sz = G[source].size();
        for(i=0; i<sz; i++) {
            destination = G[source][i].first;
            weight = G[source][i].second;
            if(!Flag[destination] && Distance[source]+weight < Distance[destination]) {
                Distance[destination] = Distance[source] + weight;
                Q.push(OP(destination, Distance[destination]));
            }
        }
        Flag[source] = true; // Flag source
    }
 
    // result
    for(i=1; i<=nodes; i++) printf("Node %d, min weight = %d\n", i, Distance[i]);
    return 0;
}
