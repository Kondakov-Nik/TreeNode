// @author Kondakov N

#pragma once
#include <vector>
#include "tree.h"
#include <stack>

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

    // Конструктор перемещения
    BinaryTreeSearch(BinaryTreeSearch&& other)
    {
        // Перемещаем указатель на корень
        this->root = other.root;
        // Перемещаем указатель на текущий узел
        this->curr = other.curr;
        // Перемещаем количество элементов дерева
        this->size = other.size;

        // Обнуляем указатели исходного объекта
        other.root = nullptr;
        other.curr = nullptr;
        other.size = 0;
    }

    // Оператор присваивания с перемещением
    BinaryTreeSearch& operator=(BinaryTreeSearch&& other)
    { // Избегаем самоприсваивания
        if (&other != this) {
            Clear(this->root); // Очищаем текущее дерево
            // Перемещаем указатель на корень
            this->root = other.root;
            // Перемещаем указатель на текущий узел
            this->curr = other.curr;
            // Перемещаем количество элементов дерева
            this->size = other.size;

            // Обнуляем указатели исходного объекта
            other.root = nullptr;
            other.curr = nullptr;
            other.size = 0;
        }
        return *this; // Возвращаем текущий объект
    }

    //////////////// комменты

    ////////// консттруктор перемещения и оператор присваивания перемещения ++++

    // Стандартные методы 
    void Clear(TreeNode<T>* node); // Очистка дерева
    void Insert(const T& item); // Вставка нового элемента
    int Find(const T& item); // Поиск узла по значению
    void Delete(const T& item);// Удаление узла по значению
    int List_Size()const; // Размер дерева





    // класс итератора бинарного дерева поиска
    template<class T>
    class BSTIterator {
    private:
        // указатель на текущий узел в итерации
        TreeNode<T>* current;
        // стек для отслеживания узлов во время итерации
        stack<TreeNode<T>*> nodeStack;
    public:

        // конструктор итератора
        BSTIterator(TreeNode<T>* node) : current(node) {
            // помещение узлов дерева в стек
            // пока узел не равен nullptr
            while (current != nullptr) {
                // помещаем узлы в стек
                nodeStack.push(current);
                // переходим к левому поддереву
                current = current->left;
            }
        }

        // оператор разыменования-доступа к данным
        T& operator*() const {
            // возвращает данные текущего узла
            return current->data;
        }

        // оператор инкремента
        BSTIterator& operator++() {
            if (current != nullptr) {

                // если текущий узел имеет правого потомка, идем вправо
                if (current->right != nullptr) {
                    current = current->right;

                    // идем влево до последнего левого потомка
                    while (current->left != nullptr) {
                        nodeStack.push(current);
                        current = current->left;
                    }
                }
                // если текущий узел не имеет правого потомка, идем вверх по стеку
                else if (!nodeStack.empty()) {
                    current = nodeStack.top();
                    nodeStack.pop();
                }
                // если стек пуст и нет правого потомка, достигнут конец дерева
                else {
                    current = nullptr;
                }
            }

            return *this;
        }


        // оператор равенства
        bool operator==(const BSTIterator& other) const {
            return current == other.current;
        }

        // оператор неравенства
        bool operator!=(const BSTIterator<T>& other) const {
            // возвращаем результат отрицания оператора равенства
            return current != other.current;
        }  
    };

        // итератор начала 
        BSTIterator<T>begin() const {
            return BSTIterator<T>(root);
        }
        // итератор конца 
        BSTIterator<T>end() const {
            return BSTIterator<T>(nullptr);
        }
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