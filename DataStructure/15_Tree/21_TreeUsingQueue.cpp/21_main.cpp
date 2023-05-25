#include <iostream>
#include "21_Queue.h"

using namespace std;

class Tree
{   
    private:

public:
    Node *root;
    Tree()
    {
        root = NULL;
    }

    void TreeCreate();
    void Preorder()
    {
        Preorder(root);
    }
    void Preorder(Node *p);

    void Inorder()
    {
        Inorder(root);
    }

    void Inorder(Node *p);
    void Postorder(Node *p);
    void Levelorder(Node *p);
    int Height(Node *p);
};

void Tree::TreeCreate()
{
    Node *p, *t;
    int x;
    Queue q;
    Queue(100);

    root = new Node();
    cout << "Enter the value of root : ";
    cin >> x;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.enqueue(root);

    while (!q.IsEmpty())
    {
        p = q.dequeue();

        printf("Enter the value of left child of %d ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            Node *t = new Node();
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }
        printf("Enter the value of right child of %d ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            Node *t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}

void Tree ::Preorder( Node *p)
{
    if (p)
    {
        printf("%d ", p->data);
        Preorder(p->lchild);
        Preorder(p->rchild);
    }

}

void Tree ::Inorder(Node *p)
{
    if (p)
    {
        Inorder(p->lchild);
        printf("%d ", p->data);
        Inorder(p->rchild);
    }
    
}
void Tree ::Postorder( Node *p)
{
    if (p)
    {
        Postorder(p->lchild);
        Postorder(p->rchild);
        printf("%d ", p->data);
    }
    
}

void Tree::Levelorder( Node *root)
{
    Queue q(100);

    printf("%d ", root->data);
    q.enqueue(root);

    while (!q.IsEmpty())
    {
        root = q.dequeue();
        if (root->lchild)
        {
            printf("%d ", root->lchild->data);
            q.enqueue(root->lchild);
        }
        if (root->rchild)
        {
            printf("%d ", root->rchild->data);
            q.enqueue(root->rchild);
        }
    }
}

// int Tree::Height(Node *root)
// {
//     int x = 0, y = 0;
//     if (root == 0)
//         return 0;
//     x = Height(root->lchild);
//     y = Height(root->rchild);
//     if (x > y)
//         return x + 1;
//     else
//         return y + 1;
// }
int Tree::Height(Node *p)
{
    int x = 0, y = 0;
    if (p == 0)
        return 0;
    x = Height(p->lchild);
    y = Height(p->rchild);
    if (x > y)
        return x + 1;
    else
        return y + 1;
}

int main()
{
    
  Tree t;
  t.TreeCreate();
  t.Preorder();
  
  cout<<endl;

  cout<<t.Height(t.root);



    return 0;
}