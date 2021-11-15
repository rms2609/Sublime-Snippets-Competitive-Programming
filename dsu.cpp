class DisjointSet{ public:

    vector<int> parent;

    DisjointSet(int n): parent(n) { for(int i=0; i<n; i++) parent[i] = i; }

    void join(int a, int b) { parent[find(b)] = find(a); }

    int find(int a){ return a == parent[a] ? a : parent[a] = find(parent[a]); }

    bool check(int a, int b){ return find(a) == find(b); }
};

int main() {
  DisjointSet ds = DisjointSet(10);
  ds.join(1, 2);
  ds.find(2, 3);
}
