#include<iostream>
#include<vector>
using namespace std;

void addEdge(int x, int y, vector<vector<int> >& adj)
{
    adj[x].push_back(y);
    adj[y].push_back(x);
}

// Function to print the parent of each node
void printParents(int node, vector<vector<int> >& adj,
                  int parent)
{
    // current node is Root, thus, has no parent
    if (parent == 0)
        cout << node << "->Root" << endl;
    else
        cout << node << "->" << parent << endl;
    // Using DFS
    for (auto cur : adj[node])
        if (cur != parent)
            printParents(cur, adj, node);
}

int main(){

    int N=7, Root = 1;

    vector<vector<int>> adj(N+1, vector<int>());
    addEdge(1, 2, adj);
    addEdge(1, 3, adj);
    printParents(Root, adj, 0);

}