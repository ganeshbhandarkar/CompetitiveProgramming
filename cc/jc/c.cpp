// #include <bits/stdc++.h>
// using namespace std;
// int ans = INT_MIN;
// int nodee = INT_MIN;
// void bfs(int start, vector<vector<int> > &adjList)
// {
//     int n = adjList.size();
//     int res = 0;
// vector<int> distance(n+1, -1);
//     distance[start] = 0;
//     queue<int> q;
//     q.push(start);
// while(!q.empty())
//     {
//         int curr = q.front();
//         q.pop();
//         for(int i = 0; i < (int)adjList[curr].size(); i++)
//         {
//             if(distance[adjList[curr][i]] == -1)
//             {
//                 distance[adjList[curr][i]] = distance[curr]+1;
//                 q.push(adjList[curr][i]);
//                 if(res < distance[adjList[curr][i]]){
//                     res = distance[adjList[curr][i]];
//                     nodee = adjList[curr][i];
//                 }
//             }
//         }
//     }
//     ans = max(ans, res);
// }
// int DiameterofTree(int n, vector<vector<int > >& edgelist)
// {
//     vector<vector<int> > adjList(n+1);
//     for(int i = 0; i < (int)edgelist.size(); i++)
//     {
//         adjList[edgelist[i][0]].push_back(edgelist[i][1]);
//         adjList[edgelist[i][1]].push_back(edgelist[i][0]);
//     }
//     bfs(0, adjList);
//     return ans;
// }
// int main()
// {
//     int tests;
//     cin>>tests;
//     while(tests--)
//     {
//         ans  = INT_MIN;
//         int nodes, edges;
//         cin >> nodes >> edges;
//         int vertex1, vertex2;
//         vector<vector<int > > edgelist;
//         for(int i = 0; i < edges; i++)
//         {
//             cin >> vertex1 >> vertex2;
//             vector<int > temp = {vertex1, vertex2};
//             edgelist.push_back(temp);
//         }
        
//         int result = DiameterofTree(nodes, edgelist);
//         cout << nodee<<" " <<result << "\n";
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
class Graph
{
    int V;              // No. of vertices
    list<int> *adj;     // Pointer to an array containing
                        // adjacency lists
public:
    Graph(int V);              // Constructor
    void addEdge(int v, int w);
    void longestPathLength();  
    pair<int, int> bfs(int u); 
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);    // Add w to v’s list.
    adj[w].push_back(v);    // Since the graph is undirected
}
 
pair<int, int> Graph::bfs(int u)
{
    int dis[V];
    memset(dis, -1, sizeof(dis));
 
    queue<int> q;
    q.push(u);
    dis[u] = 0;
 
    while (!q.empty())
    {
        int t = q.front();       q.pop();
        for (auto it = adj[t].begin(); it != adj[t].end(); it++)
        {
            int v = *it;
            if (dis[v] == -1)
            {
                q.push(v);
                dis[v] = dis[t] + 1;
            }
        }
    }
 
    int maxDis = 0;
    int nodeIdx;
    for (int i = 0; i < V; i++)
    {
        if (dis[i] > maxDis)
        {
            maxDis = dis[i];
            nodeIdx = i;
            //cout<<nodeIdx<<endl;
        }
    }
    return make_pair(nodeIdx, maxDis);
}
 
void Graph::longestPathLength()
{
    pair<int, int> t1;
    t1 = bfs(0);
    cout<<t1.first<<" "<<t1.second<<endl;
}
 
int main()
{
    int n,e;
    cin>>n>>e;
    Graph g(n);
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        g.addEdge(a,b);
    }
 
    g.longestPathLength();
    return 0;
}