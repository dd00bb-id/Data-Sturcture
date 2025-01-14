[0000]    #include "queue.h"
[0001]    #include <iostream>
[0002]    using namespace std;
[0003]    
[0004]    Queue::Queue() {
[0005]        rear_ = 0;
[0006]    }
[0007]    
[0008]    bool Queue::InsertQ(int el) {
[0009]        if (IsFull()) return false;
[0010]        arr_[rear_++] = el;
[0011]    }
[0012]    
[0013]    int Queue::DeleteQ() {
[0014]        if (IsEmpty()) return -1;
[0015]        int el = arr_[0];
[0016]        rear_--;
[0017]        for (int i=0; i<rear_; i++) arr_[i] = arr_[i+1];
[0018]        return el;
[0019]    }
[0020]    
[0021]    /*
[0022]    int main() {
[0023]        Queue * q = new Queue();
[0024]        q-> InsertQ(2);
[0025]        q-> InsertQ(5);
[0026]        q-> InsertQ(3);
[0027]        while (!q->IsEmpty()) cout << q->DeleteQ() << " ";
[0028]    
[0029]        return 0;
[0030]    }
[0031]    */
[0032]  
