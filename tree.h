// @author Kondakov N
#pragma once
#include <vector>
#include <queue>

using namespace std;

// объявление объекта для узла бинарного дерева
template <class T>


class TreeNode
{
public:

    // открытый элемент, допускающий обновление
    T data;
    
    // указатели левого и правого дочерних узлов
    TreeNode<T>* left;
    TreeNode<T>* right;

    // конструктор инициализирует поля данных и указателей. NULL - соответствует пустому поддереву
    TreeNode(const T& item, TreeNode<T>* lptr = nullptr, TreeNode<T>* rptr = nullptr) :
        data(item), left(lptr), right(rptr) {}
};

// Функция для создания дерева 1
// Функция возвращает указатель на TreeNode<T> и не принимает аргументов
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

// Функция для создания дерева 2
// Функция возвращает указатель на TreeNode<T> и не принимает аргументов
template <class T>
TreeNode<T>* CreateTree2()
{
    TreeNode<T>* root = new TreeNode<T>(1);
    root->left = new TreeNode<T>(2);
    root->left->left = new TreeNode<T>(4);
    root->left->left->left = new TreeNode<T>(5);
    return root;
}

// Функция для создания дерева 3
// Функция возвращает указатель на TreeNode<T> и не принимает аргументов
template <class T>
TreeNode<T>* CreateTree3()
{
    TreeNode<T>* root = new TreeNode<T>(1);
    return root;
}

// Функция для создания дерева 4
// Функция возвращает указатель на TreeNode<T> и не принимает аргументов
template <class T>
TreeNode<T>* CreateTree4()
{
    TreeNode<T>* root = new TreeNode<T>(NULL);
    return root;
}


// Функция для создания массива (списка) на основе обхода NLR (предварительный обход) (сверху вниз)
template <class T>
void NLRTraversal(TreeNode<T>* root, vector<T>& result)
{
    if (root != nullptr)
    {
        result.push_back(root->data); // Добавляем текущий узел в массив
        NLRTraversal(root->left, result); // Рекурсивно обходим левое поддерево
        NLRTraversal(root->right, result); // Рекурсивно обходим правое поддерево
    }
}

// Функция для создания массива (списка) на основе обхода LNR (симметричный обход) (снизу вверх)
template <class T>
void LNRTraversal(TreeNode<T>* root, vector<T>& result)
{
    if (root != nullptr)
    {
        LNRTraversal(root->left, result); // Рекурсивно обходим левое поддерево
        result.push_back(root->data); // Добавляем текущий узел в массив
        LNRTraversal(root->right, result); // Рекурсивно обходим правое поддерево
    }
}

// Функция для создания массива (списка) на основе обхода LRN (обратный обход) (снизу вверх)
template <class T>
void LRNTraversal(TreeNode<T>* root, vector<T>& result)
{
    if (root != nullptr)
    {
        LRNTraversal(root->left, result); // Рекурсивно обходим левое поддерево
        LRNTraversal(root->right, result); // Рекурсивно обходим правое поддерево
        result.push_back(root->data); // Добавляем текущий узел в массив
    }
}

// Функция для вывода содержимого узлов дерева
template <class T>
void PrintTree(TreeNode<T>* root)
{
    if (root != nullptr)
    {
        cout << root->data << " "; // Выводим текущий узел
        PrintTree(root->left); // Рекурсивно выводим левое поддерево
        PrintTree(root->right); // Рекурсивно выводим правое поддерево
    }
}


// Функция для удаления дерева 
template <class T>
void DeleteTree(TreeNode<T>* root)
{
    if (root != nullptr)
    {
        DeleteTree(root->left); // Рекурсивно удаляем левое поддерево
        DeleteTree(root->right); // Рекурсивно удаляем правое поддерево
        delete root; // Освобождаем память текущего узла
    }
}

// Функция для подсчета узлов в дереве
template <class T>
int CountNodes(TreeNode<T>* root)
{
    if (root == nullptr)
        return 0;
    return 1 + CountNodes(root->left) + CountNodes(root->right);
}



// Функция для определения глубины дерева
template <class T>
int GetTreeDepth(TreeNode<T>* root)
{
    if (root == nullptr)
        return -1;
    int leftDepth = GetTreeDepth(root->left);
    int rightDepth = GetTreeDepth(root->right);
    return 1 + max(leftDepth, rightDepth);
}

// Функция для печати дерева (инфиксный обход)
template <class T>
void PrintAllTree(TreeNode<T>* root, int depth = 0)
{
    if (root != nullptr)
    {
        PrintAllTree(root->right, depth + 1); // Рекурсивно печатаем правое поддерево
        for (int i = 0; i < depth; ++i)
            cout << "    "; // Отступ для наглядности
        cout << root->data << endl; // Выводим значение текущего узла
        PrintAllTree(root->left, depth + 1); // Рекурсивно печатаем левое поддерево
    }
}


// Добавление новых узлов в дерево поиска
template <class T>
TreeNode<T>* AddNode(TreeNode<T>* root, const T& item)

{
    // Если ветки не существует
    if (root == nullptr)
    { // Создадим ее и зададим в нее данные
        return new TreeNode<int>(item, nullptr, nullptr);
    }
    if (item < root->data) {
        // Рекурсивно вставляем значение в левое поддерево
        root->left = AddNode(root->left, item);
    }
    else if (item > root->data) {
        // Рекурсивно вставляем значение в правое поддерево
        root->right = AddNode(root->right, item);
    }
    // Если значение уже присутствует в дереве, ничего не делаем
    return root;
}

// Функция для копирования бинарного дерева
template <class T>
TreeNode<T>* CopyTree(const TreeNode<T>* root)
{
    if (root == nullptr) {
        return nullptr;
    }
        // Создаем новый узел с данными из исходного дерева
        TreeNode<T>* newRoot = new TreeNode<T>(root->data);

        // Рекурсивно копируем левое и правое поддеревья
        newRoot->left = CopyTree(root->left);
        newRoot->right = CopyTree(root->right);

        return newRoot;
    
}

// Функция для обхода дерева в ширину с использованием очереди
template <class T>
void BreadthTraversal(const TreeNode<T>* root) {
    if (root == nullptr) {
        return; // Если корень пустой, завершаем функцию
    }

    queue<const TreeNode<T>*> queue; // Создаем пустую очередь для обхода
    queue.push(root); // Добавляем корень в очередь

    while (!queue.empty()) { // Пока очередь не станет пуста
        const TreeNode<T>* current = queue.front(); // Извлекаем первый элемент из очереди и сохраняем его в переменной current
        queue.pop(); // После извлечения узла из очереди мы его удаляем из очереди

        // Выводим данные текущего узла
        cout << current->data << " ";

        // Добавляем левое и правое поддерево в очередь для обработки
        if (current->left != nullptr) {
            queue.push(current->left);
        }
        if (current->right != nullptr) {
            queue.push(current->right);
        }
    }
}
 
// Приминение функции к каждому узлу дерева
template <class T>
void applyFunction(TreeNode<T>* root, void (*operation)(TreeNode<T>*))
{
    if (root != nullptr)
    {
        // Применяем операцию к текущему узлу
        operation(root);
        // Рекурсивно применяем операцию к левому поддереву
        applyFunction(root->left, operation);
        // Рекурсивно применяем операцию к правому поддереву
        applyFunction(root->right, operation);

    }
}

// Удаление узла из дерева по значению val
template <class T>
void removeNode(TreeNode<T>*& root, const T& val) {
    // Если корень равен NULL, то дерево пустое
    if (root == NULL) return;
    // Если значение текущего узла равно значению val
    if (root->data == val) {
        // Если корня не имеет детей
        if (root->left == NULL && root->right == NULL) {
            // Удаляем корня и обнуляем указатель на него
            delete root;
            root = NULL;
        }
        // Если у корня нет левого поддерева
        else if (root->left == NULL) {
            // Создаем временный указатель на корень
            TreeNode<T>* temp = root;
            // Обновляем указатель корня, чтобы он указывал на правое поддерево
            root = root->right;
            // Удаляем временный узел
            delete temp;
        }
        // Если у корня нет правого поддерева
        else if (root->right == NULL) {
            // Создаем временный указатель на корень
            TreeNode<T>* temp = root;
            // Обновляем указатель на корень, чтобы он указывал на левое поддерево
            root = root->left;
            // Удаляем временный узел
            delete temp;
        }
        // Если у корня есть как левое и правое поддерево
        else {
            // Создаем временный указатель, который начинается с правого поддерева
            TreeNode<T>* temp = root->right;
            // Находим самый левый узел в правом поддереве
            while (temp->left != NULL) {
                temp = temp->left; // Заменяем значение корня на это значение 
            }
            // Копируем значение найденного узла в текущий узел
            root->data = temp->data;
            // Рекурсивно удаляем узел с скопированным значением из правого поддерева
            removeNode(root->right, temp->data);
        }
    }
    // Если значение val меньше значения корня, рекурсивно ищем в левом поддереве
    else if (val < root->data) {
        removeNode(root->left, val);
    }
    // Если значение val больше значения корня, рекурсивно ищем в правом поддереве
    else {
        removeNode(root->right, val);
    }
}

// Функция для проверки, содержит ли дерево данное значение
template <class T>
bool containsValue(const TreeNode<T>* root, const T& value) {
    // Если дерево пустое или корень содержит значение, возвращаем true
    if (root == nullptr) {
        return false;
    }
    if (root->data == value) {
        return true;
    }

    // Рекурсивно проверяем левое и правое поддерево
    return containsValue(root->left, value) || containsValue(root->right, value);
}
