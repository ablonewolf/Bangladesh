#include<stdio.h>
#include<stdlib.h>
struct node
{
    int val;
    node *next;
};
void insert_last(node *p, int v)
{
    node *a = (node *) malloc(sizeof(node));
    a->val = v;
    a->next = NULL;
    while(p->next != NULL)
    {
        p = p->next;
    }
    p->next = a;
}
void insert_after(node *p, int v, int u)
{
    node *a = (node *) malloc(sizeof(node));
    a->val = u;
    a->next = NULL;
    while(p->val !=v)
    {
        p = p->next;

    }
    a->next = p->next;
    p->next = a;
}
void insert_before(node *p, int v, int u)
{
    int t;
    node *a = (node *) malloc(sizeof(node));
    a->val = u;
    a->next = NULL;
    while(p->val !=v)
    {
        p = p->next;

    }
    {
        a->next = p->next;
        p->next = a;
    }
    {
        t = p->val;
        p->val= p->next->val;
        p->next->val = t;
    }
}
void delete_node(node *p, int v)
{

    while(p->next->val != v)
    {
        p = p->next;
    }
    p->next = p->next->next;
}
void print_list(node *p)
{
    int flag = 0;
    while(p!=NULL)
    {
        printf("%d ",p->val);
        p = p->next;
        flag = 1;
    }
    if(!flag)
        printf("Empty Linked List");
    puts("");
}
int main()
{
    int t, x, y;
    node *head = NULL;
    while(scanf("%d",&t)==1)
    {
        if(t == 1)
        {
            print_list(head);
        }
        else if(t == 2)
        {
            scanf("%d",&x);
            if(head == NULL)
            {
                head = (node *)malloc(sizeof(node));
                head->val = x;
                head->next = NULL;
            }
            else
                insert_last(head,x);
        }
        else if(t == 3)
        {
            scanf("%d %d",&x,&y);
            insert_before(head,x,y);
        }
        else if(t == 4)
        {
            scanf("%d %d",&x,&y);
            insert_after(head,x,y);

            //insert_after(head,x,y);
        }
        else if(t == 5)
        {
            scanf("%d",&x);
            //delete_node(head,x);
        }
        else if(t == 0)
            break;
    }
}
