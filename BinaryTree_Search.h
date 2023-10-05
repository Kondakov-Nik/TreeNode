#pragma once
#include <vector>
#include "tree.h"

using namespace std;

// ����� ��������� ������
template <class T>

class BinaryTreeSearch
{
private:
    // ��������� �� ������
    TreeNode<T>* root;
    // ��������� �� ������� ����
    TreeNode<T>* current;
    //���������� ��������� ������
    int size;

public:
    // ����������� �� ���������
    BinaryTreeSearch() : root(nullptr), current(nullptr), size(0) {}
    // ����������� � �����������
    BinaryTreeSearch(const T& item) : root(nullptr), current(nullptr), size(0) {
        insert(item); // ��������� ������� ��� �������� ������
    }

}


