[0000]    class node;
[0001]    class binaryTree {
[0002]    public:
[0003]        // binaryTree ();
[0004]        binaryTree (int root);
[0005]        ~binaryTree ();
[0006]        // bool AddRoot (int root);
[0007]        bool Search (int el);
[0008]        bool AddLeftChild( int parent, int child);
[0009]        bool AddRightChild( int parent, int child);
[0010]        int Height () { return Height(root_); };
[0011]        int NumberOfNodes () {return NumberOfNodes(root_); };
[0012]        void BFS ();
[0013]        void visit(node * ptr) {
[0014]            cout << "node " << ptr->data_ << " is visited"; // underscore 추가
[0015]        };
[0016]        void DFS () { DFS(root_); }; // 주석처리 제외
[0017]        void PreOrderTraversal () { PreOrderTraversal(root_); };
[0018]        void InOrderTraversal () { InOrderTraversal(root_); };
[0019]        void PostOrderTraversal () { PostOrderTraversal(root_); };
[0020]    private:
[0021]        void DeleteTree(node * ptr);
[0022]        node * Search (node * ptr, int el);
[0023]        int  Height (node * ptr);
[0024]        int  NumberOfNodes (node * ptr);
[0025]        // void DFS(node * ptr);
[0026]        void PreOrderTraversal(node * ptr);
[0027]        void InOrderTraversal(node * ptr);
[0028]        void PostOrderTraversal(node * ptr);
[0029]    private:
[0030]        node * root_;
[0031]    };
[0032]    
