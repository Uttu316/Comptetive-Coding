#include<bits/stdc++.h>
using namespace std;

template < typename T > class Graph
{
public:
  unordered_map < T, list < T >> adj;
  Graph ()
  {

  }
  void add_edge (T n1, T n2, bool bidir = true)
  {
    adj[n1].push_back (n2);
    if (bidir)
      {
	adj[n2].push_back (n1);
      }
  }
  void print ()
  {
  for (auto row:this->adj)
      {
	cout << row.first << "--->";
      for (auto el:row.second)
	  {
	    cout << el << ", ";
	  }
	cout << endl;
      }
  }

  void dfs (int src, map < int, bool > &visited)
  {
    visited[src] = true;
    cout << src <<"-->";
  for (auto neighbour:this->adj[src])
      {
	if (not visited[neighbour])
	  {
	    
	    dfs (neighbour, visited);

	  }
	  
      }
      
  }
  int count_connected ()
  {
    int result = 0;
    map < int, bool > visited;

  for (auto row:this->adj)
      {
	if (not visited[row.first])
	  {
	    dfs (row.first, visited);
	    result++;
	    cout<<endl;
	  }
      }
    return result;
  }
   void get_connectedComponents(){
        vector<vector<int>> v;
      cout<<"hello";
      
  } 
};

int
main ()
{
  Graph < int >g1;
  g1.add_edge (1, 2);
  g1.add_edge (3, 2);
  g1.add_edge (4, 2);
  g1.add_edge (1, 3);
  g1.add_edge (5, 6);
  //g1.print ();
  cout << g1.count_connected ();
  g1.get_connectedComponents();
  
}
