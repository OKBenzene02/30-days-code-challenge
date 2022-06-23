/****
    Code Challenge
Day - 14
Single Linked list implementation (insert at begin and middle, Removing a node, Length of list, list sort of O(N)).
****/

///--- Single Linked list Implementation --- ///
/*
#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node* link;
};

struct node* root = NULL;

void append()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    cout<<"Enter a value: \n";
    cin>>temp -> data;
    temp -> link = NULL;
    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        struct node* p;
        p = root;
        while(p -> link != NULL)
        {
            p = p -> link;
        }
        p -> link = temp;
    }
}

int length()
{
    struct node* temp;
    temp = root;
    int count = 0;
    while(temp != NULL)
    {
        count++;
        temp = temp -> link;
    }
    return count;
}

void first_insert()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    cout<<"Enter the value: ";
    cin>>temp -> data;
    temp -> link = NULL;
    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        temp -> link = root;
        root = temp;

    }
}
void middle()
{
    struct node* temp, *p;
    int location, len, i = 1;
    cout<<"Enter the location: ";
    cin>>location;
    len = length();
    cout<<"Number of nodes in list: "<<len<<" \n";
    if (location > len)
    {
        cout<<"Location out of scope.\n";
    }
    else{
        p = root;
        while (location > i)
        {
            p = p -> link;
            i++;
        }
        temp = (struct node*)malloc(sizeof(struct node));
        temp -> link = p -> link;
        p -> link = temp;
        cout<<"Enter a value: \n";
        cin>>temp -> data;
    }
}
void removing_node()
{
    struct node* temp;
    int location, len;
    cout<<"Enter the location to delete: ";
    cin>>location;
    len = length();
    if (location > len)
    {
        cout<<"Location out of scope.\n";
    }
    else if (location == 1)
    {
        temp = root;
        root = temp -> link;
        temp -> link = NULL;
        free(temp);
    }
    else
    {
        struct node* p, *q;
        p = root;
        int i = 1;
        temp = root;
        while (location - 1 > i)
        {
            p = p -> link;
            i++;
        }
        q = p -> link;
        p -> link = q -> link;
        q -> link = NULL;
        free(q);
    }
}

void bubble_sort()
{
    int temp;
    struct node* temp1;
    struct node* temp2;
    for (temp1 = root; temp1 != NULL; temp1 = temp1 -> link)
    {
        for (temp2 = temp1 -> link; temp2 != NULL; temp2 = temp2 -> link)
        {
            if (temp1 -> data > temp2 -> data)
            {
                temp = temp2 -> data;
                temp2 -> data = temp1 -> data;
                temp1 -> data = temp;
            }
        }
    }
}

void display()
{
    struct node* temp;
    temp = root;
    if (temp == NULL)
    {
       cout<<"No elements.\n";
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d --> ", temp->data);
            temp = temp -> link;
        }
        printf("\n\n");
    }

}

int main()
{
    int num;
    cout<<"Enter Number 1 to Create and add node.\nEnter Number 2 to add node at first.\nEnter Number 3 add node at specified location.\nEnter Number 4 to remove the node.\nEnter Number 5 to Display the list.\nEnter 6 to Sort the list.\n";

    do
    {
        cout<<"Enter a number: ";
        cin>>num;
        switch (num)
        {
        case 1:
            append();
            break;
        case 2:
            first_insert();
            break;
        case 3:
            middle();
            break;
        case 4:
            removing_node();
            break;
        case 5:
            printf("\n\tLength is: %d\n", length());
            display();
            break;
        case 6:
            printf("Sorted linked list.\n");
            bubble_sort();
        }
    }while(num != 0);

    return 0;
}
*/