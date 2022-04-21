#include<iostream>
#include"solution.h"
using namespace std;

int main() {
	TreeNode* t = new TreeNode(1);
	cout<< "Number of good nodes in the tree is: " << pre(t);
	return 0;
}