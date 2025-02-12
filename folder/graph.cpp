[0000]    // #include "queue.h"
[0001]    // #include "graph.h"
[0002]    #include <iostream>
[0003]    using namespace std;
[0004]    
[0005]    #include <iostream>
[0006]    using namespace std;
[0007]    
[0008]    graph::graph(int n) {
[0009]        size_ = n;
[0010]        am_ = new int*[n];
[0011]        for (int i=0; i< n; i++) {
[0012]            am_[i] = new int [n];
[0013]            for (int j=0; j< n; j++) am_[i][j] = 0;
[0014]        }
[0015]    }
[0016]    
[0017]    graph::graph(int n, int *m) {
[0018]        int i, j;
[0019]        size_ = n;
[0020]        am_ = new int*[n];
[0021]        for (i=0; i< n; i++) {
[0022]            am_[i] = new int [n];
[0023]            for (j=0; j< n; j++) am_[i][j] = m[i*n+j];
[0024]        }
[0025]    }
[0026]    
[0027]    graph::~graph() {
[0028]        for (int i=0; i< size_; i++) delete am_[i];
[0029]        delete am_;
[0030]    }
[0031]    
[0032]    void
[0033]    graph::AddEdge(int x, int y, int weight=1) {
[0034]        am_[x][y] = weight;
[0035]    }
[0036]    
[0037]    void
[0038]    graph::DeleteEdge(int x, int y) {
[0039]        am_[x][y] = 0;
[0040]    }
[0041]    
[0042]    int
[0043]    graph::Visit(int v) {
[0044]        cout << "node " << v << " is visited" << endl;
[0045]    }
[0046]    
[0047]    void
[0048]    graph::bfs(int v) {
[0049]        int i;
[0050]        queue q;
[0051]        bool * visited = new bool[size_];
[0052]        for(i=0; i< size_; i++) visited[i] = false;
[0053]    
[0054]        visited[v] = true; // call visit(v)
[0055]        Visit(v);
[0056]        q.InsertQ(v);
[0057]        while(!q.IsEmpty()) {
[0058]            int w = q.DeleteQ();
[0059]            for(i=0; i< size_; i++) {
[0060]                if(!visited[i]&&am_[w][i] >0) {
[0061]                    visited[i] = true;
[0062]                    Visit(i);
[0063]                    q.InsertQ(i);
[0064]                }
[0065]            }
[0066]        }
[0067]    }
[0068]    
[0069]    void
[0070]    graph::dfs(int v) {
[0071]        bool * visited = new bool[size_];
[0072]        for(int i=0; i< size_; i++) visited[i] = false;
[0073]        visited[v] = true;
[0074]        Visit(v);
[0075]        dfs(visited, v);
[0076]    }
[0077]    
[0078]    void
[0079]    graph::dfs(bool visited[], int v) {
[0080]        for(int i=0; i< size_; i++) {
[0081]            if(!visited[i]&&am_[v][i]>0) {
[0082]                visited[i] = true;
[0083]                Visit(i);
[0084]                dfs(visited, i);
[0085]            }
[0086]        }
[0087]    }
[0088]    
