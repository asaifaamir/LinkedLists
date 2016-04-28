//
//  main.cpp
//  linkedList
//
//  Created by Asaif Butt on 4/24/16.
//  Copyright © 2016 Asaif Butt. All rights reserved.
//
#include "list.h"

int main()
{
    // insert code here...
    list a;
    
    a.insert(100);
    a.insert(22);
    a.insert(43);
    a.insert(5);
    
    a.print();
    
    a.remove(1);
    a.remove(5);
    
    cout << "-------------" << endl;
    a.print();
    
    a.insert(6);
    a.insert(55);
    a.remove(22);
    a.remove(100);
    a.insert(120);
    cout << "-------------" << endl;
    
    a.print();
    return 0;
}
