//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    void dfs(int node,vector<int>&vis,vector<int>adj[],vector<int> &storeDfs){
        storeDfs.push_back(node);
        // any time we dfs is call we will first mark that true in the visted array
        vis[node]=1;
        // here we travel for all is adj list 
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(it,vis,adj,storeDfs);
            }
        }
    }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // first of all we will create a vector namae as dfs which will store out ans
        vector<int>storeDfs;
        // creating a vector name as vsited and storing everything to be with zeros , size = v+1, bcoz one based indexing hai 
        vector<int> vis(V+1,0);
        // we are using a for loop so that we can traversal each and every element of graph 
        for(int i=1;i<=V;i++){
            if(!vis[i]){
                // we will require a visted array ,a adj list , for printing this we are using storeDfs
                dfs(i,vis,adj,storeDfs);
            }
        }
        return storeDfs;
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends