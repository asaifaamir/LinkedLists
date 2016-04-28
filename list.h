//
//  list.h
//  linkedList
//
//  Created by Asaif Butt on 4/24/16.
//  Copyright © 2016 Asaif Butt. All rights reserved.
//

#ifndef list_h
#define list_h


#include <iostream>
using namespace std;


class I_node
{
public:
    int data;
    I_node *next;
    I_node *prev;
};

class list
{
public:
    
    list();
    ~list();
    void insert(int);
    void remove(int);
    bool isEmpty();
    I_node search(int);
    void print();
    
private:
    I_node *front;
    
};


#endif /* list_h */
