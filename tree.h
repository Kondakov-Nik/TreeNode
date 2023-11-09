// @author Kondakov N
#pragma once
#include <vector>
#include <queue>

using namespace std;

// ���������� ������� ��� ���� ��������� ������
template <class T>


class TreeNode
{
public:

    // �������� �������, ����������� ����������
    T data;
    
    // ��������� ������ � ������� �������� �����
    TreeNode<T>* left;
    TreeNode<T>* right;

    // ����������� �������������� ���� ������ � ����������. NULL - ������������� ������� ���������
    TreeNode(const T& item, TreeNode<T>* lptr = nullptr, TreeNode<T>* rptr = nullptr) :
        data(item), left(lptr), right(rptr) {}
};

// ������� ��� �������� ������ 1
// ������� ���������� ��������� �� TreeNode<T> � �� ��������� ����������
template <class T>
TreeNode<T>* CreateTree()
{
    TreeNode<T>* root = new TreeNode<T>(1);
    root->left = new TreeNode<T>(2);
    root->right = new TreeNode<T>(3);
    root->left->left = new TreeNode<T>(4);
    root->left->right = new TreeNode<T>(5);
    return root;
}

// ������� ��� �������� ������ 2
// ������� ���������� ��������� �� TreeNode<T> � �� ��������� ����������
template <class T>
TreeNode<T>* CreateTree2()
{
    TreeNode<T>* root = new TreeNode<T>(1);
    root->left = new TreeNode<T>(2);
    root->left->left = new TreeNode<T>(4);
    root->left->left->left = new TreeNode<T>(5);
    return root;
}

// ������� ��� �������� ������ 3
// ������� ���������� ��������� �� TreeNode<T> � �� ��������� ����������
template <class T>
TreeNode<T>* CreateTree3()
{
    TreeNode<T>* root = new TreeNode<T>(1);
    return root;
}

// ������� ��� �������� ������ 4
// ������� ���������� ��������� �� TreeNode<T> � �� ��������� ����������
template <class T>
TreeNode<T>* CreateTree4()
{  
    TreeNode<T>* root = nullptr ;
    return root;
}

// ������� ��� �������� ������ �.�.
// ������� ���������� ��������� �� TreeNode<T> � �� ��������� ����������
template <class T>
TreeNode<T>* CreateTreeSV()
{
    TreeNode<T>* root = new TreeNode<T>(8);
    root->left = new TreeNode<T>(3);
    root->right = new TreeNode<T>(10);
    root->left->left = new TreeNode<T>(1);
    root->left->right = new TreeNode<T>(6);
    root->left->right->left = new TreeNode<T>(4);
    root->left->right->right = new TreeNode<T>(7);
    root->right->right = new TreeNode<T>(14);
    root->right->right->left = new TreeNode<T>(13);
    return root;
}

// ������� ��� �������� ������� (������) �� ������ ������ NLR (��������������� �����) (������ ����)
template <class T>
void NLRTraversal(TreeNode<T>* root, vector<T>& result)
{
    if (root != nullptr)
    {
        result.push_back(root->data); // ��������� ������� ���� � ������
        NLRTraversal(root->left, result); // ���������� ������� ����� ���������
        NLRTraversal(root->right, result); // ���������� ������� ������ ���������
    }
}

// ������� ��� �������� ������� (������) �� ������ ������ LNR (������������ �����) (����� �����)
template <class T>
void LNRTraversal(TreeNode<T>* root, vector<T>& result)
{
    if (root != nullptr)
    {
        LNRTraversal(root->left, result); // ���������� ������� ����� ���������
        result.push_back(root->data); // ��������� ������� ���� � ������
        LNRTraversal(root->right, result); // ���������� ������� ������ ���������
    }
}

// ������� ��� �������� ������� (������) �� ������ ������ LRN (�������� �����) (����� �����)
template <class T>
void LRNTraversal(TreeNode<T>* root, vector<T>& result)
{
    if (root != nullptr)
    {
        LRNTraversal(root->left, result); // ���������� ������� ����� ���������
        LRNTraversal(root->right, result); // ���������� ������� ������ ���������
        result.push_back(root->data); // ��������� ������� ���� � ������
    }
}

// ������� ��� ������ ����������� ����� ������
template <class T>
void PrintTree(TreeNode<T>* root)
{
    if (root != nullptr)
    {
        cout << root->data << " "; // ������� ������� ����
        PrintTree(root->left); // ���������� ������� ����� ���������
        PrintTree(root->right); // ���������� ������� ������ ���������
    }
}


// ������� ��� �������� ������ 
template <class T>
void DeleteTree(TreeNode<T>* root) // ���������� ��������� �� ������
 {
    if (root != nullptr)
    {
        DeleteTree(root->left); // ���������� ������� ����� ���������
        DeleteTree(root->right); // ���������� ������� ������ ���������
        delete root; // ����������� ������ �������� ����
    }
}

// ������� ��� �������� ����� � ������
template <class T>
int CountNodes(TreeNode<T>* root)
{
    if (root == nullptr)
        return 0;
    return 1 + CountNodes(root->left) + CountNodes(root->right);
}



// ������� ��� ����������� ������� ������
template <class T>
int GetTreeDepth(TreeNode<T>* root)
{
    if (root == nullptr)
        return -1;
    int leftDepth = GetTreeDepth(root->left);
    int rightDepth = GetTreeDepth(root->right);
    return 1 + max(leftDepth, rightDepth); // ���� ���� ������ -- ������ 0
}

// ������� ��� ������ ������ (��������� �����) - RNL �����
template <class T>
void PrintAllTree(TreeNode<T>* root, int depth = 0)
{
    if (root != nullptr)
    {
        PrintAllTree(root->right, depth + 1); // ���������� �������� ������ ���������
        for (int i = 0; i < depth; ++i)
            cout << "    "; // ������ ��� �����������
        cout << root->data << endl; // ������� �������� �������� ����
        PrintAllTree(root->left, depth + 1); // ���������� �������� ����� ���������
    }
}


// ���������� ����� ����� � ������ ������
template <class T>
TreeNode<T>* AddNode(TreeNode<T>* root, const T& item)

{
    // ���� ����� �� ����������
    if (root == nullptr)
    { // �������� �� � ������� � ��� ������
        return new TreeNode<int>(item, nullptr, nullptr);
    }
    if (item < root->data) {
        // ���������� ��������� �������� � ����� ���������
        root->left = AddNode(root->left, item);
    }
    else if (item > root->data) {
        // ���������� ��������� �������� � ������ ���������
        root->right = AddNode(root->right, item);
    }
    // ���� �������� ��� ������������ � ������, ������ �� ������
    return root;
}

// ������� ��� ����������� ��������� ������
template <class T>
TreeNode<T>* CopyTree(const TreeNode<T>* root)
{
    if (root == nullptr) {
        return nullptr;
    }
        // ������� ����� ���� � ������� �� ��������� ������
        TreeNode<T>* newRoot = new TreeNode<T>(root->data);

        // ���������� �������� ����� � ������ ����������
        newRoot->left = CopyTree(root->left);
        newRoot->right = CopyTree(root->right);

        return newRoot;
    
}

// ������� ��� ������ ������ � ������ � �������������� �������
template <class T>
void BreadthTraversal(const TreeNode<T>* root) {
    if (root == nullptr) {
        return; // ���� ������ ������, ��������� �������
    }

    queue<const TreeNode<T>*> queue; // ������� ������ ������� ��� ������
    queue.push(root); // ��������� ������ � �������

    while (!queue.empty()) { // ���� ������� �� ������ �����
        const TreeNode<T>* current = queue.front(); // ��������� ������ ������� �� ������� � ��������� ��� � ���������� current
        queue.pop(); // ����� ���������� ���� �� ������� �� ��� ������� �� �������

        // ������� ������ �������� ����
        cout << current->data << " ";

        // ��������� ����� � ������ ��������� � ������� ��� ���������
        if (current->left != nullptr) {
            queue.push(current->left);
        }
        if (current->right != nullptr) {
            queue.push(current->right);
        }
    }
}
 
// ���������� ������� � ������� ���� ������ - NLR 
template <class T> 

// TreeNode<T>* root - ��������� �� �������� ���� ������
// (*operation) - ��������� �� ������ ������� 
// (TreeNode<T>*) - ��������� �� ���� ������ ������� - �������� ����������� ������� operation

void applyFunction(TreeNode<T>* root, void (*operation)(TreeNode<T>*)) 
{
    if (root != nullptr)
    {
        // ��������� �������� � �������� ����
        operation(root);
        // ���������� ��������� �������� � ������ ���������
        applyFunction(root->left, operation);
        // ���������� ��������� �������� � ������� ���������
        applyFunction(root->right, operation);

    }
}


// �������� - ��� �������, ��� ������� ������� �������� ���� ���� ������ ������ ���� � �����-�� ����������
// ���������� ��� ����������, � ����� ������� ������ ����� ��������� � �� ����� ������� ���������

// removeNode �������� ���� ���� ��� �������� ���� �� ������ � ���������� ����� ���������� �������� � �����������

//// �������� ���� �� ������ �� �������� val 
//template <class T>
//void removeNode(TreeNode<T>*& root, const T& val) {
//    // ���� ������ ����� NULL, �� ������ ������
//    if (root == nullptr) return;
//    // ���� �������� �������� ���� ����� �������� val
//    if (root->data == val) {
//        // ���� ����� �� ����� �����
//        if (root->left == nullptr && root->right == nullptr) {
//            // ������� ����� � �������� ��������� �� ����
//            delete root;
//            root = nullptr;
//        }
//        // ���� � ����� ��� ������ ���������
//        else if (root->left == nullptr) {
//            // ������� ��������� ��������� �� ������
//            TreeNode<T>* temp = root;
//            // ��������� ��������� �����, ����� �� �������� �� ������ ���������
//            root = root->right;
//            // ������� ��������� ����
//            delete temp;
//        }
//        // ���� � ����� ��� ������� ���������
//        else if (root->right == nullptr) {
//            // ������� ��������� ��������� �� ������
//            TreeNode<T>* temp = root;
//            // ��������� ��������� �� ������, ����� �� �������� �� ����� ���������
//            root = root->left;
//            // ������� ��������� ����
//            delete temp;
//        }
//        // ���� � ����� ���� ��� ����� � ������ ���������
//        else {
//            // ������� ��������� ���������, ������� ���������� � ������� ���������
//            TreeNode<T>* temp = root->right;
//            // ������� ����� ����� ���� � ������ ���������
//            while (temp->left != nullptr) {
//                temp = temp->left; // �������� �������� ����� �� ��� �������� 
//            }
//            // �������� �������� ���������� ���� � ������� ����
//            root->data = temp->data;
//            // ���������� ������� ���� � ������������� ��������� �� ������� ���������
//            removeNode(root->right, temp->data);
//        }
//    }
//    // ���� �������� val ������ �������� �����, ���������� ���� � ����� ���������
//    else if (val < root->data) {
//        removeNode(root->left, val);
//    }
//    // ���� �������� val ������ �������� �����, ���������� ���� � ������ ���������
//    else {
//        removeNode(root->right, val);
//    }
//}

//�������� ���� ��������� ������
template<class T>
TreeNode<T>* Remove(TreeNode<T>* root, const T& data) {
    //��������, parent, ������� ����� ��������� �������� ���������� ����
    TreeNode<T>* parent;

    if (root == nullptr) {
        // ������ ������ ��� ��������� ����� ����� (���� ��� ��������)
        return nullptr;
    }

    if (data < root->data) {
        // ���������� ������� �������� �� ������ ���������
        root->left = Remove(root->left, data);
    }
    else if (data > root->data) {
        // ���������� ������� �������� �� ������� ���������
        root->right = Remove(root->right, data);
    }
    else {
        // ������ ����, ������� ����� �������

        if (root->left == nullptr && root->right == nullptr) {
            // ���� �������� ������ (�� ����� ��������)
            delete root;
            root = nullptr;
        }
        else if (root->left == nullptr) {
            // ���� ����� ������ ������� �������

            parent = root;
            root = root->right;
            delete parent;
        }
        else if (root->right == nullptr) {
            // ���� ����� ������ ������ �������

            parent = root;
            root = root->left;
            delete parent;
        }
        else {
            // ���� ����� ��� �������

            TreeNode<T>* parent = SuccMin(root->right);
            root->data = parent->data;
            root->right = Remove(root->right, parent->data);
        }
    }

    return root;
}

// ����� ���������� �����������
template<class T>
TreeNode<T>* SuccMin(TreeNode<T>* root) {
    if (root == nullptr) {
        return nullptr;
    }
    while (root->left != nullptr)
    {
        root = root->left;
    }
    return root;
}

// ������� ��� ��������, �������� �� ������ ������ ��������
template <class T>
bool containsValue(const TreeNode<T>* root, const T& value) {
    // ���� ������ ������ ��� ������ �������� ��������, ���������� true
    if (root == nullptr) {
        return false;
    }
    if (root->data == value) {
        return true;
    }

    // ���������� ��������� ����� � ������ ���������
    return containsValue(root->left, value) || containsValue(root->right, value);
}


//����� ���� �� ��������(����� ��� ������)
template<class T>
int searchNode(TreeNode<T>* node, const T& data, int level = 0) {
    if (node == nullptr) {
        // ������ ������ ��� ��������� ����� ����� (���� ��� ��������)
        return -1; // ���������� -1, ����� �������, ��� ������� �� ������
    }

    if (data == node->data) {
        // �������� ������� � ������� ����
        return level;
    }
    else if (data < node->data) {
        // ���������� ���� �������� � ����� ���������
        return searchNode(node->left, data, level + 1);
    }
    else {
        // ���������� ���� �������� � ������ ���������
        return searchNode(node->right, data, level + 1);
    }
}


// ����� ���������� ����������� (successor)
template <class T>
TreeNode<T>* findSuccessor(TreeNode<T>* root, const T& value)
{
    TreeNode<T>* successor = nullptr;  // ��������� ��� �������� ���������� ���� � ������ = nullptr (���� �� ������)

    while (root != nullptr) 
    {
        if (value < root->data)  // ���� �������� �������� ������ �������� �������� ����
        {
            successor = root;  // successor �� ������� ����
            root = root->left;  // ���� �����
        }
        else if (value > root->data)  // ���� �������� �������� ������ �������� �������� ����
        {
            root = root->right;  // ���� ������
        }
        else  // ���� �������� �������� ����� �������� �������� ���� (���� ������)
        {
            if (root->right != nullptr)  // ���� � �������� ���� ���� ������ ���������
            {
                root = root->right;  // ���� ������
                while (root->left != nullptr)  // ���� ����� �� ����� ������� ���������
                {
                    root = root->left;
                }
                successor = root;  //  successor = ���������� ����
            }
            break;
        }
    }

    if (successor != nullptr)
    {
        cout << "Successor ��� " << value << " ����� " << successor->data << endl;
    }
    else
    {
        cout << "Successor ��� " << value << " �� ������" << endl;
    }
    return successor; 
}
