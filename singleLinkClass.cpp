#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node  *next;
};
class list:public node
{
private:
    node *head,*tail;
public:
    list(){
        head=NULL;
        tail=NULL;
    }
    /*void create()
    {
        node *temp=new node;
        std::cout << "Enter the value" << "\n";
        int n;
        cin>>n;
        temp->data=n;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            tail=head;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }
    }*/
    // no need to use the create used it already in insertStart()
    void display()
    {
        node *temp=new node;
        temp=head;
        while (temp!=NULL)
        {
            /* code */
            std::cout << temp->data << "\t";
            temp=temp->next;

        }
        std::cout << "\n" << "\n";
    }
    void insert()
    {
        node *pre =new node;
        node *cur=new node;
        node *temp;
        int key,pos,value;
        std::cout << "Enter 1-> FirstNode 2-> Last node 3-> In Given Position 4-> display 5->Main menu"  << "\n";
        do
        {   std::cout << "Enter choice" << "\n";
            std::cin >> key;
            switch (key)
            {
            case 1:
                /* code */
                temp=new node;
                std::cout << "Enter the value" << "\n";
                std::cin >> value;

                if (head==NULL) {
                    /* code */

                    temp->data=value;
                    temp->next=head;
                    head=temp;
                    tail=temp;
                } else {
                    /* code */
                    temp->data=value;
                    temp->next=head;
                    head=temp;
                }
                break;
            case 2:
                temp=new node;
                std::cout << "Enter the value" << "\n";
                cin>>value;
                temp->data=value;
                temp->next=NULL;
                tail->next=temp;
                tail=temp;
                break;
            case 3:
                std::cout << "Enter the Position" << "\n";
                std::cin >> pos;
                std::cout << "Enter value" << "\n";
                std::cin >> value;
                temp=new node;
                cur=head;
                for (int i = 1; i < pos;i++)
                {

                    pre=cur;
                    cur=cur->next;
                }
                temp->data=value;
                pre->next=temp;
                temp->next=cur;
                break;
            case 4:
                /*std::cout << "Link list is " << "\n";
                temp=head;
                while (temp!=NULL)
                {
                    std::cout << temp->data << "\t";
                    temp=temp->next;
                }
                std::cout << "\n" << "\n";
                break;

            default:

                std::cout << "Wrong choice" << "\n";*/
                display();
                break;
            }
        } while (key<5);
    }

    void del()
    {
        node *pre=new node;
        node *cur=new node;
        node *temp=new node;

        int key,pos;
        std::cout << "1-->Delete first \n 2-->Delete Last \n 3-->Delete at Position \n 4--Display \n  5->To Main Menu" << "\n";
        do
        {   std::cout << "Enter the choice" << "\n";
            std::cin >> key;
            switch (key)
            {
            case 1:
                temp=head;
                head=head->next;
                delete temp;
                break;
            case 2:
                cur=head;
                while(cur->next!=NULL)
                {
                    pre=cur;
                    cur=cur->next;
                }
                tail=pre;
                pre->next=NULL;
                delete cur;
                break;
            case 3:
                std::cout << "Enter the Position" << "\n";
                std::cin >> pos;
                cur=head;
                for (int i = 1; i < pos; ++i)
                {
                    /* code */
                    pre=cur;
                    cur=cur->next;
                }
                pre->next=cur->next;
                delete cur;
                break;
            case 4:
                /*std::cout << "Link list is " << "\n";
                temp=head;
                while (temp!=NULL)
                {
                    std::cout << temp->data << "\t";
                    temp=temp->next;
                }
                std::cout << "\n" << "\n";
                break;
            default:
                */
                display();
                break;
            }
        } while (key<5);
    }

};
int main()
{
    list obj;
    int key;

    do
    {   std::cout << "Enter 1->INSERT 2->DELETE 3->EXIT" << "\n";
           std::cout << "ENTER MAIN CHOICE" << "\n";
        std::cin >>key;
        switch (key)
        {
        case 1:obj.insert();
            /* code */
            break;
        case 2:
            obj.del();
            break;
        default:
            /* code */
            std::cout << "Exit thanks" << "\n";
            break;
        }
        /* code */
    } while (key<3);
    return 0;

}
