#include <iostream>
using namespace std;
class node
{
public:
    node *left;
    node *right;
    int data;
};
class   bst:public node
{


public:
    node *root;
    bst(){
        root=NULL;
    }
    node *newNode(int value);
    node *insert(node*,int);
    void inorder(node*);
    void preorder(node*);
    void postorder(node*);
    node *search(node*,int item);

};
node* bst::newNode(int item)
{
    node *temp=new node;
    temp->data=item;
    temp->left=temp->right=NULL;
    return temp;
}
node* bst::insert(node *temp,int value)
{
    if(temp==NULL)
    {
        return newNode(value);
    }
    if (value< temp->data) {
        /* code */
        temp->left=insert(temp->left,value);
    } else if(value > temp->data){
        /* code */
        temp->right=insert(temp->right,value);
    }

    return temp;
}
node* bst::search(node *t,int value) {
    /* code */
    int flag=0;
    if(t->data==value)
    {
        std::cout << "present" << "\n";
    }
    if(value<t->data)
    {
        search(t->left,value);
    }
    else
    {
        search(t->right,value);
    }

}
void bst::inorder(node *t)
{
    if (t!=NULL)
    {
        inorder(t->left);
        std::cout << t->data << "\n";
        inorder(t->right);
    }
}
void bst::postorder(node *t)
{
    if (t!=NULL)
    {
        inorder(t->left);
        inorder(t->right);
        std::cout << t->data << "\n";
    }
}
void bst::preorder(node *t)
{
    if (t!=NULL)
    {   std::cout << t->data << "\n";
        inorder(t->left);
        inorder(t->right);

    }
}
int main()
{
  int choice,num;
  bst obj;
  while(1){
    cout<<"1.insert element"<<endl;
    cout<<"2.inorder"<<endl;
    cout<<"3.preorder"<<endl;
    cout<<"4.postorder"<<endl;
    std::cout << "5.Search" << "\n";
    cin>>choice;
    switch (choice) {
      case 1:
      cout<<"enter the no to be inserted:";
      cin>>num;
      obj.root=obj.insert(obj.root,num);
      break;

      case 2:
      cout<<"Inorder Bst:"<<endl;
      obj.inorder(obj.root);
      cout<<endl;
      break;

      case 3:
      cout<<"Preorder Bst:"<<endl;
      obj.preorder(obj.root);
      cout<<endl;
      break;

      case 4:
      cout<<"PostOrder Bst:"<<endl;
      obj.postorder(obj.root);
      cout<<endl;
      break;
  case 5:
      std::cout << "Enter number to search" << "\n";
      std::cin >> num;
      obj.search(obj.root,num);
      break;
      exit(1);
    }
  }
}
