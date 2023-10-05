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

// ������� ��� �������� ������
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
void DeleteTree(TreeNode<T>* root)
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
        return 0;
    int leftDepth = GetTreeDepth(root->left);
    int rightDepth = GetTreeDepth(root->right);
    return 1 + max(leftDepth, rightDepth);
}

// ������� ��� ������ ������ (��������� �����)
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
void BreadthFirstTraversal(const TreeNode<T>* root) {
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
