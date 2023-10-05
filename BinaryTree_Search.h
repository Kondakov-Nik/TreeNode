#pragma once
#include <vector>
#include "tree.h"

using namespace std;

// класс бинарного дерева
template <class T>

class BinaryTreeSearch
{
private:
    // указатель на корень
    TreeNode<T>* root;
    // указатель на текущий узел
    TreeNode<T>* current;
    //количество элементов дерева
    int size;

public:
    //  онструктор по умолчанию
    BinaryTreeSearch() : root(nullptr), current(nullptr), size(0) {}
    //  онструктор с параметрами
    BinaryTreeSearch(const T& item) : root(nullptr), current(nullptr), size(0) {
        insert(item); // ¬ставл€ем элемент при создании дерева
    }

}


