//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // first of all we created a visted array and marked everything as zero
        int vis[V]={0};
        // aftet that we will marked first index wala elemenet ko true 
        vis[0]= 1;
        // fir we will make a queue data structure and push the first/front element
        queue<int> q;
        q.push(0);
        vector<int>bfs;      //this will store final ans
        // anything which we will pop out we will add that in the bfs vector
        while(!q.empty()){
            int node = q.front();    
            q.pop();
            bfs.push_back(node);
            
            // check side wala sab elements and if it is not visted we will maked it as true and push into the queue
            for(auto it: adj[node]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return bfs;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends