// @author Kondakov N

#include <iostream>
#include "tree.h"
#include <vector>
#include "BinaryTree_Search.h"


; using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");

    // Функция для создания дерева
    TreeNode<int>* root = CreateTree<int>();

    // Объявление трех векторов для хранения результатов обходов дерева
    vector<int> nlrResult;
    vector<int> lnrResult;
    vector<int> lrnResult;


    // Предварительный обход
    NLRTraversal(root, nlrResult);
    cout << "NLR (Предварительный обход): ";
    for (int value : nlrResult)
        cout << value << " ";
    cout << endl;

    // Симметричный обход
    LNRTraversal(root, lnrResult);
    cout << "LNR (Симметричный обход): ";
    for (int value : lnrResult)
        cout << value << " ";
    cout << endl;

    // Обратный обход
    LRNTraversal(root, lrnResult);
    cout << "LRN (Обратный обход): ";
    for (int value : lrnResult)
        cout << value << " ";
    cout << endl;


    // Вывод содержимого узлов
    cout << "Содержимое дерева: ";
    PrintTree(root);
    cout << endl;


    // Печать дерева
    cout << "Дерево:" << endl;
    PrintAllTree(root);

    // Подсчет узлов
    int nodeCount = CountNodes(root);
    cout << "Количество узлов в дереве: " << nodeCount << endl;

    // Определение глубины дерева
    int depth = GetTreeDepth(root);
    cout << "Глубина дерева: " << depth << endl;

    // Создание копии дерева
    TreeNode<int>* copiedTree = CopyTree(root);
    cout << "Копия Дерева :";
    PrintTree(copiedTree);
    cout << endl;

    // Обход в ширину с очередью
    cout << "Обход в ширину с очередью: ";
    BreadthTraversal(root);
    cout << endl;

    // Поиск следующего наибольшего (successor)
    findSuccessor(root, 1);

    // Поиск по элементу
    searchNode(root, 2);

    // Функция для удаление узла из дерева по значению val и вывод
    cout << "Удаление узла 3 из списка и вывод: ";
    Remove(root, 3 );
    PrintTree(root);
    cout << endl;


    // Удаление дерева
    DeleteTree(root);









    cout << endl;
    cout << "BinaryTreeSearch" << endl;


    // Создаем объект класса BinaryTreeSearch
    BinaryTreeSearch<int> bts;

    // Вставка элементов
    bts.Insert(8);
    bts.Insert(9);
    bts.Insert(5);
    bts.Insert(11);
    bts.Insert(2);
    bts.Insert(7);


    // Поиск элемента в дереве 1 
    int level=bts.Find(2);
    if (level != -1) {
        cout << "Первый узел на уровне: " << level << endl;
    }
    else {
        cout << "Первый узел не найден" << endl;
    }

    // Поиск элемента в дереве 2 
    int level2 = bts.Find(8);
    if (level2 != -1) {
        cout << "Второй узел на уровне: " << level2 << endl;
    }
    else {
        cout << "Второй узел не найден" << endl;
    }
    
    // Вывести размер дерева
    cout << "Размер дерева: " << bts.List_Size() << endl;



























    //// Создаем дерево
//TreeNode<int>* root = new TreeNode<int>(1); //объект типа TreeNode
//root->left = new TreeNode<int>(2);
//root->right = new TreeNode<int>(3);
//root->left->left = new TreeNode<int>(4);
//root->left->right = new TreeNode<int>(5);


    //// удаление узлов
    //delete root->left;
    //delete root->right;
    //delete root->left->left;
    //delete root->left->right;
    //delete root;


    //            5
    //         1     2
    //       3   4    

}
