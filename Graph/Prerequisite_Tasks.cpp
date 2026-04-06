/*
Problem: Prerequisite Tasks
Platform: GeeksforGeeks

Approach:
- Use Kahn's Algorithm (Topological Sort BFS)
- Detect cycle using indegree

Time Complexity: O(V + E)
Space Complexity: O(V + E)
*/

class Solution {
  public:
    bool isPossible(int N, vector<pair<int, int>>& prerequisites) {
        
        vector<int> adj[N];
        vector<int> indegree(N, 0);
        
        // Build graph
        for(auto &p : prerequisites)
        {
            adj[p.second].push_back(p.first);
            indegree[p.first]++;
        }
        
        queue<int> q;
        
        // Push nodes with indegree 0
        for(int i = 0; i < N; i++)
        {
            if(indegree[i] == 0)
                q.push(i);
        }
        
        int count = 0;
        
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            count++;
            
            for(auto it : adj[node])
            {
                indegree[it]--;
                
                if(indegree[it] == 0)
                    q.push(it);
            }
        }
        
        return count == N;
    }
};
