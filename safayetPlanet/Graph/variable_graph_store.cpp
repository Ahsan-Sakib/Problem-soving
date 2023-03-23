#include<iostream>
#include<vector>
using namespace std;

#define MAX 100000

int main(){
    int node, edge,a,b;
    vector<int> graph[MAX];
    cin>>node>>edge;
    for(int i=0;i<edge;i++){
        cin>>a>>b;
        graph[a].push_back(b);
       // graph[b].push_back(a); //for bidirectional
    }

    int isContinue = 1;
    while (isContinue != 0)
    {
    int nodeName;
    cout<<"Enter the Node name ";
    cin>>nodeName;
    cout<<"connected nod is "<<graph[nodeName].size()<<endl;
    for(int i=0;i<graph[nodeName].size();i++){
        cout<<graph[nodeName][i]<< " ";
     }
    cout<<endl;
    cin>>isContinue;
    }

    //indgree //outdgree

    cout<<"indgree outdgree print"<<endl;

    for(int i=0;i<node;i++){
        cout<<"node "<<i+1<<" outdgree"<<graph[i+1].size()<<endl;
        int count = 0;
        // for(int j=0;j<graph[i+1].size();j++){
        //     if(graph[i+1][j] == i+1) count++;
        // }
        // cout<<"node "<<i+1<<" indgree"<<count<<endl;
    }
}

