#include "pch.h"
#include "..\tree.h"



// Тестирование функции NLRTraversal
TEST(TraversalTest, NLRTraversalTest)
{
    TreeNode<int>* root = CreateTree<int>();
    vector<int> result;
    NLRTraversal(root, result);

    // Ожидаемый результат предварительного обхода
    vector<int> expected = { 1, 2, 4, 5, 3 };

    // Сравниваем результат с ожидаемым
    EXPECT_EQ(result, expected);

    // Освобождаем память
    DeleteTree(root);
}

// Тестирование функции LNRTraversal
TEST(TraversalTest, LNRTraversalTest)
{
    TreeNode<int>* root = CreateTree<int>();
    vector<int> result;
    LNRTraversal(root, result);

    // Ожидаемый результат симметричного обхода
    vector<int> expected = { 4, 2, 5, 1, 3 };

    // Сравниваем результат с ожидаемым
    EXPECT_EQ(result, expected);

    // Освобождаем память
    DeleteTree(root);
}

// Тестирование функции LRNTraversal
TEST(TraversalTest, LRNTraversalTest)
{
    TreeNode<int>* root = CreateTree<int>();
    vector<int> result;
    LRNTraversal(root, result);

    // Ожидаемый результат обратного обхода
    vector<int> expected = { 4, 5, 2, 3, 1 };

    // Сравниваем результат с ожидаемым
    EXPECT_EQ(result, expected);

    // Освобождаем память
    DeleteTree(root);
}



// Тестирование функции CountNodes
TEST(TreeTest, CountNodesTest)
{
    TreeNode<int>* root = CreateTree<int>();
    int nodeCount = CountNodes(root);

    // Ожидаемое количество узлов в дереве
    int expectedNodeCount = 5;

    // Сравниваем результат с ожидаемым
    EXPECT_EQ(nodeCount, expectedNodeCount);

    // Освобождаем память
    DeleteTree(root);
}

// Тестирование функции GetTreeDepth
TEST(TreeTest, GetTreeDepthTest)
{
    TreeNode<int>* root = CreateTree<int>();
    int depth = GetTreeDepth(root);

    // Ожидаемая глубина дерева
    int expectedDepth = 3;

    // Сравниваем результат с ожидаемым
    EXPECT_EQ(depth, expectedDepth);

    // Освобождаем память
    DeleteTree(root);
}

//// Тестирование функции DeleteTree
//TEST(TreeTest, DeleteTreeTest)
//{
//    // Создаем дерево
//    TreeNode<int>* root = CreateTree<int>();
//
//    // Удаляем дерево
//    DeleteTree(root);
//
//    // После удаления, корневой указатель должен быть равен nullptr
//    EXPECT_EQ(root, nullptr);

//}