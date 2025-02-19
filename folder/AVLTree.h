[0000]    #pragma once
[0001]    #include "BinSrchTree.h"
[0002]    
[0003]    class AVLTree : public BinSrchTree
[0004]    {
[0005]    public:
[0006]        AVLTree(void) { NULL; }
[0007]        ~AVLTree(void){ }
[0008]    
[0009]        int getHeightDiff(BinaryNode *node) {
[0010]            if( node==NULL ) return 0;
[0011]            int    hLeft  = getHeight(node->getLeft());
[0012]            int    hRight = getHeight(node->getRight());
[0013]            return hLeft - hRight;
[0014]        }
[0015]    
[0016]        BinaryNode *rotateLL( BinaryNode* parent) {
[0017]            printf(" LL ");
[0018]            BinaryNode* child = parent->getLeft();
[0019]            parent->setLeft( child->getRight() );
[0020]            child->setRight( parent );
[0021]            return child;
[0022]        }
[0023]        BinaryNode *rotateRR( BinaryNode* parent) {
[0024]            printf(" RR ");
[0025]            BinaryNode* child = parent->getRight();
[0026]            parent->setRight( child->getLeft() );
[0027]            child->setLeft( parent );
[0028]            return child;
[0029]        }
[0030]        BinaryNode *rotateRL( BinaryNode* parent) {
[0031]            printf(" RL ");
[0032]            BinaryNode* child = parent->getRight();
[0033]            parent->setRight( rotateLL(child) );
[0034]            return rotateRR(parent);
[0035]        }
[0036]        BinaryNode *rotateLR( BinaryNode* parent) {
[0037]            printf(" LR ");
[0038]            BinaryNode* child = parent->getLeft();
[0039]            parent->setLeft( rotateRR(child) );
[0040]            return rotateLL(parent);
[0041]        }
[0042]    
[0043]        BinaryNode *reBalance (BinaryNode *parent) {
[0044]            int hDiff = getHeightDiff(parent);
[0045]    
[0046]            if( hDiff > 1 ){
[0047]                if( getHeightDiff( parent->getLeft() ) > 0 )
[0048]                    parent = rotateLL( parent );
[0049]                else
[0050]                    parent = rotateLR( parent );
[0051]            }
[0052]            else if ( hDiff < -1 ) {
[0053]                if( getHeightDiff( parent->getRight() ) < 0 )
[0054]                    parent = rotateRR( parent );
[0055]                else
[0056]                    parent = rotateRL( parent );
[0057]            }
[0058]            return parent;
[0059]        }
[0060]    
[0061]        void insert( int data ) {
[0062]            if( isEmpty() )
[0063]                root = new BinaryNode( data );
[0064]            else
[0065]                root = insertAVL( root, data );
[0066]        }
[0067]    
[0068]        BinaryNode* insertAVL(BinaryNode* parent, int data) {
[0069]            if( data < parent->getData() ){
[0070]                if( parent->getLeft() != NULL )
[0071]                    parent->setLeft( insertAVL(parent->getLeft(), data));
[0072]                else
[0073]                    parent->setLeft( new BinaryNode(data) );
[0074]    
[0075]                return reBalance(parent);
[0076]            }
[0077]            else if( data > parent->getData() ){
[0078]                if( parent->getRight() != NULL )
[0079]                    parent->setRight( insertAVL(parent->getRight(), data ));
[0080]                else
[0081]                    parent->setRight( new BinaryNode(data) );
[0082]                return reBalance(parent);
[0083]            }
[0084]            else{
[0085]                printf("중복된 키 에러\n");
[0086]                return NULL;
[0087]            }
[0088]        }
[0089]    };
[0090]    
