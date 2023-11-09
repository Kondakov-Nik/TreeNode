// @author Kondakov N

#include "pch.h"
#include "..\tree.h"
#include "..\BinaryTree_Search.h"

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
    vector<int> expected = { };

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
    vector<int> expected = { };

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
    vector<int> expected = {  };

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
    int expectedNodeCount = 0;

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
    int expectedDepth = -1;

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
    EXPECT_TRUE(containsValue(root, 4));

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
    Remove(root, 3);

    // Проверяем, что узел с значением 3 больше не существует в дереве
    EXPECT_FALSE(containsValue(root, 3)); 

    // Освобождаем память
    DeleteTree(root);
}

TEST(RemoveNode, Test2) {
    // Создаем дерево для тестирования
    TreeNode<int>* root = CreateTree<int>();

    // Удаляем узел со значением 1 из дерева
    Remove(root, 1);

    // Проверяем, что узел с значением 1 больше не существует в дереве
    EXPECT_FALSE(containsValue(root, 1 ));

    // Освобождаем память
    DeleteTree(root);
}

TEST(RemoveNode, Test3) {
    // Создаем дерево для тестирования
    TreeNode<int>* root = CreateTreeSV<int>();

    // Удаляем узел со значением 1 из дерева
    Remove(root, 1);
    // Удаляем узел со значением 1 из дерева
    Remove(root, 3);
    // Удаляем узел со значением 1 из дерева
    Remove(root, 7);

    // Проверяем, что узел с значением 7 больше не существует в дереве
    EXPECT_FALSE(containsValue(root, 7));
    // Проверяем, что узел с значением 1 больше не существует в дереве
    EXPECT_FALSE(containsValue(root, 1));
    // Проверяем, что узел с значением 3 больше не существует в дереве
    EXPECT_FALSE(containsValue(root, 3));

    // Освобождаем память
    DeleteTree(root);
}


                            //// Тестирование функции searchNode

//TEST(searchNode, Test1) {
//    // Создаем дерево для тестирования
//    TreeNode<int>* root = CreateTree<int>();
//
//    int searchNum = 3;
//
//    // Ищем узел со значением 3 из дерева
//    TreeNode<int>* FoundNode = searchNode(root, searchNum);
//
//    // Сравниваем результат с ожидаемым
//    EXPECT_EQ(FoundNode -> data, searchNum);
//
//    // Освобождаем память
//    DeleteTree(root);
//}

//TEST(searchNode, Test2) {
//    // Создаем дерево для тестирования
//    TreeNode<int>* root = CreateTree<int>();
//
//    int searchNum = 1;
//
//    // Ищем узел со значением 1 из дерева
//    TreeNode<int>* FoundNode = searchNode(root, searchNum);
//
//    // Сравниваем результат с ожидаемым
//    EXPECT_EQ(FoundNode->data, searchNum);
//
//    // Освобождаем память
//    DeleteTree(root);
//}



                                //// Тестирование функции findSuccessor

TEST(FindSuccessor, Test1) {
    // Создаем дерево
    TreeNode<int>* root = CreateTree<int>();

    // Находим successor для значения 1
    TreeNode<int>* successor = findSuccessor(root, 1);

    // Проверяем, что successor существует и его значение равно 3
    ASSERT_NE(successor, nullptr);
    EXPECT_EQ(successor->data, 3);

    // Освобождаем память
    DeleteTree(root);
}

TEST(FindSuccessor, Test2) {
    // Создаем дерево
    TreeNode<int>* root = CreateTreeSV<int>();

    // Находим successor для значения 4
    TreeNode<int>* successor = findSuccessor(root, 4);

    // Проверяем, что successor существует и его значение равно 6
    ASSERT_NE(successor, nullptr);
    EXPECT_EQ(successor->data, 6);

    // Освобождаем память
    DeleteTree(root);
}

TEST(FindSuccessor, Test3) {
    // Создаем дерево
    TreeNode<int>* root = CreateTreeSV<int>();

    // Находим successor для значения 10
    TreeNode<int>* successor = findSuccessor(root, 10);

    // Проверяем, что successor существует и его значение равно 13
    ASSERT_NE(successor, nullptr);
    EXPECT_EQ(successor->data, 13);

    // Освобождаем память
    DeleteTree(root);
}



                                            ////// Тестирование функции CopyTree 


TEST(CopyTreeTest, Test1)
{
    vector<int> result, result2;

    // Создаем исходное дерево
    TreeNode<int>* root = CreateTree<int>();

    // Копируем исходное дерево
    TreeNode<int>* newRoot = CopyTree(root);

    NLRTraversal(root, result);
    NLRTraversal(newRoot, result2);

    // Освобождаем память
    DeleteTree(root);

    // Сравниваем результат с ожидаемым
    EXPECT_EQ(result, result2);

    // Освобождаем память, выделенную для скопированного дерева
    DeleteTree(newRoot);
}

TEST(CopyTreeTest, Test2)
{
    vector<int> result, result2;

    // Создаем исходное дерево
    TreeNode<int>* root = CreateTree2<int>();

    // Копируем исходное дерево
    TreeNode<int>* newRoot2 = CopyTree(root);

    NLRTraversal(root, result);
    NLRTraversal(newRoot2, result2);

    // Сравниваем результат с ожидаемым
    EXPECT_EQ(result, result2);

    // Освобождаем память
    DeleteTree(root);

    // Освобождаем память, выделенную для скопированного дерева
    DeleteTree(newRoot2);
}

TEST(CopyTreeTest, Test3)
{
    vector<int> result, result2;

    // Создаем исходное дерево
    TreeNode<int>* root = CreateTreeSV<int>();

    // Копируем исходное дерево
    TreeNode<int>* newRoot3 = CopyTree(root);

    NLRTraversal(root, result);
    NLRTraversal(newRoot3, result2);

    // Сравниваем результат с ожидаемым
    EXPECT_EQ(result, result2);

    // Освобождаем память
    DeleteTree(root);

    // Освобождаем память, выделенную для скопированного дерева
    DeleteTree(newRoot3);
}

















































                                           ////// Тестирование функции TestFind_BinSTree 


TEST(TestFind_BinSTree, Test1) {

    // Создаем объект класса BinaryTreeSearch
    BinaryTreeSearch<int> bts;

    // Вставка элементов
    bts.Insert(8);
    bts.Insert(9);
    bts.Insert(5);

    EXPECT_EQ(bts.Find(8), 0);
    EXPECT_EQ(bts.Find(5), 1);
    EXPECT_EQ(bts.Find(10), -1);
}

TEST(TestFind_BinSTree, Test2) {

    // Создаем объект класса BinaryTreeSearch
    BinaryTreeSearch<int> bts;

    // Вставка элементов
    bts.Insert(8);
    bts.Insert(9);
    bts.Insert(5);
    bts.Insert(11);
    bts.Insert(3);
    bts.Insert(2);

    EXPECT_EQ(bts.Find(2), 3);
    EXPECT_EQ(bts.Find(15), -1);
    EXPECT_EQ(bts.Find(3), 2);
}







                                                    ////// Тестирование функции TestInsert_BinSTree 


TEST(TestInsert_BinSTree, Test1) {

    // Создаем объект класса BinaryTreeSearch
    BinaryTreeSearch<int> bts;

    // Вставка элементов
    bts.Insert(8);
    bts.Insert(9);
    bts.Insert(5);

    EXPECT_EQ(bts.List_Size(), 3);

    bts.Insert(15);
    EXPECT_EQ(bts.List_Size(), 4);

    bts.Insert(11);
    bts.Insert(25);
    EXPECT_EQ(bts.List_Size(), 6);
}

TEST(TestInsert_BinSTree, Test2) { // Пустое

    // Создаем объект класса BinaryTreeSearch
    BinaryTreeSearch<int> bts;

    EXPECT_EQ(bts.List_Size(), 0);
}

TEST(TestInsert_BinSTree, Test3) { 

    // Создаем объект класса BinaryTreeSearch
    BinaryTreeSearch<int> bts;

    // Вставка элементов
    bts.Insert(1);

    EXPECT_EQ(bts.List_Size(), 1);
}








                                          ////// Тестирование функции TestRemove_BinSTree 


TEST(TestRemove_BinSTree, Test1) {

    // Создаем объект класса BinaryTreeSearch
    BinaryTreeSearch<int> bts;

    // Вставка элементов
    bts.Insert(8);
    bts.Insert(9);
    bts.Insert(5);

    // Удаляем элементы из дерева
    bts.Delete(5);


    EXPECT_EQ(bts.List_Size(), 2);
}

TEST(TestRemove_BinSTree, Test2) {

    // Создаем объект класса BinaryTreeSearch
    BinaryTreeSearch<int> bts;

    // Вставка элементов
    bts.Insert(8);
    bts.Insert(9);
    bts.Insert(5);

    // Удаляем элементы из дерева
    bts.Delete(5);
    bts.Delete(8);
    bts.Delete(9);


    EXPECT_EQ(bts.List_Size(), 0);
}

TEST(TestRemove_BinSTree, Test3) {

    // Создаем объект класса BinaryTreeSearch
    BinaryTreeSearch<int> bts;

    // Вставка элементов
    bts.Insert(8);
    bts.Insert(9);

    // Удаляем элементы из дерева
    bts.Delete(8);


    EXPECT_EQ(bts.List_Size(), 1);
}




                                            ////// Тестирование конструктора копирования


TEST(TestCopyConstruct_BinSTree, Test1)
{  
    // Создаем объект класса BinaryTreeSearch
    BinaryTreeSearch<int> bst;
    bst.Insert(5);
    bst.Insert(3);
    bst.Insert(8);

    // Создаем второе дерево и инициализируем его копией первого дерева
    BinaryTreeSearch<int> bst2(bst);

    // Записываем размер первого дерева и второго
    int size1 = bst.List_Size();
    int size2 = bst2.List_Size();

    // Сравниваем их размеры
    EXPECT_EQ(size1, size2);
}

TEST(TestCopyConstruct_BinSTree, Test2)
{
    // Создаем объект класса BinaryTreeSearch
    BinaryTreeSearch<int> bst;
    bst.Insert(2);
    bst.Insert(1);
    bst.Insert(9);
    bst.Insert(3);

    // Создаем второе дерево и инициализируем его копией первого дерева
    BinaryTreeSearch<int> bst2(bst);

    // Записываем размер первого дерева и второго
    int size1 = bst.List_Size();
    int size2 = bst2.List_Size();

    // Сравниваем их размеры
    EXPECT_EQ(size1, size2);

}

TEST(TestCopyConstruct_BinSTree, Test3)
{
    // Создаем объект класса BinaryTreeSearch
    BinaryTreeSearch<int> bst;

    // Создаем второе дерево и инициализируем его копией первого дерева
    BinaryTreeSearch<int> bst2(bst);

    // Записываем размер первого дерева и второго
    int size1 = bst.List_Size();
    int size2 = bst2.List_Size();

    // Сравниваем их размеры
    EXPECT_EQ(size1, size2);

}

























































                                    ////// Тестирование конструктора копирования


//TEST(CopyConstructTest, Test1)
//{  
//    BinaryTreeSearch<int> tree;
//    tree.Insert(5);
//    tree.Insert(3);
//    tree.Insert(8);
//
//    // Создаем второе дерево и инициализируем его копией первого дерева
//    BinaryTreeSearch<int> tree2(tree);
//
//
//    /*int size1 = tree.CountNodes;
//    int size2 = tree2.CountNodes;*/
//
//    // Проверяем размеры деревьев
//    assert(tree.CountNodes == 3);
//    assert(tree2.CountNodes == 3);
//
//    // Изменяем первое дерево
//    tree1.Insert(10);
//
//    // Проверяем, что изменение первого дерева не влияет на второе дерево
//    assert(tree.CountNodes == 4);
//    assert(tree2.CountNodes == 3);
//
//}

