#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *CreateNode(int x)
{
    node *temp = new node;
    temp ->data = x ;
    temp ->next = NULL;
    return temp ;
}

void PrintList(node *l)
{
    node *p = l;
    while( p != NULL)
    {
        cout << p ->data << " ";
        p =p ->next;
    }
}

node *addElement(node *p , int x)
{
    node *temp = CreateNode(x);
    p ->next = temp;
    return temp;
}

node * addHead(node* l ,int x)
{
    node *temp = new node;
    temp ->data = x;
    temp ->next = l; // dang dia chi nhu con tro
    l = temp;
    return l ;
}
node *addTail(node *l ,int x )
{
    node *p = l;
    while(p ->next !=NULL)
    {
        p = p ->next;
    }
    node *temp = new node;
    temp ->data = x ;
    temp ->next = NULL;
    p ->next = temp;
    return l ;
}

node *addAt(node *l , int k ,int x)
{
    node *p = l ;
    for (size_t i = 0; i < k - 1; i++)
    {
        p = p ->next;
    }
    node *temp = new node;
    temp ->data =x ;
    temp -> next  = p->next ;
    p -> next = temp;
    return l ;
}
int main()
{
    int n , k , x ;
    cin >> n ;
    cin >> x;
    node *l = CreateNode(x);
    node *p = l;
    for (int i = 1; i < n; i++)
    {
        cin >> x ;
        p = addElement(p,x);
    }
    cin >> k >> x ;
    if(k==0)
    {
        l = addHead(l , x );
    }else if(k==n)
    {
        l = addTail(l,x);
    }else 
    {
        l = addAt(l,k,x);
    }
    PrintList(l);
    return 0;
}