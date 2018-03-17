#include<stdio.h>
struct node
{
    int info;
    struct node* next;
} ;
int main()
{
    struct node* p = NULL;

    void append(struct node*p)
    {
        struct node* temp;
        temp=(struct node*)malloc(sizeof(struct node));
        printf("enter the node to add\n");
        scanf("%d",&temp->info);
        temp->next=NULL;
        if (p==NULL)
        {
            p=temp;
        }
        else
        {
            struct node* x;
            x=p;
            while(p->next!=NULL)
            {
                x=x->next;
            }
        x->next=temp;
        }

    }
}`
