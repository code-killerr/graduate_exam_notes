#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>

using namespace std;

// �����ֵܱ�ʾ��
struct ChildBrotherNode{
    struct Node* _child;
    struct Node* _brother;
    string data;

};


// ��������ʾ��
struct BinaryTree{
    struct BinaryTree* _left;
    struct BinaryTree* _right;
    string data;
};


int main(){
    ChildBrotherNode* childParentRoot = new ChildBrotherNode;
    childParentRoot->data = "I am father";
    string data[10];
    for (int i = 0; i< 10; i++){
        data[i] = ((char)('A' + i));
    }
    cout<<data[0]<<data[1];
    return 0;
}
