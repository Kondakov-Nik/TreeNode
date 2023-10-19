// @author Kondakov N

#include "pch.h"
#include "..\tree.h"

                    ////// NLRTraversal

// Тестирование функции NLRTraversal
TEST(NLRTraversal, Test1)
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

// Тестирование функции NLRTraversal2
TEST(NLRTraversal, Test2)
{
    TreeNode<int>* root = CreateTree2<int>();
    vector<int> result;
    NLRTraversal(root, result);

    // Ожидаемый результат предварительного обхода
    vector<int> expected = { 1, 2, 4, 5 };

    // Сравниваем результат с ожидаемым
    EXPECT_EQ(result, expected);

    // Освобождаем память
    DeleteTree(root);

}

// Тестирование функции NLRTraversal3
TEST(NLRTraversal, Test3)
{
    TreeNode<int>* root = CreateTree3<int>();
    vector<int> result;
    NLRTraversal(root, result);

    // Ожидаемый результат предварительного обхода
    vector<int> expected = { 1 };

    // Сравниваем результат с ожидаемым
    EXPECT_EQ(result, expected);

    // Освобождаем память
    DeleteTree(root);

}

// Тестирование функции NLRTraversal4
TEST(NLRTraversal, Test4)
{
    TreeNode<int>* root = CreateTree4<int>();
    vector<int> result;
    NLRTraversal(root, result);

    // Ожидаемый результат предварительного обхода
    vector<int> expected = { NULL };

    // Сравниваем результат с ожидаемым
    EXPECT_EQ(result, expected);

    // Освобождаем память
    DeleteTree(root);

}


                              /////// LNRTraversal

// Тестирование функции LNRTraversal
TEST(LNRTraversal, Test1)
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

// Тестирование функции LNRTraversal2
TEST(LNRTraversal, Test2)
{
    TreeNode<int>* root = CreateTree2<int>();
    vector<int> result;
    LNRTraversal(root, result);

    // Ожидаемый результат симметричного обхода
    vector<int> expected = { 5, 4, 2, 1 };

    // Сравниваем результат с ожидаемым
    EXPECT_EQ(result, expected);

    // Освобождаем память
    DeleteTree(root);

}

// Тестирование функции LNRTraversal3
TEST(LNRTraversal, Test3)
{
    TreeNode<int>* root = CreateTree3<int>();
    vector<int> result;
    LNRTraversal(root, result);

    // Ожидаемый результат симметричного обхода
    vector<int> expected = { 1 };

    // Сравниваем результат с ожидаемым
    EXPECT_EQ(result, expected);

    // Освобождаем память
    DeleteTree(root);

}

// Тестирование функции LNRTraversal4
TEST(LNRTraversal, Test4)
{
    TreeNode<int>* root = CreateTree4<int>();
    vector<int> result;
    LNRTraversal(root, result);

    // Ожидаемый результат симметричного обхода
    vector<int> expected = { NULL };

    // Сравниваем результат с ожидаемым
    EXPECT_EQ(result, expected);

    // Освобождаем память
    DeleteTree(root);

}



                        ///////// LRNTraversal

// Тестирование функции LRNTraversal
TEST(LRNTraversal, Test1)
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

// Тестирование функции LRNTraversal2
TEST(LRNTraversal, Test2)
{
    TreeNode<int>* root = CreateTree2<int>();
    vector<int> result;
    LRNTraversal(root, result);

    // Ожидаемый результат обратного обхода
    vector<int> expected = { 5, 4, 2, 1 };

    // Сравниваем результат с ожидаемым
    EXPECT_EQ(result, expected);

    // Освобождаем память
    DeleteTree(root);
}

// Тестирование функции LRNTraversal3
TEST(LRNTraversal, Test3)
{
    TreeNode<int>* root = CreateTree3<int>();
    vector<int> result;
    LRNTraversal(root, result);

    // Ожидаемый результат обратного обхода
    vector<int> expected = { 1 };

    // Сравниваем результат с ожидаемым
    EXPECT_EQ(result, expected);

    // Освобождаем память
    DeleteTree(root);
}

// Тестирование функции LRNTraversal4
TEST(LRNTraversal, Test4)
{
    TreeNode<int>* root = CreateTree4<int>();
    vector<int> result;
    LRNTraversal(root, result);

    // Ожидаемый результат обратного обхода
    vector<int> expected = { NULL };

    // Сравниваем результат с ожидаемым
    EXPECT_EQ(result, expected);

    // Освобождаем память
    DeleteTree(root);
}


    
                    /////// Тестирование функции CountNodes
TEST(CountNodes, Test1)
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

TEST(CountNodes, Test2)
{
    TreeNode<int>* root = CreateTree2<int>();
    int nodeCount = CountNodes(root);

    // Ожидаемое количество узлов в дереве
    int expectedNodeCount = 4;

    // Сравниваем результат с ожидаемым
    EXPECT_EQ(nodeCount, expectedNodeCount);

    // Освобождаем память
    DeleteTree(root);
}

TEST(CountNodes, Test3)
{
    TreeNode<int>* root = CreateTree3<int>();
    int nodeCount = CountNodes(root);

    // Ожидаемое количество узлов в дереве
    int expectedNodeCount = 1;

    // Сравниваем результат с ожидаемым
    EXPECT_EQ(nodeCount, expectedNodeCount);

    // Освобождаем память
    DeleteTree(root);
}

TEST(CountNodes, Test4)
{
    TreeNode<int>* root = CreateTree4<int>();
    int nodeCount = CountNodes(root);

    // Ожидаемое количество узлов в дереве
    int expectedNodeCount = 1;

    // Сравниваем результат с ожидаемым
    EXPECT_EQ(nodeCount, expectedNodeCount);

    // Освобождаем память
    DeleteTree(root);
}





                        ///// Тестирование функции GetTreeDepth

TEST(GetTreeDepth, Test1)
{
    TreeNode<int>* root = CreateTree<int>();
    int depth = GetTreeDepth(root);

    // Ожидаемая глубина дерева
    int expectedDepth = 2;

    // Сравниваем результат с ожидаемым
    EXPECT_EQ(depth, expectedDepth);

    // Освобождаем память
    DeleteTree(root);
}

TEST(GetTreeDepth, Test2)
{
    TreeNode<int>* root = CreateTree2<int>();
    int depth = GetTreeDepth(root);

    // Ожидаемая глубина дерева
    int expectedDepth = 3;

    // Сравниваем результат с ожидаемым
    EXPECT_EQ(depth, expectedDepth);

    // Освобождаем память
    DeleteTree(root);
}

TEST(GetTreeDepth, Test3)
{
    TreeNode<int>* root = CreateTree3<int>();
    int depth = GetTreeDepth(root);

    // Ожидаемая глубина дерева
    int expectedDepth = 0;

    // Сравниваем результат с ожидаемым
    EXPECT_EQ(depth, expectedDepth);

    // Освобождаем память
    DeleteTree(root);
}

TEST(GetTreeDepth, Test4)
{
    TreeNode<int>* root = CreateTree4<int>();
    int depth = GetTreeDepth(root);

    // Ожидаемая глубина дерева
    int expectedDepth = 0;

    // Сравниваем результат с ожидаемым
    EXPECT_EQ(depth, expectedDepth);

    // Освобождаем память
    DeleteTree(root);
}



                        ///// Тестирование функции AddNode

TEST(AddNode, Test1) {
    TreeNode<int>* root = nullptr;

    // Добавляем узел со значением 4 в пустое дерево
    root = AddNode(root, 4);

    // Проверяем, что узел с значением 4 существует в дереве
    EXPECT_TRUE(containsValue(root, 4)); // Вам нужно реализовать функцию containsValue

    // Освобождаем память
    DeleteTree(root);
}

TEST(AddNode, Test2) {
    // Создаем дерево для тестирования
    TreeNode<int>* root = CreateTree<int>();

    // Добавляем узел со значением 6 в существующее дерево
    root = AddNode(root, 6);

    // Проверяем, что узел с значением 6 существует в дереве
    EXPECT_TRUE(containsValue(root, 6)); 

    // Освобождаем память
    DeleteTree(root);
}



                        ///// Тестирование функции RemoveNode

TEST(RemoveNode, Test1) {
    // Создаем дерево для тестирования
    TreeNode<int>* root = CreateTree<int>();

    // Удаляем узел со значением 3 из дерева
    removeNode(root, 3);

    // Проверяем, что узел с значением3 больше не существует в дереве
    EXPECT_FALSE(containsValue(root, 3)); 

    // Освобождаем память
    DeleteTree(root);
}

TEST(RemoveNode, Test2) {
    // Создаем дерево для тестирования
    TreeNode<int>* root = CreateTree<int>();

    // Удаляем узел со значением 1 из дерева
    removeNode(root, 1);

    // Проверяем, что узел с значением 1 больше не существует в дереве
    EXPECT_FALSE(containsValue(root, 1 ));

    // Освобождаем память
    DeleteTree(root);
}




















































//// Тестирование функции CopyTree // отдельно каждый элемент проверять и сранивать из старого в новый
//TEST(TreeTest, CopyTreeTest)
//{
//    // Создаем исходное дерево
//    TreeNode<int>* root = CreateTree<int>();
//
//    // Копируем исходное дерево
//    TreeNode<int>* newRoot = CopyTree(root);
//
//    // Проверяем, что скопированное дерево существует
//    ASSERT_NE(newRoot, nullptr);
//
//    // Сравниваем результат с ожидаемым
//    EXPECT_EQ(root, newRoot);
//
//    // Освобождаем память
//    DeleteTree(root);
//
//    // Освобождаем память, выделенную для скопированного дерева
//    DeleteTree(newRoot);
//}



//// Тестирование функции DeleteTree // удаляется указатель а память остаетсяс
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
//    // Освобождаем память, на которую указывал root
//    delete root;
//}
