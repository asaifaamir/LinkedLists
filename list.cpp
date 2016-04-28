//
//  list.cpp
//  linkedList
//
//  Created by Asaif Butt on 4/24/16.
//  Copyright © 2016 Asaif Butt. All rights reserved.
//

#include "list.h"

list:: list()
{
    front = 0;
}

list::~list()
{
    
    while(front!=0)
    {
        I_node *n = front;
        front = front -> next;
        delete n;
    }
}

void list::insert(int  key)
{
    I_node *n = new I_node;
    n->data = key;
    n->next = 0;
    
    if(front == 0)
    {
        front = n;
    }
    else
    {
        I_node *b = front;
        while(b->next != 0)
        {
            b = b->next;
        }
        
        if(key < front -> data)
        {
            n -> next = front;
            front = n;
        }
        else if(key > b-> data)
        {
            b->next = n;
        }
        else
        {
            I_node *q = front;
            while(key>q->next->data)
            {
                q = q->next;
            }
            b = q;
            b = b->next;
            
            q->next = n;
            n->next = b;
            
        }
    }
    
}

void list::remove(int key)
{
    I_node *p = front;
    
    while(p!=0 && p->data!=key)
    {
        p = p->next;
    }
    
    if(p!=0)
    {
        if(p==front)
        {
            front = front->next;
            delete p;
        }
        else if(p->next == 0)
        {
            I_node *n = front;
            while(n->next!=p)
            {
                n = n->next;
            }
            delete p;
            n ->next = 0;
        }
        else
        {
            I_node *n = front;
            while(n->next!=p)
            {
                n = n->next;
            }
            n->next = p ->next;
            delete p;
        }
    }
    else
    {
        cout <<"Item not in the list." << endl;
    }
    

    
}

void list::print()
{
    I_node *p = front;
    while(p != 0)
    {
        cout << p->data << endl;
        p = p ->next;
    }
    
}
