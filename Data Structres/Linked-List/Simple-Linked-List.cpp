#include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct node     //structure declared
{
    int data;
    node *next;

};

class l_list{  //class created
private:

    node *head;  //declared head and tail of  the list
    node *tail;

public:

    l_list(){                  //constructor to initialize head and tail

    head = tail = NULL;
    }

   int ins_front(int n)              //function to add node at beginning of list
   {
       node *new_node = new node();    //new node created
       new_node ->data = n;                 //value added to list

       if(head == NULL)
       {
           head = new_node;
           tail = new_node;

       }

       else{

            new_node -> next = head;
            head = new_node;
       }
    return 0;
   }




int ins_end(int n)               //function to add node at the end of list
{
    node *new_node = new node();
    new_node -> data = n;
    new_node->next = NULL;

    if(head == NULL)
    {

        head = new_node;
        tail = new_node;
    }
    else{
        tail ->next = new_node;
        tail = tail->next;
    }
    return 0;

}



int ins_midaf(int size,int n ,int tmp)            // function to add node after a particular data of node
{
    node *prevptr,*ptr;

    ptr = head;
    prevptr = ptr;
    int c =0;


 // checking if value exists in list
    try {

        while(size>0)
        {
            if(ptr->data == tmp)
            {
                c = 1;
                break;
            }

            ptr = ptr->next;
            size = size-1;
        }

        if (c == 1){

                ptr = head;
                prevptr = ptr;


    while(prevptr->data !=tmp)

    {
        prevptr =ptr;
        ptr = ptr->next;


    }

    node *new_node = new node();
    new_node -> data = n;

    prevptr ->next = new_node;
    new_node->next =ptr;
        }

        else if (c ==0)
        {

            // value not found in list
            throw tmp;
        }

    }


    // if value not found in list

    catch (int tmp)
    {

        cout<<"Node with data "<<tmp<<" not found! Node cannot be inserted!"<<endl;

    }


    return 0;

}

    int disp()           // function to display the linked list
    {

        node *ptr;
        ptr = head;
        cout<<"The linked list is: ";
        while(ptr!=NULL)
        {

            cout<<ptr->data<<"->";
            ptr = ptr->next;
        }
 return 0;
    }


    int ins_midbe(int size,int n,int tmp)         // function to add node before a value of node
    {
        node *prevptr,*ptr;
        ptr = head;
        prevptr = ptr;
        int c= 0;


     //Checking if value exists in list
        try{
            while(size>0)
            {

                if(ptr->data == tmp)
                {
                    c =1;
                    break;
                }
                ptr=ptr->next;
                size = size-1;
            }


             if (c == 1){
                ptr = head;
               prevptr = ptr;



        node *new_node = new node();
        new_node ->data = n;


        while(ptr->data != tmp)
        {

            prevptr = ptr;
            ptr =ptr->next;
        }

         prevptr->next = new_node;
         new_node ->next = ptr;
             }
             else if(c==0)
             {
                   //value not found in list

                 throw tmp;
             }
        }


        catch(int tmp)
        {
            cout<<"Node with value "<<tmp<<" not found! Node cannot be inserted!"<<endl;
        }
         return 0;
    }


    int del_beg()       // delete node from beginning
    {
        int lol = 0;
        node *ptr;
        if(head == NULL)       //list does not exist
        {

            cout<<"UNDERFLOW! Linked list does not exist!";
            lol = 1;
            return lol;

        }

        else
        {

            ptr = head;
            head = head->next;
            free(ptr);

        }

        return 0;
    }


    int del_end()            //function to delete node from the end of list
    {

        int lol = 0;

        node *ptr,*prevptr;
        if(head == NULL)
        {

            cout<<"UNDERFLOW! Linked does not exist!";
            lol = 1;
            return lol;
        }

        else{
            ptr = head;
            while(ptr->next !=NULL)
            {

                prevptr= ptr;
                ptr=ptr->next;

            }

            prevptr->next = NULL;
            free(ptr);
        }

        return 0;
    }


    int del_midaf(int nd)    // function to delete node after a given node
    {
        node *ptr,*prevptr,*nd1;
        ptr = head;
        prevptr = ptr;
        while(prevptr->data !=nd)
        {
            prevptr = ptr;
            ptr=ptr->next;
        }
        nd1 = ptr;
        prevptr->next = ptr->next;
        free(nd1);

    }

};



int main()
{

char ch;    // variables declared
l_list l;
int val,i,n,choice;

again:
cout<<"1.Add node at the start of list"<<endl;
cout<<"2.Add node at the end of the list"<<endl;
cout<<"3.Add node after a node particular data"<<endl;
cout<<"4.Add node before a node of particular data"<<endl;
cout<<"5.Delete a node from the beginning of list"<<endl;
cout<<"6. Delete a node from the end of list"<<endl;
cout<<"7.Delete a node after a given node"<<endl<<endl;

cout<<"Enter your choice: ";
cin>>choice;


if(choice==1)
{
 cout<<"Enter the number of nodes: ";       //input number of nodes
 cin>>n;

 cout<<"Enter values for linked list: ";       //input vale of node

for(i=0;i<n;i++)
{

    cin>>val;
    l.ins_front(val);      // function called
}
}

else if(choice==2)
{
    cout<<"Enter the number of nodes:";
    cin>>n;
    cout<<"Enter values for linked list:";

for(i=0;i<n;i++)
{

    cin>>val;
    l.ins_end(val);
}
}
else if(choice == 3)
{


int tmp;
cout<<" Enter the value after which to be inserted: ";    //input value after which node is added
cin>>tmp;

cout<<"Enter the value: ";
cin>>val;

    l.ins_midaf(n,val,tmp);


}

else if(choice == 4)
{

    int tmp;
cout<<" Enter the value before which node is to be inserted: ";    //input value after which node is added
cin>>tmp;
cout<<"Enter the value: ";

    cin>>val;
    l.ins_midbe(n,val,tmp);

}

else if(choice == 5)
{
    int ch;
    int lol2;
    cout<<"How many nodes you want to delete from beginning:";
    cin>>ch;
    for(i=0;i<ch;i++){
    lol2 = l.del_beg();
    }
    if(lol2 == 1)
    {
        goto nolist;

    }

    else if(lol2 ==0)
    {
        l.disp();
        cout<<endl;
        goto done1;
    }

}

else if(choice ==6)
{
    int ch,i,res1;
    cout<<"How many nodes to be deleted:";
    cin>>ch;

    for(i=0;i<ch;i++)
    {
    res1=l.del_end();
    }

    if(res1==1)
    {

        goto nolist;
    }


    else if(res1 == 0)
    {
        l.disp();
        cout<<endl;
        goto done1;

    }
}


else if(choice ==7)
{ int nd;
    cout<<"Enter the node data:";
    cin>>nd;

    l.del_midaf(nd);

}



 l.disp();
cout<<endl;
done1:
cout<<"Do you want to add more nodes in list or delete a node?";        //choice to add more nodes
cin>>ch;
cout<<endl;

if(ch == 'y')
{
    goto again;
}
else if(ch == 'n') {
    goto done;
}

done:
nolist:
return 0;
}
