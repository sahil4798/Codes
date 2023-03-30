#include <iostream> 
using namespace std; 

class Node
{   
    public:
    int data ;
    Node *next;
};
class Stack
{
    Node *top;

    public:
    Stack()
    {top=nullptr;}

    void Display();
    void push(int x);
    int pop();  

};

void Stack :: push(int x)
{
   Node * t = new Node[1];

   if(t==nullptr) 
   cout<<"Stack is overflow "<<endl;

   else
   {
     t->data =x;
     t->next =top;
     top = t;
   }
}

int Stack :: pop()
{   
    int x =-1;
    Node * t ;
    if(top==nullptr)
    cout<<"Stack is empty "<<endl;

    else
    {
      t = top;
      x=t->data;
      top = top->next;
      free(t);

    }
    return x;

}

void Stack :: Display()
{
    Node *t = top;

    while(t)
    {
        printf("%d " , t->data);
        t=t->next;
    }
    printf("\n");

}

int main()
{ 

Stack obj ;
obj.push(11);
obj.push(22);
obj.push(33);
obj.push(44);
obj.push(55);
obj.Display();

cout<<obj.pop()<<" ";
cout<<obj.pop()<<" ";


return 0;
} 