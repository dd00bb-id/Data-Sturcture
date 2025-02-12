[0000]    #define MAXQ 100
[0001]    
[0002]    class queue {
[0003]    public:
[0004]        queue() {
[0005]            front_ = 0;
[0006]            rear_ = 0;
[0007]        };
[0008]        bool IsEmpty() { return (rear_ == front_); }
[0009]        bool IsFull() { return ((rear_+1) % MAXQ == front_); }
[0010]        bool InsertQ(int el) {
[0011]            if (IsFull()) return false;
[0012]            arr_[rear_++] = el;
[0013]            rear_ = rear_ % MAXQ;
[0014]            return true;
[0015]        };
[0016]        int DeleteQ() {
[0017]        if (IsEmpty()) return -1;
[0018]        int el = arr_[front_++];
[0019]        front_ = front_ % MAXQ;
[0020]        return el;
[0021]    };
[0022]    private:
[0023]        int arr_[MAXQ];
[0024]        int front_;
[0025]        int rear_;
[0026]    };
[0027]    
[0028]    class list {
[0029]    public:
[0030]        list(int lsize=100) {
[0031]            LMAX = lsize;
[0032]            arr_ = new int[lsize];
[0033]            size_= 0;
[0034]        };
[0035]        int GetSize() {
[0036]            return size_;
[0037]        }
[0038]        void Insert(int item) {
[0039]            int i;
[0040]            if (size_==LMAX) return;
[0041]            for (i=size_; 0<i; i--) {
[0042]                if (item < arr_[i-1]) arr_[i]=arr_[i-1];
[0043]                else break;
[0044]            }
[0045]            arr_[i]=item;
[0046]            size_++;
[0047]        };
[0048]        void Delete(int value) {
[0049]            int i;
[0050]            for (i=0; i<size_; i++) if (value == arr_[i]) break;
[0051]            if (i==size_) return;
[0052]            size_--;
[0053]            for (; i<size_; i++) arr_[i] = arr_[i+1];
[0054]        };
[0055]        int GetAt(int position) {
[0056]            if (size_<=position) return -1;
[0057]            return arr_[position];
[0058]        };
[0059]    private:
[0060]        int LMAX;    // index LMAX;
[0061]        int * arr_;    // element * arr_;
[0062]        int size_;    // index size_
[0063]    };
[0064]    
[0065]    #include <iostream>
[0066]    using namespace std;
[0067]    
[0068]    class graph {
[0069]    public:
[0070]        graph(int n);
[0071]        graph(int n, int *m);
[0072]        ~graph();
[0073]        int Visit(int v) {
[0074]            cout << "node " << v << " is visited" << endl;
[0075]        }
[0076]        void AddEdge(int x, int y, int weight);
[0077]        void DeleteEdge(int x, int y);
[0078]        void Print() {
[0079]            for (int i=0; i<size_; i++) {
[0080]                cout << "row " << i << ": ";
[0081]                for (int j=0; j<al_[i]->GetSize(); j++) {
[0082]                    cout << al_[i]->GetAt(j) << " ";
[0083]                }
[0084]                cout << endl;
[0085]            }
[0086]        }
[0087]        // bool adjacent(int x, int y);
[0088]        // list neighbors(int x);
[0089]        // int get_node_value(int x);
[0090]        // void set_node_value(int x, int v);
[0091]        // int get_edge_value(int x, int y);
[0092]        // void set_edge_value(int x, int y, int v);
[0093]        void bfs(int v);
[0094]        void dfs(int v);
[0095]    private:
[0096]        void dfs(bool visited[], int v);
[0097]    private:
[0098]        list ** al_;
[0099]        int size_;
[0100]    };
[0101]    
