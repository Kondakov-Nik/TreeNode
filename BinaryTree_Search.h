// @author Kondakov N

#pragma once
#include <vector>
#include "tree.h"

using namespace std;
#include "tree.h"

// ����� ��������� ������
template <class T>

class BinaryTreeSearch
{
private:
    // ��������� �� ������
    TreeNode<T>* root;
    // ��������� �� ������� ����
    TreeNode<T>* curr;
    // ���������� ��������� ������
    int size;

public:

    // ����������� �� ���������
    BinaryTreeSearch() : root(nullptr), curr(nullptr), size(0) {}

    // ����������� � �����������
    BinaryTreeSearch(const T& item) : root(nullptr), curr(nullptr), size(0) {}

    // ����������� �����������
    BinaryTreeSearch(const BinaryTreeSearch& other)
    {
        // �������� ������
        this->size = other.size;
        // �������� ������
        this->root = CopyTree(other.root);
        // ������������� ��������� �� ������� ���� � ������
        this->curr = this->root;
    }


    // �������� �����������
    BinaryTreeSearch& operator=(const BinaryTreeSearch& other)
    {  // �������� ����������������
        if (this != &other) {
            // �������� ������
            this->size = other.size;
            // ������� ������� ������
            DeleteTree(this->root); 
            // �������� ������
            this->root = CopyTree(other.root);
            // ������������� ��������� �� ������� ���� � ������
            this->curr = this->root;
        }
        return *this; // ���������� ������ �� ������� ������
    }

    // ����������
    ~BinaryTreeSearch() { DeleteTree(root); }


    // ����������� ������
    void Clear(TreeNode<T>* node);
    void Insert(const T& item);
    int Find(const T& item);
    void Delete(const T& item);
    int List_Size()const;
};           


// ������� ������
template<class T>
void BinaryTreeSearch<T>::Clear(TreeNode<T>* node) {  //
    if (root != nullptr)
    {
        DeleteTree(root->left); // ���������� ������� ����� ���������
        DeleteTree(root->right); // ���������� ������� ������ ���������
        delete root; // ����������� ������ �������� ����
    }

}

// ������� ������ ��������
template<class T>
void BinaryTreeSearch<T>::Insert(const T& item) {
    root = AddNode(root, item);
    size++;
}

// ����� ���� �� ��������
template<class T>
int BinaryTreeSearch<T>::Find(const T& item) {
    return searchNode(root, item);
}

// ������ ������
template<class T>
int BinaryTreeSearch<T>::List_Size() const {
    return size;
}

// �������� ���� �� ��������
template<class T>
void BinaryTreeSearch<T>::Delete(const T& item) {
    root = Remove(root, item);
    size--;
}
















