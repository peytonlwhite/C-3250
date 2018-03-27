#ifndef BSTREE_HPP
#define BSTREE_HPP
#include <iostream>

template <class T>
struct BSTNode {

	T data;
	BSTNode<T> *left;
	BSTNode<T> *right;

};

template <class T>
class BSTree {

private:
	int mSize;
	BSTNode<T> *mRoot;
	void copy(const BSTNode<T>*);
	void deleteTree(BSTNode<T>*);
	void preorderR(const BSTNode<T>*) const;
	void postorderR(const BSTNode<T>*) const;
	void inorderR(const BSTNode<T>*) const;
	int heightR(const BSTNode<T>*) const;



public:
	BSTree();
	BSTree(const BSTree<T>&);
	~BSTree();
	BSTree& operator=(const BSTree<T>&);
	void clear();
	int size() const;
	void insert(int);
	void preorder() const;
	void postorder() const;
	void inorder() const;
	void height() const;

};

template<class T>
BSTree<T>::BSTree() {
	mSize = 0;
	mRoot = nullptr;


}
template <class T>
BSTree<T>::BSTree(const BSTree<T>& cc) {
	copy(cc);
}
template <class T>
void BSTree<T>::copy(const BSTNode<T>* copyNode) {

	if (node != 0) {
		insert(copyNode->data);
		copy(copyNode->left);
		copy(copyNode->right);
	}


}
template <class T>
void BSTree<T>::insert(int data) {



	BSTNode<T> *curr = mRoot;
	BSTNode<T> *prev = nullptr;


	while (curr != nullptr) {

		prev = curr;
		if (data < curr->data) {
			curr = curr->left;

		}
		else {
			curr = curr->right;

		}
	}
	if (mRoot == nullptr) {

		mRoot = new BSTNode<T>{ data,0,0 };
	}
	else if (data < prev->data) {
		prev->left = new BSTNode<T>{ data,0,0 };

	}
	else {
		prev->right = new BSTNode<T>{ data,0,0 };

	}



}



template <class T>
void BSTree<T>::preorderR(const BSTNode<T>* preNode) const {

	if (preNode == nullptr) {
		return;
	}
	std::cout << preNode->data << " ";
	preorderR(preNode->left);
	preorderR(preNode->right);

}
template<class T>
void BSTree<T>::postorderR(const BSTNode<T>* postNode) const {

	if (postNode == nullptr) {
		return;

	}

	postorderR(postNode->left);
	postorderR(postNode->right);
	std::cout << postNode->data << " ";


}
template<class T>
void BSTree<T>::inorderR(const BSTNode<T>* inorderNode) const {
	if (inorderNode == nullptr) {
		return;
	}
	inorderR(inorderNode->left);
	std::cout << inorderNode->data << " ";
	inorderR(inorderNode->right);


}
template <class T>
int BSTree<T>::heightR(const BSTNode<T>* hNode) const {
	if (hNode == nullptr) {
		return -1;
	}
	int leftHeight = 1 + heightR(hNode->left);
	int rightHeight = 1 + heightR(hNode->right);

	if (leftHeight > rightHeight) {
		return leftHeight;
	}
	return rightHeight;
}


template <class T>
int BSTree<T>::size() const {
	if (mRoot == NULL) {
		return 0;
	}
	return mSize;
}
template <class T>
BSTree<T>::~BSTree() {

	clear();

}
template <class T>
void BSTree<T>::deleteTree(BSTNode<T>* node) {
	if (node == nullptr) {
		return;
	}
	deleteTree(node->left);
	deleteTree(node->right);
	delete node;
	node = 0;
	mSize = 0;
}
template <class T>
BSTree<T>& BSTree<T>::operator=(const BSTree<T>& eqTree) {
	if (this != &eqTree) {
		clear();
		copy(eqTree.mRoot);

	}
	return *this;
}
template <class T>
void BSTree<T>::clear() {
	if (mRoot != 0) {
		deleteTree(mRoot);
	}
}
template <class T>
void BSTree<T>::inorder() const {

	std::cout << "Inorder  : ";
	inorderR(mRoot);
	std::cout << "\n";
}
template <class T>
void BSTree<T>::preorder() const {

	std::cout << "Preorder : ";
	preorderR(mRoot);
	std::cout << "\n";
}
template <class T>
void BSTree<T>::postorder() const {

	std::cout << "Postorder: ";
	postorderR(mRoot);
	std::cout << "\n";
}
template <class T>
void BSTree<T>::height() const {
	
	int height = 1 + heightR(mRoot);
	std::cout << "Height   : " << height;
	
}










#endif