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
    TreeNode<T>* root = nullptr ;
    return root;
}

// Функция для создания дерева С.В.
// Функция возвращает указатель на TreeNode<T> и не принимает аргументов
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
void DeleteTree(TreeNode<T>* root) // передавать указатель по ссылке
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
    return 1 + max(leftDepth, rightDepth); // если один корень -- высота 0
}

// Функция для печати дерева (инфиксный обход) - RNL обход
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
 
// Приминение функции к каждому узлу дерева - NLR 
template <class T> 

// TreeNode<T>* root - указатель на корневой узел дерева
// (*operation) - указатель на нужную функцию 
// (TreeNode<T>*) - указатель на узел нужной функции - параметр принемаймой функции operation

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


// Рекурсия - это процесс, при котором функция вызывает саму себя внутри своего тела с каким-то измененным
// аргументом или состоянием, с целью решения задачи путем разбиения её на более простые подзадачи

// removeNode вызывает саму себя для удаления узла из дерева и продолжает поиск удаляемого значения в поддеревьях

//// Удаление узла из дерева по значению val 
//template <class T>
//void removeNode(TreeNode<T>*& root, const T& val) {
//    // Если корень равен NULL, то дерево пустое
//    if (root == nullptr) return;
//    // Если значение текущего узла равно значению val
//    if (root->data == val) {
//        // Если корня не имеет детей
//        if (root->left == nullptr && root->right == nullptr) {
//            // Удаляем корня и обнуляем указатель на него
//            delete root;
//            root = nullptr;
//        }
//        // Если у корня нет левого поддерева
//        else if (root->left == nullptr) {
//            // Создаем временный указатель на корень
//            TreeNode<T>* temp = root;
//            // Обновляем указатель корня, чтобы он указывал на правое поддерево
//            root = root->right;
//            // Удаляем временный узел
//            delete temp;
//        }
//        // Если у корня нет правого поддерева
//        else if (root->right == nullptr) {
//            // Создаем временный указатель на корень
//            TreeNode<T>* temp = root;
//            // Обновляем указатель на корень, чтобы он указывал на левое поддерево
//            root = root->left;
//            // Удаляем временный узел
//            delete temp;
//        }
//        // Если у корня есть как левое и правое поддерево
//        else {
//            // Создаем временный указатель, который начинается с правого поддерева
//            TreeNode<T>* temp = root->right;
//            // Находим самый левый узел в правом поддереве
//            while (temp->left != nullptr) {
//                temp = temp->left; // Заменяем значение корня на это значение 
//            }
//            // Копируем значение найденного узла в текущий узел
//            root->data = temp->data;
//            // Рекурсивно удаляем узел с скопированным значением из правого поддерева
//            removeNode(root->right, temp->data);
//        }
//    }
//    // Если значение val меньше значения корня, рекурсивно ищем в левом поддереве
//    else if (val < root->data) {
//        removeNode(root->left, val);
//    }
//    // Если значение val больше значения корня, рекурсивно ищем в правом поддереве
//    else {
//        removeNode(root->right, val);
//    }
//}

//удаление узла бинарного дерева
template<class T>
TreeNode<T>* Remove(TreeNode<T>* root, const T& data) {
    //указател, parent, который будет храненить родителя удаляемого узла
    TreeNode<T>* parent;

    if (root == nullptr) {
        // Дерево пустое или достигнут конец ветки (лист без значения)
        return nullptr;
    }

    if (data < root->data) {
        // Рекурсивно удаляем значение из левого поддерева
        root->left = Remove(root->left, data);
    }
    else if (data > root->data) {
        // Рекурсивно удаляем значение из правого поддерева
        root->right = Remove(root->right, data);
    }
    else {
        // Найден узел, который нужно удалить

        if (root->left == nullptr && root->right == nullptr) {
            // Узел является листом (не имеет потомков)
            delete root;
            root = nullptr;
        }
        else if (root->left == nullptr) {
            // Узел имеет только правого потомка

            parent = root;
            root = root->right;
            delete parent;
        }
        else if (root->right == nullptr) {
            // Узел имеет только левого потомка

            parent = root;
            root = root->left;
            delete parent;
        }
        else {
            // Узел имеет оба потомка

            TreeNode<T>* parent = SuccMin(root->right);
            root->data = parent->data;
            root->right = Remove(root->right, parent->data);
        }
    }

    return root;
}

// Поиск следующего наименьшего
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


//поиск узла по значению(вывод его уровня)
template<class T>
int searchNode(TreeNode<T>* node, const T& data, int level = 0) {
    if (node == nullptr) {
        // Дерево пустое или достигнут конец ветки (лист без значения)
        return -1; // Возвращаем -1, чтобы указать, что элемент не найден
    }

    if (data == node->data) {
        // Значение найдено в текущем узле
        return level;
    }
    else if (data < node->data) {
        // Рекурсивно ищем значение в левом поддереве
        return searchNode(node->left, data, level + 1);
    }
    else {
        // Рекурсивно ищем значение в правом поддереве
        return searchNode(node->right, data, level + 1);
    }
}


// Поиск следующего наибольшего (successor)
template <class T>
TreeNode<T>* findSuccessor(TreeNode<T>* root, const T& value)
{
    TreeNode<T>* successor = nullptr;  // указатель для хранения следующего узла в дереве = nullptr (пока не найден)

    while (root != nullptr) 
    {
        if (value < root->data)  // если заданное значение меньше значения текущего узла
        {
            successor = root;  // successor на текущий узел
            root = root->left;  // идем влево
        }
        else if (value > root->data)  // если заданное значение больше значения текущего узла
        {
            root = root->right;  // идем вправо
        }
        else  // если заданное значение равно значению текущего узла (узел найден)
        {
            if (root->right != nullptr)  // если у текущего узла есть правое поддерево
            {
                root = root->right;  // идем вправо
                while (root->left != nullptr)  // идем влево до конца правого поддерева
                {
                    root = root->left;
                }
                successor = root;  //  successor = найденному узлу
            }
            break;
        }
    }

    if (successor != nullptr)
    {
        cout << "Successor для " << value << " равен " << successor->data << endl;
    }
    else
    {
        cout << "Successor для " << value << " не найден" << endl;
    }
    return successor; 
}
