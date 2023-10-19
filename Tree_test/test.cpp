// @author Kondakov N

#include "pch.h"
#include "..\tree.h"

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
    vector<int> expected = { NULL };

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
    vector<int> expected = { NULL };

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
    vector<int> expected = { NULL };

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
    int expectedNodeCount = 1;

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
    int expectedDepth = 0;

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
    EXPECT_TRUE(containsValue(root, 4)); // ��� ����� ����������� ������� containsValue

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
    removeNode(root, 3);

    // ���������, ��� ���� � ���������3 ������ �� ���������� � ������
    EXPECT_FALSE(containsValue(root, 3)); 

    // ����������� ������
    DeleteTree(root);
}

TEST(RemoveNode, Test2) {
    // ������� ������ ��� ������������
    TreeNode<int>* root = CreateTree<int>();

    // ������� ���� �� ��������� 1 �� ������
    removeNode(root, 1);

    // ���������, ��� ���� � ��������� 1 ������ �� ���������� � ������
    EXPECT_FALSE(containsValue(root, 1 ));

    // ����������� ������
    DeleteTree(root);
}




















































//// ������������ ������� CopyTree // �������� ������ ������� ��������� � ��������� �� ������� � �����
//TEST(TreeTest, CopyTreeTest)
//{
//    // ������� �������� ������
//    TreeNode<int>* root = CreateTree<int>();
//
//    // �������� �������� ������
//    TreeNode<int>* newRoot = CopyTree(root);
//
//    // ���������, ��� ������������� ������ ����������
//    ASSERT_NE(newRoot, nullptr);
//
//    // ���������� ��������� � ���������
//    EXPECT_EQ(root, newRoot);
//
//    // ����������� ������
//    DeleteTree(root);
//
//    // ����������� ������, ���������� ��� �������������� ������
//    DeleteTree(newRoot);
//}



//// ������������ ������� DeleteTree // ��������� ��������� � ������ ���������
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
//    // ����������� ������, �� ������� �������� root
//    delete root;
//}
