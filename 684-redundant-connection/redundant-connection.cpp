class Solution {
public:

    class DisjointSet{
        vector<int>parent;
        vector<int>rank;
        public:
            int left,right;
            DisjointSet(int size){
            parent.resize(size+1);
            rank.resize(size+1, 0);
            for(int i = 0; i <= size; i++){
                parent[i] = i;
            }
        }

        int findParent(int node){
            if(node == parent[node]) return node;
            return parent[node] = findParent(parent[node]);
        }

        void unionByRank(int u, int v){
            int ult_parent_u = findParent(u);
            int ult_parent_v = findParent(v);

            if(ult_parent_u == ult_parent_v){
                this->left = u;
                this->right = v;
                return;
            }
            if(rank[ult_parent_u] < rank[ult_parent_v]){
                parent[ult_parent_u] = ult_parent_v;
            }
            else{
                parent[ult_parent_v] = ult_parent_u;
                if(rank[ult_parent_v] == rank[ult_parent_u]) rank[ult_parent_u]++;
            }
        }
    };
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        DisjointSet obj(n);
        for(int i = 0; i < n; i++){
            obj.unionByRank(edges[i][0],edges[i][1]);
        }
        return {obj.left,obj.right};
    }
};