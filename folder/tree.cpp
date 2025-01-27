[0000]    binaryTree::binaryTree (int root) {
[0001]        root_ = new node(root);
[0002]    };
[0003]    
[0004]    binaryTree::~binaryTree () {
[0005]        DeleteTree(root_);
[0006]        root_ = 0;
[0007]    };
[0008]    
[0009]    void binaryTree::DeleteTree (node * ptr) {
[0010]        if (ptr==0) return;
[0011]        DeleteTree(ptr->lc_);
[0012]        DeleteTree(ptr->rc_);
[0013]        delete ptr;
[0014]    };
[0015]    
[0016]    bool binaryTree::Search (int el) {
[0017]        if (Search(root_, el)==0) return false;
[0018]        return true;
[0019]    };
[0020]    
[0021]    node * binaryTree::Search(node * ptr, int el) {
[0022]        if (ptr==0) return 0;
[0023]        if (ptr->data_==el) return ptr;
[0024]        node * tptr = Search(ptr->lc_, el);
[0025]        if (tptr) return tptr;
[0026]        tptr = Search(ptr->rc_, el);
[0027]        return tptr;
[0028]    };
[0029]    
[0030]    bool binaryTree::AddLeftChild(int parent, int child) {
[0031]        node * ptr = Search(root_, parent);
[0032]        if (ptr==0) return false;
[0033]        if (ptr->lc_!=0) return false;
[0034]        ptr->lc_ = new node(child);
[0035]        return true;
[0036]    };
[0037]    
[0038]    bool binaryTree::AddRightChild(int parent, int child) {
[0039]        node * ptr = Search(root_, parent);
[0040]        if (ptr==0) return false;
[0041]        if (ptr->rc_!=0) return false;
[0042]        ptr->rc_ = new node(child);
[0043]        return true;
[0044]    };
[0045]    
[0046]    int binaryTree::Height (node * ptr) {
[0047]        if (ptr==0) return 0;
[0048]        int hl = Height(ptr->lc_);
[0049]        int hr = Height(ptr->rc_);
[0050]        if (hl>hr) return hl+1;
[0051]        else return hr+1;
[0052]    };
[0053]    
[0054]    int binaryTree::NumberOfNodes (node * ptr) {
[0055]        if (ptr==0) return 0;
[0056]        int nl = NumberOfNodes(ptr->lc_);
[0057]        int nr = NumberOfNodes(ptr->rc_);
[0058]        return nl+nr+1;
[0059]    };
[0060]    
[0061]    void binaryTree::BFS () { //queue가 선언되어 있음을 가정함. 컴파일시 오류
[0062]        queue q;
[0063]        q.InsertQ(root_);
[0064]        while (!q.IsEmpty()) {
[0065]            node * ptr = q.DeleteQ();
[0066]            visit(ptr);
[0067]            if (ptr->lc_!=0) q.InsertQ(ptr->lc_);
[0068]            if (ptr->rc_!=0) q.InsertQ(ptr->rc_);
[0069]        }
[0070]    };
[0071]    
[0072]    void binaryTree::DFS (node * ptr) {
[0073]        if (ptr==0) return;
[0074]        DFS(ptr->lc_);
[0075]        DFS(ptr->rc_);
[0076]    };
[0077]    
[0078]    void binaryTree::PreOrderTraversal(node * ptr) {
[0079]        if (ptr==0) return;
[0080]        visit(ptr);
[0081]        PreOrderTraversal(ptr->lc_);
[0082]        PreOrderTraversal(ptr->rc_);
[0083]    };
[0084]    
[0085]    void binaryTree::InOrderTraversal(node * ptr) {
[0086]        if (ptr==0) return;
[0087]        InOrderTraversal(ptr->lc_);
[0088]        visit(ptr);
[0089]        InOrderTraversal(ptr->rc_);
[0090]    };
[0091]    
[0092]    void binaryTree::PostOrderTraversal(node * ptr) {
[0093]        if (ptr==0) return;
[0094]        PostOrderTraversal(ptr->lc_);
[0095]        PostOrderTraversal(ptr->rc_);
[0096]        visit(ptr);
[0097]    };
[0098]    
