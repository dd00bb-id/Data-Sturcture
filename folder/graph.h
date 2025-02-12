[0000]    #define MAXQ 100
[0001]    
[0002]    class queue {
[0003]    public:
[0004]        queue();
[0005]        bool IsEmpty() { return (rear_ == front_); }
[0006]        bool IsFull() { return ((rear_+1) % MAXQ == front_); }
[0007]        bool InsertQ(int el);
[0008]        int DeleteQ();
[0009]    private:
[0010]        int arr_[MAXQ];
[0011]        int front_;
[0012]        int rear_;
[0013]    };
[0014]    
[0015]    queue::queue() {
[0016]        front_ = 0;
[0017]        rear_ = 0;
[0018]    }
[0019]    
[0020]    bool queue::InsertQ(int el) {
[0021]        if (IsFull()) return false;
[0022]        arr_[rear_++] = el;
[0023]        rear_ = rear_ % MAXQ;
[0024]        return true;
[0025]    }
[0026]    
[0027]    int queue::DeleteQ() {
[0028]        if (IsEmpty()) return -1;
[0029]        int el = arr_[front_++];
[0030]        front_ = front_ % MAXQ;
[0031]        return el;
[0032]    }
[0033]    
[0034]    class graph {
[0035]    public:
[0036]        graph(int n); // 0~n-1의 노드
[0037]        graph(int n, int *m); // 0~n-1의 노드
[0038]        ~graph();
[0039]        int Visit(int v);
[0040]        void AddEdge(int x, int y, int weight);
[0041]        void DeleteEdge(int x, int y);
[0042]        // void AddNode(); // 노드 n을 추가
[0043]        // void DeleteNode(); // 노드 n을 삭제
[0044]        // bool adjacent(int x, int y);
[0045]        // list neighbors(int x);
[0046]        // int get_node_value(int x);
[0047]        // void set_node_value(int x, int v);
[0048]        // int get_edge_value(int x, int y);
[0049]        // void set_edge_value(int x, int y, int v);
[0050]        void bfs(int v);
[0051]        void dfs(int v);
[0052]    protected:
[0053]        void dfs(bool visited[], int v);
[0054]    private:
[0055]        int **am_;
[0056]        int size_;
[0057]    };
[0058]    
