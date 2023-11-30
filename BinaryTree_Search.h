// @author Kondakov N

#pragma once
#include <vector>
#include "tree.h"
#include <stack>

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

    // ����������� �����������
    BinaryTreeSearch(BinaryTreeSearch&& other)
    {
        // ���������� ��������� �� ������
        this->root = other.root;
        // ���������� ��������� �� ������� ����
        this->curr = other.curr;
        // ���������� ���������� ��������� ������
        this->size = other.size;

        // �������� ��������� ��������� �������
        other.root = nullptr;
        other.curr = nullptr;
        other.size = 0;
    }

    // �������� ������������ � ������������
    BinaryTreeSearch& operator=(BinaryTreeSearch&& other)
    { // �������� ����������������
        if (&other != this) {
            Clear(this->root); // ������� ������� ������
            // ���������� ��������� �� ������
            this->root = other.root;
            // ���������� ��������� �� ������� ����
            this->curr = other.curr;
            // ���������� ���������� ��������� ������
            this->size = other.size;

            // �������� ��������� ��������� �������
            other.root = nullptr;
            other.curr = nullptr;
            other.size = 0;
        }
        return *this; // ���������� ������� ������
    }

    //////////////// ��������

    ////////// ������������ ����������� � �������� ������������ ����������� ++++

    // ����������� ������ 
    void Clear(TreeNode<T>* node); // ������� ������
    void Insert(const T& item); // ������� ������ ��������
    int Find(const T& item); // ����� ���� �� ��������
    void Delete(const T& item);// �������� ���� �� ��������
    int List_Size()const; // ������ ������





    // ����� ��������� ��������� ������ ������
    template<class T>
    class BSTIterator {
    private:
        // ��������� �� ������� ���� � ��������
        TreeNode<T>* current;
        // ���� ��� ������������ ����� �� ����� ��������
        stack<TreeNode<T>*> nodeStack;
    public:

        // ����������� ���������
        BSTIterator(TreeNode<T>* node) : current(node) {
            // ��������� ����� ������ � ����
            // ���� ���� �� ����� nullptr
            while (current != nullptr) {
                // �������� ���� � ����
                nodeStack.push(current);
                // ��������� � ������ ���������
                current = current->left;
            }
        }

        // �������� �������������-������� � ������
        T& operator*() const {
            // ���������� ������ �������� ����
            return current->data;
        }

        // �������� ����������
        BSTIterator& operator++() {
            if (current != nullptr) {

                // ���� ������� ���� ����� ������� �������, ���� ������
                if (current->right != nullptr) {
                    current = current->right;

                    // ���� ����� �� ���������� ������ �������
                    while (current->left != nullptr) {
                        nodeStack.push(current);
                        current = current->left;
                    }
                }
                // ���� ������� ���� �� ����� ������� �������, ���� ����� �� �����
                else if (!nodeStack.empty()) {
                    current = nodeStack.top();
                    nodeStack.pop();
                }
                // ���� ���� ���� � ��� ������� �������, ��������� ����� ������
                else {
                    current = nullptr;
                }
            }

            return *this;
        }


        // �������� ���������
        bool operator==(const BSTIterator& other) const {
            return current == other.current;
        }

        // �������� �����������
        bool operator!=(const BSTIterator<T>& other) const {
            // ���������� ��������� ��������� ��������� ���������
            return current != other.current;
        }  
    };

        // �������� ������ 
        BSTIterator<T>begin() const {
            return BSTIterator<T>(root);
        }
        // �������� ����� 
        BSTIterator<T>end() const {
            return BSTIterator<T>(nullptr);
        }
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