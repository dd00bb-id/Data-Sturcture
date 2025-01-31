[0000]    // BST CPP
[0001]    
[0002]    #include <iostream>
[0003]    using namespace std;
[0004]    
[0005]    // 노드 구조체
[0006]    struct Node {
[0007]        int value;
[0008]        Node* left;
[0009]        Node* right;
[0010]    
[0011]        Node(int key) {
[0012]            value = key;
[0013]            left = nullptr;
[0014]            right = nullptr;
[0015]        }
[0016]    };
[0017]    
[0018]    // 이진 탐색 트리 클래스
[0019]    class BinarySearchTree {
[0020]    public:
[0021]        Node* root;
[0022]    
[0023]        BinarySearchTree() {
[0024]            root = nullptr;
[0025]        }
[0026]    
[0027]        // 삽입 함수
[0028]        Node* insert(Node* node, int key) {
[0029]            if (node == nullptr) {
[0030]                return new Node(key);
[0031]            }
[0032]    
[0033]            if (key < node->value) {
[0034]                node->left = insert(node->left, key);
[0035]            } else {
[0036]                node->right = insert(node->right, key);
[0037]            }
[0038]    
[0039]            return node;
[0040]        }
[0041]    
[0042]        // 검색 함수
[0043]        Node* search(Node* node, int key) {
[0044]            if (node == nullptr || node->value == key) {
[0045]                return node;
[0046]            }
[0047]    
[0048]            if (key < node->value) {
[0049]                return search(node->left, key);
[0050]            }
[0051]    
[0052]            return search(node->right, key);
[0053]        }
[0054]    
[0055]        // 중위 순회 (Inorder traversal)
[0056]        void inorder(Node* node) {
[0057]            if (node != nullptr) {
[0058]                inorder(node->left);
[0059]                cout << node->value << " ";
[0060]                inorder(node->right);
[0061]            }
[0062]        }
[0063]    
[0064]        // 최소값을 찾는 함수 (삭제에 사용)
[0065]        int minValue(Node* node) {
[0066]            Node* current = node;
[0067]            while (current && current->left != nullptr) {
[0068]                current = current->left;
[0069]            }
[0070]            return current->value;
[0071]        }
[0072]    
[0073]        // 노드 삭제 함수
[0074]        Node* deleteNode(Node* root, int key) {
[0075]            if (root == nullptr) {
[0076]                return root;
[0077]            }
[0078]    
[0079]            // 값이 작은 경우 왼쪽 서브트리로
[0080]            if (key < root->value) {
[0081]                root->left = deleteNode(root->left, key);
[0082]            }
[0083]            // 값이 큰 경우 오른쪽 서브트리로
[0084]            else if (key > root->value) {
[0085]                root->right = deleteNode(root->right, key);
[0086]            }
[0087]            // 값을 찾으면 삭제해야 함
[0088]            else {
[0089]                // 자식이 없거나 하나만 있을 경우
[0090]                if (root->left == nullptr) {
[0091]                    Node* temp = root->right;
[0092]                    delete root;
[0093]                    return temp;
[0094]                } else if (root->right == nullptr) {
[0095]                    Node* temp = root->left;
[0096]                    delete root;
[0097]                    return temp;
[0098]                }
[0099]    
[0100]                // 두 자식이 모두 있을 경우 후속자(최소값)로 대체
[0101]                root->value = minValue(root->right);
[0102]                root->right = deleteNode(root->right, root->value);
[0103]            }
[0104]    
[0105]            return root;
[0106]        }
[0107]    
[0108]        // 트리의 루트에서 삽입
[0109]        void insert(int key) {
[0110]            root = insert(root, key);
[0111]        }
[0112]    
[0113]        // 트리에서 값 검색
[0114]        Node* search(int key) {
[0115]            return search(root, key);
[0116]        }
[0117]    
[0118]        // 트리에서 중위 순회
[0119]        void inorder() {
[0120]            inorder(root);
[0121]            cout << endl;
[0122]        }
[0123]    
[0124]        // 트리에서 값 삭제
[0125]        void deleteNode(int key) {
[0126]            root = deleteNode(root, key);
[0127]        }
[0128]    };
[0129]    
[0130]    int main() {
[0131]        BinarySearchTree bst;
[0132]    
[0133]        // 트리에 값 삽입
[0134]        int keys[] = {20, 8, 22, 4, 12, 10, 14};
[0135]        for (int key : keys) {
[0136]            bst.insert(key);
[0137]        }
[0138]    
[0139]        // 중위 순회 출력
[0140]        cout << "중위 순회 결과: ";
[0141]        bst.inorder();  // 출력: 4 8 10 12 14 20 22
[0142]    
[0143]        // 값 검색
[0144]        int keyToSearch = 10;
[0145]        Node* result = bst.search(keyToSearch);
[0146]        if (result) {
[0147]            cout << keyToSearch << "는 트리에 존재합니다." << endl;
[0148]        } else {
[0149]            cout << keyToSearch << "는 트리에 존재하지 않습니다." << endl;
[0150]        }
[0151]    
[0152]        // 값 삭제
[0153]        bst.deleteNode(10);
[0154]        cout << "10을 삭제한 후 중위 순회 결과: ";
[0155]        bst.inorder();  // 출력: 4 8 12 14 20 22
[0156]    
[0157]        return 0;
[0158]    }
[0159]    
