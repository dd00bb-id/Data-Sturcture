[0000]    #include "queue.h"
[0001]    #include <iostream>
[0002]    using namespace std;
[0003]    
[0004]    Queue::Queue() {
[0005]        front_ = 0;
[0006]        rear_ = 0;
[0007]    }
[0008]    
[0009]    bool Queue::InsertQ(int el) {
[0010]        if (IsFull()) return false;
[0011]        arr_[rear_++] = el;
[0012]        rear_ = rear_ % MAXQ;
[0013]        return true;
[0014]    }
[0015]    
[0016]    int Queue::DeleteQ() {
[0017]        if (IsEmpty()) return -1;
[0018]        int el = arr_[front_++];
[0019]        front_ = front_ % MAXQ;
[0020]        return el;
[0021]    }
[0022]    
[0023]    /*
[0024]    int main() {
[0025]        Queue * q = new Queue();
[0026]        q-> InsertQ(2);
[0027]        q-> InsertQ(5);
[0028]        q-> InsertQ(3);
[0029]        while (!q->IsEmpty()) cout << q->DeleteQ() << " ";
[0030]    
[0031]        return 0;
[0032]    }
[0033]    */
[0034]    
