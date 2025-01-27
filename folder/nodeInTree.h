[0000]    class node {
[0001]    public:
[0002]        node () {
[0003]            data_ = 0; lc_=0; rc_=0;
[0004]        }
[0005]        node (int data, node* lc=0, node * rc=0) {
[0006]            data_ = data;
[0007]            lc_ = lc;
[0008]            rc_ = rc;
[0009]        }
[0010]    // private:
[0011]        int data_;
[0012]        node * lc_;
[0013]        node * rc_;
[0014]    };
[0015]    
