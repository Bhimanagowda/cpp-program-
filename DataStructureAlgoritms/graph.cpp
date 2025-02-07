#include<iostream>
#include<vector>
using namespace std;
class Graph
{
  public:
  int v;
  vector<vector<int>> adj;
  Graph(int k)
  {
    this->v=k;
    adj.resize(v);
  }

  void addEdge(int v,int u)
  {
    adj[v].push_back(u);
    adj[u].push_back(v);
  }

  void Display()
  {
    for(int i=0;i<v;i++)
    {
      cout<<i<<"->";
      for(int j=0;j<adj[i].size();j++)
      {
        cout<<adj[i][j]<<" ";
      }
      cout<<endl;
    }
  }
};
int main()
{
  Graph g(4);
  g.addEdge(0,1);
  g.addEdge(0,2);
  g.addEdge(0,3);
  g.addEdge(1,2);
  g.addEdge(2,3);
  g.addEdge(3,1);
  g.addEdge(3,2);
  g.addEdge(3,0);
  g.addEdge(2,0);
  g.Display();
  return 0;
}