[0000]    class minheap {
[0001]    public:
[0002]      minheap() { minheap(100); };
[0003]      minheap(int size);
[0004]      ~minheap( );
[0005]      bool IsEmpty();
[0006]      bool IsFull();
[0007]      void InsertMH(int el);
[0008]      int DeleteMH();
[0009]    protected:
[0010]      void UpHeap(int el);
[0011]      void DownHeap();
[0012]    private:
[0013]      int hsize_; // 힙의 최대 크기
[0014]      int last_; //현재 힙의 크기
[0015]      int * storage_;
[0016]    };
[0017]    
