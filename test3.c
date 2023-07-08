#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;  // 数据
    struct Node* left;  // 左子节点
    struct Node* right;  // 右子节点
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));  // 分配新节点的内存空间
    if (newNode == NULL) {
        printf("内存分配失败");  // 打印内存分配失败的消息
        exit(1);
    }
    newNode->data = data;  // 设置新节点的数据
    newNode->left = NULL;  // 将新节点的左子节点设为NULL
    newNode->right = NULL;  // 将新节点的右子节点设为NULL
    return newNode;  // 返回新节点
}

void inorderTraversal(struct Node* root) {
    if (root == NULL) {
        return;  // 如果根节点为空，则返回
    }
    inorderTraversal(root->left);  // 中序遍历左子树
    printf("%d ", root->data);  // 打印当前节点的数据
    inorderTraversal(root->right);  // 中序遍历右子树
}

int main() {
    struct Node* root = createNode(1);  // 创建根节点并赋值为1
    root->left = createNode(2);  // 创建左子节点并赋值为2
    root->right = createNode(3);  // 创建右子节点并赋值为3
    root->left->left = createNode(4);  // 创建左子节点的左子节点并赋值为4
    root->left->right = createNode(5);  // 创建左子节点的右子节点并赋值为5

    printf("中序遍历: ");
    inorderTraversal(root);  // 中序遍历二叉树

    return 0;
}
