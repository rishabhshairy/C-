#include <iostream>
using namespace std;
typedef struct nodetype
{
    int data;
    struct nodetype *next;
}node;
typedef node *list;
class single
{
private:
    list head,tail;
public:

    single(){
        head=NULL;
        tail=NULL;
    }
    void createNode(int value)//also for insert end :) trick
    {
        list temp=new node;
        temp->data =value;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            tail=temp;
            temp=NULL;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
        std::cout << "node created" << "\n";
    }
    void display(){
        list temp=new node;
        temp=head;
        while (temp!=NULL) {

            std::cout << temp->data << '\n';
            temp=temp->next;
        }


    }
    void insertStart(int value)
        {
            list temp=new node;
            temp->data=value;
            temp->next=head;
            head=temp;
            tail=temp;
        }
    void anypos(int pos,int value)
    {
        list pre=new node;
        list cur=new node;
        list temp=new node;
        cur=head;
        for(int i=1;i<pos;i++)
        {
            pre=cur;
            cur=cur->next;

        }
        temp->data=value;
        pre->next=temp;
        temp->next=cur;
    }
    void delFirst()
    {
        list temp=new node;
        temp=head;
        head=head->next;
        delete temp;
    }
    void delEnd()
    {
        list pre=new node;
        list cur=new node;
        cur=head;
        while (cur->next!=NULL)
        {
            /* code */
            pre=cur;
            cur=cur->next;
        }
        tail=pre;
        pre->next=NULL;
        delete cur;

    }
    void delAny(int pos)
    {
        list pre=new node;
        list cur=new node;
        cur=head;
        for(int i=1;i<pos;i++)
        {
            pre=cur;
            cur=cur->next;

        }
        pre->next=cur->next;
    }

};
int main()
{
    single obj;

    /*obj.createNode(55);
	obj.createNode(50);
    obj.insertStart(25);
    obj.anypos(2,30);
    obj.delFirst();
    obj.delEnd();
    obj.createNode(40);
    obj.insertStart(15);
    obj.delAny(2);
    obj.display();
    */
    obj.insertStart(20);
    obj.createNode(50);
    obj.insertStart(15);
    obj.display();
    return 0;
}
