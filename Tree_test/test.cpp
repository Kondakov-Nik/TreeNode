#include "pch.h"
#include "..\tree.h"



// ������������ ������� NLRTraversal
TEST(TraversalTest, NLRTraversalTest)
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

// ������������ ������� LNRTraversal
TEST(TraversalTest, LNRTraversalTest)
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

// ������������ ������� LRNTraversal
TEST(TraversalTest, LRNTraversalTest)
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



// ������������ ������� CountNodes
TEST(TreeTest, CountNodesTest)
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

// ������������ ������� GetTreeDepth
TEST(TreeTest, GetTreeDepthTest)
{
    TreeNode<int>* root = CreateTree<int>();
    int depth = GetTreeDepth(root);

    // ��������� ������� ������
    int expectedDepth = 3;

    // ���������� ��������� � ���������
    EXPECT_EQ(depth, expectedDepth);

    // ����������� ������
    DeleteTree(root);
}

//// ������������ ������� DeleteTree
//TEST(TreeTest, DeleteTreeTest)
//{
//    // ������� ������
//    TreeNode<int>* root = CreateTree<int>();
//
//    // ������� ������
//    DeleteTree(root);
//
//    // ����� ��������, �������� ��������� ������ ���� ����� nullptr
//    EXPECT_EQ(root, nullptr);

//}