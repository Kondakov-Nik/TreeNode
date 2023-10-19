// @author Kondakov N

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
    // Конструктор по умолчанию
    BinaryTreeSearch() : root(nullptr), current(nullptr), size(0) {}
    // Конструктор с параметрами
    BinaryTreeSearch(const T& item) : root(nullptr), current(nullptr), size(0) {}
};