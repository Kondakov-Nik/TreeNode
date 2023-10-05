// @author Kondakov N

#include <iostream>
#include "tree.h"
#include <vector>
#include "BinaryTree_Search.h"


; using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");

    //// Создаем дерево
    //TreeNode<int>* root = new TreeNode<int>(1); //объект типа TreeNode
    //root->left = new TreeNode<int>(2);
    //root->right = new TreeNode<int>(3);
    //root->left->left = new TreeNode<int>(4);
    //root->left->right = new TreeNode<int>(5);

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
    BreadthFirstTraversal(root);
    cout << endl;



    // Удаление дерева
    DeleteTree(root);







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
