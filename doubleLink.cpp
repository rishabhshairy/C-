#include <iostream>
using namespace std;
typedef struct nodetype
{
    int data;
    struct nodetype *next;
    struct nodetype *pre;
}node;
typedef node *list;
class dblink{
private:
    list head,tail;
public:
    dblink(){
        head=NULL;
        tail=NULL;
    }
    void insertStart(int value)
    {
        list temp=new node;
        temp->data=value;
        temp->pre=NULL;
        temp->next=head;
        if (head!=NULL)
        {
            /* code */
            head->pre=temp;
        }
        head=temp;
    }
    void insertEnd(int value)
    {
        list temp=new node;
        tail=head;
        temp->data=value;
        temp->next=NULL;
        if(head==NULL)
        {
            temp->pre=NULL;
            head=temp;
            return;
        }
        while (tail->next!=NULL)
        {
            /* code */
            tail=tail->next;
        }
        tail->next=temp;
        temp->pre=tail;
        return;

    }
    void insetAny() {
        /* code */
        int key,value;
        std::cout << "Enter data after which u want to insert" << "\n";
        std::cin >> key;
        std::cout << "Enter value" << "\n";
        std::cin >> value;
        list temp=new  node;
        list prev=new  node;
        list cur=new  node;
        cur=head;
        while(cur->data!=key)
        {
            prev=cur;
            cur=cur->next;
        }
        temp->data=value;
        temp->next=cur->next;
        temp->pre=cur;
        cur->next=temp;



    }
    void display()
    {
        list temp=new node;
        temp=head;
        std::cout << "Forward direction" << "\n";
        while (temp!=NULL)
        {
            /* code */
            std::cout << temp->data << "\t";
            temp=temp->next;
        }
    }

};
int main()
{
    dblink obj;
    obj.insertStart(50);
    obj.insertStart(25);
    obj.insertEnd(30);
    obj.display();
    obj.insetAny();
    obj.display();
return 0;
}
