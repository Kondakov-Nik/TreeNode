// @author Kondakov N

#pragma once
#include <vector>
#include "tree.h"

using namespace std;
#include "tree.h"

// Класс бинарного дерева
template <class T>

class BinaryTreeSearch
{
private:
    // Указатель на корень
    TreeNode<T>* root;
    // Указатель на текущий узел
    TreeNode<T>* curr;
    // Количество элементов дерева
    int size;

public:

    // Конструктор по умолчанию
    BinaryTreeSearch() : root(nullptr), curr(nullptr), size(0) {}

    // Конструктор с параметрами
    BinaryTreeSearch(const T& item) : root(nullptr), curr(nullptr), size(0) {}

    // Конструктор копирования
    BinaryTreeSearch(const BinaryTreeSearch& other)
    {
        // Копируем размер
        this->size = other.size;
        // Копируем дерево
        this->root = CopyTree(other.root);
        // Устанавливаем указатель на текущий узел в корень
        this->curr = this->root;
    }


    // Оператор копирования
    BinaryTreeSearch& operator=(const BinaryTreeSearch& other)
    {  // избегаем самоприсваивания
        if (this != &other) {
            // Копируем размер
            this->size = other.size;
            // Очищаем текущее дерево
            DeleteTree(this->root); 
            // Копируем дерево
            this->root = CopyTree(other.root);
            // Устанавливаем указатель на текущий узел в корень
            this->curr = this->root;
        }
        return *this; // возвращаем ссылку на текущий объект
    }

    // Деструктор
    ~BinaryTreeSearch() { DeleteTree(root); }


    // Стандартные методы
    void Clear(TreeNode<T>* node);
    void Insert(const T& item);
    int Find(const T& item);
    void Delete(const T& item);
    int List_Size()const;
};           


// Очистка дерева
template<class T>
void BinaryTreeSearch<T>::Clear(TreeNode<T>* node) {  //
    if (root != nullptr)
    {
        DeleteTree(root->left); // Рекурсивно удаляем левое поддерево
        DeleteTree(root->right); // Рекурсивно удаляем правое поддерево
        delete root; // Освобождаем память текущего узла
    }

}

// Вставка нового элемента
template<class T>
void BinaryTreeSearch<T>::Insert(const T& item) {
    root = AddNode(root, item);
    size++;
}

// Поиск узла по значению
template<class T>
int BinaryTreeSearch<T>::Find(const T& item) {
    return searchNode(root, item);
}

// Размер дерева
template<class T>
int BinaryTreeSearch<T>::List_Size() const {
    return size;
}

// Удаление узла по значению
template<class T>
void BinaryTreeSearch<T>::Delete(const T& item) {
    root = Remove(root, item);
    size--;
}
















