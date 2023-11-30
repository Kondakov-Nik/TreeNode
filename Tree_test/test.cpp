// @author Kondakov N

#include "pch.h"
#include "..\tree.h"
#include "..\BinaryTree_Search.h"

                    ////// NLRTraversal

// ������������ ������� NLRTraversal
TEST(NLRTraversal, Test1)
{
    TreeNode<int>* root = CreateTree<int>();
    vector<int> result;
    NLRTraversal(root, result);

    // ��������� ��������� ���������������� ������
    vector<int> expected = { 1, 2, 4, 5, 3 };

    // ���������� ��������� � ���������
    EXPECT_EQ(result, expected);

    // ����������� ������
    DeleteTree(root);

}

// ������������ ������� NLRTraversal2
TEST(NLRTraversal, Test2)
{
    TreeNode<int>* root = CreateTree2<int>();
    vector<int> result;
    NLRTraversal(root, result);

    // ��������� ��������� ���������������� ������
    vector<int> expected = { 1, 2, 4, 5 };

    // ���������� ��������� � ���������
    EXPECT_EQ(result, expected);

    // ����������� ������
    DeleteTree(root);

}

// ������������ ������� NLRTraversal3
TEST(NLRTraversal, Test3)
{
    TreeNode<int>* root = CreateTree3<int>();
    vector<int> result;
    NLRTraversal(root, result);

    // ��������� ��������� ���������������� ������
    vector<int> expected = { 1 };

    // ���������� ��������� � ���������
    EXPECT_EQ(result, expected);

    // ����������� ������
    DeleteTree(root);

}

// ������������ ������� NLRTraversal4
TEST(NLRTraversal, Test4)
{
    TreeNode<int>* root = CreateTree4<int>();
    vector<int> result;
    NLRTraversal(root, result);

    // ��������� ��������� ���������������� ������
    vector<int> expected = { };

    // ���������� ��������� � ���������
    EXPECT_EQ(result, expected);

    // ����������� ������
    DeleteTree(root);

}


                              /////// LNRTraversal

// ������������ ������� LNRTraversal
TEST(LNRTraversal, Test1)
{
    TreeNode<int>* root = CreateTree<int>();
    vector<int> result;
    LNRTraversal(root, result);

    // ��������� ��������� ������������� ������
    vector<int> expected = { 4, 2, 5, 1, 3 };

    // ���������� ��������� � ���������
    EXPECT_EQ(result, expected);

    // ����������� ������
    DeleteTree(root);

}

// ������������ ������� LNRTraversal2
TEST(LNRTraversal, Test2)
{
    TreeNode<int>* root = CreateTree2<int>();
    vector<int> result;
    LNRTraversal(root, result);

    // ��������� ��������� ������������� ������
    vector<int> expected = { 5, 4, 2, 1 };

    // ���������� ��������� � ���������
    EXPECT_EQ(result, expected);

    // ����������� ������
    DeleteTree(root);

}

// ������������ ������� LNRTraversal3
TEST(LNRTraversal, Test3)
{
    TreeNode<int>* root = CreateTree3<int>();
    vector<int> result;
    LNRTraversal(root, result);

    // ��������� ��������� ������������� ������
    vector<int> expected = { 1 };

    // ���������� ��������� � ���������
    EXPECT_EQ(result, expected);

    // ����������� ������
    DeleteTree(root);

}

// ������������ ������� LNRTraversal4
TEST(LNRTraversal, Test4)
{
    TreeNode<int>* root = CreateTree4<int>();
    vector<int> result;
    LNRTraversal(root, result);

    // ��������� ��������� ������������� ������
    vector<int> expected = { };

    // ���������� ��������� � ���������
    EXPECT_EQ(result, expected);

    // ����������� ������
    DeleteTree(root);

}



                        ///////// LRNTraversal

// ������������ ������� LRNTraversal
TEST(LRNTraversal, Test1)
{
    TreeNode<int>* root = CreateTree<int>();
    vector<int> result;
    LRNTraversal(root, result);

    // ��������� ��������� ��������� ������
    vector<int> expected = { 4, 5, 2, 3, 1 };

    // ���������� ��������� � ���������
    EXPECT_EQ(result, expected);

    // ����������� ������
    DeleteTree(root);
}

// ������������ ������� LRNTraversal2
TEST(LRNTraversal, Test2)
{
    TreeNode<int>* root = CreateTree2<int>();
    vector<int> result;
    LRNTraversal(root, result);

    // ��������� ��������� ��������� ������
    vector<int> expected = { 5, 4, 2, 1 };

    // ���������� ��������� � ���������
    EXPECT_EQ(result, expected);

    // ����������� ������
    DeleteTree(root);
}

// ������������ ������� LRNTraversal3
TEST(LRNTraversal, Test3)
{
    TreeNode<int>* root = CreateTree3<int>();
    vector<int> result;
    LRNTraversal(root, result);

    // ��������� ��������� ��������� ������
    vector<int> expected = { 1 };

    // ���������� ��������� � ���������
    EXPECT_EQ(result, expected);

    // ����������� ������
    DeleteTree(root);
}

// ������������ ������� LRNTraversal4
TEST(LRNTraversal, Test4)
{
    TreeNode<int>* root = CreateTree4<int>();
    vector<int> result;
    LRNTraversal(root, result);

    // ��������� ��������� ��������� ������
    vector<int> expected = {  };

    // ���������� ��������� � ���������
    EXPECT_EQ(result, expected);

    // ����������� ������
    DeleteTree(root);
}


    
                    /////// ������������ ������� CountNodes
TEST(CountNodes, Test1)
{
    TreeNode<int>* root = CreateTree<int>();
    int nodeCount = CountNodes(root);

    // ��������� ���������� ����� � ������
    int expectedNodeCount = 5;

    // ���������� ��������� � ���������
    EXPECT_EQ(nodeCount, expectedNodeCount);

    // ����������� ������
    DeleteTree(root);
}

TEST(CountNodes, Test2)
{
    TreeNode<int>* root = CreateTree2<int>();
    int nodeCount = CountNodes(root);

    // ��������� ���������� ����� � ������
    int expectedNodeCount = 4;

    // ���������� ��������� � ���������
    EXPECT_EQ(nodeCount, expectedNodeCount);

    // ����������� ������
    DeleteTree(root);
}

TEST(CountNodes, Test3)
{
    TreeNode<int>* root = CreateTree3<int>();
    int nodeCount = CountNodes(root);

    // ��������� ���������� ����� � ������
    int expectedNodeCount = 1;

    // ���������� ��������� � ���������
    EXPECT_EQ(nodeCount, expectedNodeCount);

    // ����������� ������
    DeleteTree(root);
}

TEST(CountNodes, Test4)
{
    TreeNode<int>* root = CreateTree4<int>();
    int nodeCount = CountNodes(root);

    // ��������� ���������� ����� � ������
    int expectedNodeCount = 0;

    // ���������� ��������� � ���������
    EXPECT_EQ(nodeCount, expectedNodeCount);

    // ����������� ������
    DeleteTree(root);
}





                        ///// ������������ ������� GetTreeDepth

TEST(GetTreeDepth, Test1)
{
    TreeNode<int>* root = CreateTree<int>();
    int depth = GetTreeDepth(root);

    // ��������� ������� ������
    int expectedDepth = 2;

    // ���������� ��������� � ���������
    EXPECT_EQ(depth, expectedDepth);

    // ����������� ������
    DeleteTree(root);
}

TEST(GetTreeDepth, Test2)
{
    TreeNode<int>* root = CreateTree2<int>();
    int depth = GetTreeDepth(root);

    // ��������� ������� ������
    int expectedDepth = 3;

    // ���������� ��������� � ���������
    EXPECT_EQ(depth, expectedDepth);

    // ����������� ������
    DeleteTree(root);
}

TEST(GetTreeDepth, Test3)
{
    TreeNode<int>* root = CreateTree3<int>();
    int depth = GetTreeDepth(root);

    // ��������� ������� ������
    int expectedDepth = 0;

    // ���������� ��������� � ���������
    EXPECT_EQ(depth, expectedDepth);

    // ����������� ������
    DeleteTree(root);
}

TEST(GetTreeDepth, Test4)
{
    TreeNode<int>* root = CreateTree4<int>();
    int depth = GetTreeDepth(root);

    // ��������� ������� ������
    int expectedDepth = -1;

    // ���������� ��������� � ���������
    EXPECT_EQ(depth, expectedDepth);

    // ����������� ������
    DeleteTree(root);
}



                        ///// ������������ ������� AddNode

TEST(AddNode, Test1) {
    TreeNode<int>* root = nullptr;

    // ��������� ���� �� ��������� 4 � ������ ������
    root = AddNode(root, 4);

    // ���������, ��� ���� � ��������� 4 ���������� � ������
    EXPECT_TRUE(containsValue(root, 4));

    // ����������� ������
    DeleteTree(root);
}

TEST(AddNode, Test2) {
    // ������� ������ ��� ������������
    TreeNode<int>* root = CreateTree<int>();

    // ��������� ���� �� ��������� 6 � ������������ ������
    root = AddNode(root, 6);

    // ���������, ��� ���� � ��������� 6 ���������� � ������
    EXPECT_TRUE(containsValue(root, 6)); 

    // ����������� ������
    DeleteTree(root);
}


                        ///// ������������ ������� RemoveNode

TEST(RemoveNode, Test1) {
    // ������� ������ ��� ������������
    TreeNode<int>* root = CreateTree<int>();

    // ������� ���� �� ��������� 3 �� ������
    Remove(root, 3);

    // ���������, ��� ���� � ��������� 3 ������ �� ���������� � ������
    EXPECT_FALSE(containsValue(root, 3)); 

    // ����������� ������
    DeleteTree(root);
}

TEST(RemoveNode, Test2) {
    // ������� ������ ��� ������������
    TreeNode<int>* root = CreateTree<int>();

    // ������� ���� �� ��������� 1 �� ������
    Remove(root, 1);

    // ���������, ��� ���� � ��������� 1 ������ �� ���������� � ������
    EXPECT_FALSE(containsValue(root, 1 ));

    // ����������� ������
    DeleteTree(root);
}

TEST(RemoveNode, Test3) {
    // ������� ������ ��� ������������
    TreeNode<int>* root = CreateTreeSV<int>();

    // ������� ���� �� ��������� 1 �� ������
    Remove(root, 1);
    // ������� ���� �� ��������� 1 �� ������
    Remove(root, 3);
    // ������� ���� �� ��������� 1 �� ������
    Remove(root, 7);

    // ���������, ��� ���� � ��������� 7 ������ �� ���������� � ������
    EXPECT_FALSE(containsValue(root, 7));
    // ���������, ��� ���� � ��������� 1 ������ �� ���������� � ������
    EXPECT_FALSE(containsValue(root, 1));
    // ���������, ��� ���� � ��������� 3 ������ �� ���������� � ������
    EXPECT_FALSE(containsValue(root, 3));

    // ����������� ������
    DeleteTree(root);
}


                            //// ������������ ������� searchNode

//TEST(searchNode, Test1) {
//    // ������� ������ ��� ������������
//    TreeNode<int>* root = CreateTree<int>();
//
//    int searchNum = 3;
//
//    // ���� ���� �� ��������� 3 �� ������
//    TreeNode<int>* FoundNode = searchNode(root, searchNum);
//
//    // ���������� ��������� � ���������
//    EXPECT_EQ(FoundNode -> data, searchNum);
//
//    // ����������� ������
//    DeleteTree(root);
//}

//TEST(searchNode, Test2) {
//    // ������� ������ ��� ������������
//    TreeNode<int>* root = CreateTree<int>();
//
//    int searchNum = 1;
//
//    // ���� ���� �� ��������� 1 �� ������
//    TreeNode<int>* FoundNode = searchNode(root, searchNum);
//
//    // ���������� ��������� � ���������
//    EXPECT_EQ(FoundNode->data, searchNum);
//
//    // ����������� ������
//    DeleteTree(root);
//}



                                //// ������������ ������� findSuccessor

TEST(FindSuccessor, Test1) {
    // ������� ������
    TreeNode<int>* root = CreateTree<int>();

    // ������� successor ��� �������� 1
    TreeNode<int>* successor = findSuccessor(root, 1);

    // ���������, ��� successor ���������� � ��� �������� ����� 3
    ASSERT_NE(successor, nullptr);
    EXPECT_EQ(successor->data, 3);

    // ����������� ������
    DeleteTree(root);
}

TEST(FindSuccessor, Test2) {
    // ������� ������
    TreeNode<int>* root = CreateTreeSV<int>();

    // ������� successor ��� �������� 4
    TreeNode<int>* successor = findSuccessor(root, 4);

    // ���������, ��� successor ���������� � ��� �������� ����� 6
    ASSERT_NE(successor, nullptr);
    EXPECT_EQ(successor->data, 6);

    // ����������� ������
    DeleteTree(root);
}

TEST(FindSuccessor, Test3) {
    // ������� ������
    TreeNode<int>* root = CreateTreeSV<int>();

    // ������� successor ��� �������� 10
    TreeNode<int>* successor = findSuccessor(root, 10);

    // ���������, ��� successor ���������� � ��� �������� ����� 13
    ASSERT_NE(successor, nullptr);
    EXPECT_EQ(successor->data, 13);

    // ����������� ������
    DeleteTree(root);
}



                                            ////// ������������ ������� CopyTree 


TEST(CopyTreeTest, Test1)
{
    vector<int> result, result2;

    // ������� �������� ������
    TreeNode<int>* root = CreateTree<int>();

    // �������� �������� ������
    TreeNode<int>* newRoot = CopyTree(root);

    NLRTraversal(root, result);
    NLRTraversal(newRoot, result2);

    // ����������� ������
    DeleteTree(root);

    // ���������� ��������� � ���������
    EXPECT_EQ(result, result2);

    // ����������� ������, ���������� ��� �������������� ������
    DeleteTree(newRoot);
}

TEST(CopyTreeTest, Test2)
{
    vector<int> result, result2;

    // ������� �������� ������
    TreeNode<int>* root = CreateTree2<int>();

    // �������� �������� ������
    TreeNode<int>* newRoot2 = CopyTree(root);

    NLRTraversal(root, result);
    NLRTraversal(newRoot2, result2);

    // ���������� ��������� � ���������
    EXPECT_EQ(result, result2);

    // ����������� ������
    DeleteTree(root);

    // ����������� ������, ���������� ��� �������������� ������
    DeleteTree(newRoot2);
}

TEST(CopyTreeTest, Test3)
{
    vector<int> result, result2;

    // ������� �������� ������
    TreeNode<int>* root = CreateTreeSV<int>();

    // �������� �������� ������
    TreeNode<int>* newRoot3 = CopyTree(root);

    NLRTraversal(root, result);
    NLRTraversal(newRoot3, result2);

    // ���������� ��������� � ���������
    EXPECT_EQ(result, result2);

    // ����������� ������
    DeleteTree(root);

    // ����������� ������, ���������� ��� �������������� ������
    DeleteTree(newRoot3);
}







































                                           ////// ������������ ������� TestFind_BinSTree 


TEST(TestFind_BinSTree, Test1) { // ++++

    // ������� ������ ������ BinaryTreeSearch
    BinaryTreeSearch<int> bts;

    // ������� ���������
    bts.Insert(8);
    bts.Insert(9);
    bts.Insert(5);


    //
    EXPECT_EQ(bts.Find(8), 0);
    EXPECT_EQ(bts.Find(5), 1);
    EXPECT_EQ(bts.Find(10), -1);
}

TEST(TestFind_BinSTree, Test2) {

    // ������� ������ ������ BinaryTreeSearch
    BinaryTreeSearch<int> bts;

    // ������� ���������
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







                                                    ////// ������������ ������� TestInsert_BinSTree 



TEST(TestInsert_BinSTree, Test1) {

    // ������� ������ ������ BinaryTreeSearch
    BinaryTreeSearch<int> bts;

    // ������� ���������
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

TEST(TestInsert_BinSTree, Test2) { // ������

    // ������� ������ ������ BinaryTreeSearch
    BinaryTreeSearch<int> bts;

    EXPECT_EQ(bts.List_Size(), 0);

}

TEST(TestInsert_BinSTree, Test3) { 

    // ������� ������ ������ BinaryTreeSearch
    BinaryTreeSearch<int> bts;

    // ������� ���������
    bts.Insert(1);

    EXPECT_EQ(bts.List_Size(), 1);
}

// ����������� ++






                                          ////// ������������ ������� TestRemove_BinSTree 


TEST(TestRemove_BinSTree, Test1) {

    // ������� ������ ������ BinaryTreeSearch
    BinaryTreeSearch<int> bts;

    // ������� ���������
    bts.Insert(8);
    bts.Insert(9);
    bts.Insert(5);

    // ������� ������� �� ������
    bts.Delete(5);


    EXPECT_EQ(bts.List_Size(), 2);
}

TEST(TestRemove_BinSTree, Test2) {

    // ������� ������ ������ BinaryTreeSearch
    BinaryTreeSearch<int> bts;

    // ������� ���������
    bts.Insert(8);
    bts.Insert(9);
    bts.Insert(5);

    // ������� �������� �� ������
    bts.Delete(5);
    bts.Delete(8);
    bts.Delete(9);


    EXPECT_EQ(bts.List_Size(), 0);
}

TEST(TestRemove_BinSTree, Test3) {

    // ������� ������ ������ BinaryTreeSearch
    BinaryTreeSearch<int> bts;

    // ������� ���������
    bts.Insert(8);
    bts.Insert(9);

    // ������� ������� �� ������
    bts.Delete(8);


    EXPECT_EQ(bts.List_Size(), 1);
}



TEST(TestRemove_BinSTree, Test4) {

    // ������� ������ ������ BinaryTreeSearch
    BinaryTreeSearch<int> bts;

    // ������� ���������
    bts.Insert(8);

    // ������� ������� �� ������
    bts.Delete(8);


    EXPECT_EQ(bts.List_Size(), 0);
}




                                            ////// ������������ ������������ �����������


TEST(TestCopyConstruct_BinSTree, Test1)
{  
    // ������� ������ ������ BinaryTreeSearch
    BinaryTreeSearch<int> bst;
    bst.Insert(5);
    bst.Insert(3);
    bst.Insert(8);

    // ������� ������ ������ � �������������� ��� ������ ������� ������
    BinaryTreeSearch<int> bst2(bst);

    // ���������� ������ ������� ������ � �������
    int size1 = bst.List_Size();
    int size2 = bst2.List_Size();

    // ���������� �� �������
    EXPECT_EQ(size1, size2);
}

TEST(TestCopyConstruct_BinSTree, Test2)
{
    // ������� ������ ������ BinaryTreeSearch
    BinaryTreeSearch<int> bst;
    bst.Insert(2);
    bst.Insert(1);
    bst.Insert(9);
    bst.Insert(3);

    // ������� ������ ������ � �������������� ��� ������ ������� ������
    BinaryTreeSearch<int> bst2(bst);

    // ���������� ������ ������� ������ � �������
    int size1 = bst.List_Size();
    int size2 = bst2.List_Size();

    // ���������� �� �������
    EXPECT_EQ(size1, size2);

}

TEST(TestCopyConstruct_BinSTree, Test3)
{
    // ������� ������ ������ BinaryTreeSearch
    BinaryTreeSearch<int> bst;

    // ������� ������ ������ � �������������� ��� ������ ������� ������
    BinaryTreeSearch<int> bst2(bst);

    // ���������� ������ ������� ������ � �������
    int size1 = bst.List_Size();
    int size2 = bst2.List_Size();

    // ���������� �� �������
    EXPECT_EQ(size1, size2);

}


























                                    ///////////// TEST BST ITER

// ���� ��� ��������� begin
TEST(BSTIteratorTest, BeginTest) {
    // ������� �������� ������ ��� ������������
    BinaryTreeSearch<int> tree;
    tree.Insert(5);
    tree.Insert(3);
    tree.Insert(7);

    // ������� ��������, ����������� �� ������ ������
    auto it = tree.begin();

    EXPECT_EQ(*it, 3);
}


// ���� ��� ��������� ==
TEST(BSTIteratorTest, EqualTest) {

    // ������� �������� ������ ��� ������������
    BinaryTreeSearch<int> tree;
    tree.Insert(5);
    tree.Insert(3);
    tree.Insert(7);

    // ������� ��� ���������, ����������� �� ���������� ����� � ������
    auto it1 = tree.begin();
    auto it2 = tree.begin();


    EXPECT_TRUE(it1 == it2);
}

// ���� ��� ��������� ����������
TEST(BSTIteratorTest, IncrementTest) {

    // ������� �������� ������ ��� ������������
    BinaryTreeSearch<int> tree;
    tree.Insert(5);
    tree.Insert(3);
    tree.Insert(7);

    // ������� ��������, ����������� �� ������ ������
    auto it = tree.begin();

    ++it;
    EXPECT_EQ(*it, 5);

    ++it;
    EXPECT_EQ(*it, 7);
}

// ���� ��� ��������� !=
TEST(BSTIteratorTest, NotEqualTest) {

    // ������� �������� ������ ��� ������������
    BinaryTreeSearch<int> tree;
    tree.Insert(5);
    tree.Insert(3);
    tree.Insert(7);

    // ������� ��� ���������, ����������� �� ������ ����� � ������
    auto it1 = tree.begin();
    auto it2 = tree.end();

    // ���������, ��� ��� ��������� �� �����
    EXPECT_TRUE(it1 != it2);
}























































                                    ////// ������������ ������������ �����������


//TEST(CopyConstructTest, Test1)
//{  
//    BinaryTreeSearch<int> tree;
//    tree.Insert(5);
//    tree.Insert(3);
//    tree.Insert(8);
//
//    // ������� ������ ������ � �������������� ��� ������ ������� ������
//    BinaryTreeSearch<int> tree2(tree);
//
//
//    /*int size1 = tree.CountNodes;
//    int size2 = tree2.CountNodes;*/
//
//    // ��������� ������� ��������
//    assert(tree.CountNodes == 3);
//    assert(tree2.CountNodes == 3);
//
//    // �������� ������ ������
//    tree1.Insert(10);
//
//    // ���������, ��� ��������� ������� ������ �� ������ �� ������ ������
//    assert(tree.CountNodes == 4);
//    assert(tree2.CountNodes == 3);
//
//}

