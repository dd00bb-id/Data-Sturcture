[0000]    #define ERROR -1; //양의 정수만을 다루는 것을 가정한다.
[0001]    class node {
[0002]    public:
[0003]        node(int d, node * n = 0) {
[0004]            next=n;
[0005]            data=d;
[0006]        }
[0007]    // private: 코딩상의 편의를 위하여 모두 public으로 한다.
[0008]        node * next;
[0009]        int data;
[0010]    };
[0011] 
