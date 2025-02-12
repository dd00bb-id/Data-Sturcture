[0000]    // #include "list.h"
[0001]    // #include "queue.h"
[0002]    // #include "graph.h"
[0003]    graph::graph(int n) {
[0004]        int i;
[0005]        size_ = n;
[0006]        al_ = new list*[n];
[0007]        for (i=0; i< n; i++) {
[0008]            al_[i] = new list(n);
[0009]        }
[0010]    }
[0011]    
[0012]    graph::graph(int n, int *m) {
[0013]        int i, j, k=0;
[0014]        size_ = n;
[0015]        al_ = new list*[n];
[0016]        for (i=0; i<size_; i++) {
[0017]            al_[i] = new list(n);
[0018]            for (j=0; j<size_; j++)
[0019]                if (m[i*n+j]==1) al_[i]->Insert(j);
[0020]        }
[0021]    }
[0022]    
[0023]    graph::~graph() {
[0024]        for (int i=0; i< size_; i++) delete al_[i];
[0025]        delete al_;
[0026]    }
[0027]    
[0028]    void
[0029]    graph::AddEdge(int x, int y, int weight=1) {
[0030]        al_[x]->Delete(y);
[0031]        al_[x]->Insert(y);
[0032]    }
[0033]    
[0034]    void
[0035]    graph::DeleteEdge(int x, int y) {
[0036]        al_[x]->Delete(y);
[0037]    }
[0038]    
[0039]    void
[0040]    graph::bfs(int v) {
[0041]        int i, p;
[0042]        bool * visited = new bool[size_];
[0043]        queue q;
[0044]        for(i=0; i< size_; i++) visited[i] = false;
[0045]    
[0046]        visited[v] = true;
[0047]        Visit(v);
[0048]        q.InsertQ(v);
[0049]        while(!q.IsEmpty()) {
[0050]            int w = q.DeleteQ();
[0051]            for(i=0; i< al_[w]->GetSize(); i++) {
[0052]                p = al_[w]->GetAt(i);
[0053]                if(!visited[p]) {
[0054]                    visited[p] = true;
[0055]                    Visit(p);
[0056]                    q.InsertQ(p);
[0057]                }
[0058]            }
[0059]        }
[0060]    }
[0061]    
[0062]    void
[0063]    graph::dfs(int v) {
[0064]        bool * visited = new bool[size_];
[0065]        for(int i=0; i< size_; i++) visited[i] = false;
[0066]        visited[v] = true;
[0067]        Visit(v);
[0068]        dfs(visited, v);
[0069]    }
[0070]    
[0071]    void
[0072]    graph::dfs(bool visited[], int v) {
[0073]        for(int i=0; i< al_[v]->GetSize(); i++) {
[0074]            int p = al_[v]->GetAt(i);
[0075]            if(!visited[p]) {
[0076]                visited[p] = true;
[0077]                Visit(p);
[0078]                dfs(visited, p);
[0079]            }
[0080]        }
[0081]    }
[0082]    
