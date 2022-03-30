#include <iostream>
using namespace std;

#include "3-ListT.h"

ListT::ListT()
{
    length = 0;
    head = NULL;
    tail = NULL;
}

ListT::~ListT()
{
    if(head)
    {
        node* i = head;
        while(i != NULL)
        {
            node* temp = i;
            i = i->next;
            delete temp;
        }
    }
}

bool ListT::IsEmpty() const
{
    if(head != NULL)
        return true;
    return false;
}

int ListT::GetLength() const
{
    return length;
}

void ListT::PutItemH(itemType item)
{
    node* temp = new node;
    temp->item = item;
    temp->next = head;
    head = temp;
    if(tail == NULL)
        tail = head;
    temp = NULL;
    length++;
}

itemType ListT::GetItemH() const
{
    node* temp = head;
    return temp->item;
}


void ListT::DeleteItemH()
{
    node* temp = head;
    head = head->next;
    delete temp;
    length--;
}

void ListT::PutItemT(const itemType itemIn)
{
    node* temp = new node;
    temp->item = itemIn;
    temp->next = NULL;
    if(head == NULL) // Empty List
    {
        tail = temp;
        head = tail;
    }
    else // Not Empty List
    {
        tail->next = temp;
        tail = temp;
    }
    temp = NULL;
    length++;
}

itemType ListT::GetItemT() const
{
    return tail->item;
}

void ListT::DeleteItemT()
{
    node* temp = tail;
    tail = PtrTo();
    tail->next = NULL;
    delete temp;
    length--;
}

node* ListT::PtrTo()
{
    node* temp = head->next;
    node* prev = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
        prev = prev->next;
    }
    return prev;
}

void ListT::Print() const
{
    node* temp = head;
    while(temp != NULL)
    {
        cout << temp->item << endl;
        temp = temp->next;
    }
}

int ListT::FindItem(const itemType target) const
{
    node* temp = head;
    int numTarget = 0;
    while(temp != NULL)
    {
        if(temp->item == target)
            numTarget++;
        temp = temp->next;
    }
    return numTarget;
}

int ListT::DeleteItem(const itemType target)
{
    int nodesDel = 0;
    node* temp = head;
    node* prev;

    while(temp->item == target) // Target in head
    {
        DeleteItemH();
        nodesDel++;
        length--;
        temp = head;
    }

    prev = head;
    temp = temp->next;
    while(temp->next != NULL)
    {
        if(temp->item == target) // Target found
        {
            node* trash = temp;
            prev->next = temp->next;  
            delete trash;
            nodesDel++;
            length--;
            temp = prev->next;
        }
        else // Tartget not found
        {       
            temp = temp->next;
            prev = prev->next;
        }
    }
    if(tail->item == target) // Target in tail
    {
        node* temp = tail;
        tail = prev;
        tail->next = NULL;
        delete temp;
        nodesDel++;
        length--;
    }
    return nodesDel;
}