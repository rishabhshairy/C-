#include<iostream>
using namespace std;

typedef struct treetype
{
  int key;
  struct treetype *right;
  struct treetype *left;
}tree;

typedef tree *btree;

btree root;
class Bintree{
public:
  btree newNode(int n);
  btree insert(btree,int);
  void inorder(btree);
  void preorder(btree);
  void postorder(btree);
  Bintree(){
    root=NULL;
  }
};

int main()
{
  int choice,num;
  Bintree bst;
  while(1){
    cout<<"1.insert element"<<endl;
    cout<<"2.inorder"<<endl;
    cout<<"3.preorder"<<endl;
    cout<<"4.postorder"<<endl;
    cin>>choice;
    switch (choice) {
      case 1:
      cout<<"enter the no to be inserted";
      cin>>num;
      root=bst.insert(root,num);
      break;

      case 2:
      cout<<"Inorder Bst:"<<endl;
      bst.inorder(root);
      cout<<endl;
      break;

      case 3:
      cout<<"Preorder Bst:"<<endl;
      bst.preorder(root);
      cout<<endl;
      break;

      case 4:
      cout<<"PostOrder Bst:"<<endl;
      bst.postorder(root);
      cout<<endl;
      break;
      exit(1);
    }
  }
}


btree Bintree::newNode(int item)
{
    btree temp = new tree;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

void Bintree::inorder(btree t1)
{
    if (t1 != NULL)
    {
        inorder(t1->left);
        printf("%d \n", t1->key);
        inorder(t1->right);
    }
}

void Bintree::preorder(btree t1)
{
    if (t1 != NULL)
    {
        preorder(t1->left);
        preorder(t1->right);
        printf("%d \n", t1->key);
    }
}

void Bintree::postorder(btree t1)
{
    if (t1 != NULL)
    {
        printf("%d \n", t1->key);
        postorder(t1->left);
        postorder(t1->right);
    }
}

btree Bintree::insert(btree node, int key)
{
    /* If the tree is empty, return a new node */
    if (node == NULL) return newNode(key);

    /* Otherwise, recur down the tree */
    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);

    /* return the (unchanged) node pointer */
    return node;
}
