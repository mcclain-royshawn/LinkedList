//
//  LinkedList.h
//  LinkedList
//
//  Created by Royshawn McClain on 10/24/18.
//  Copyright © 2018 Royshawn McClain. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h


#include<iostream>

namespace linkedlist
{
using namespace std;

    struct Node
    {
        int data;
        Node *next;
    };
    class LinkedList
    {
    private:
        Node *head,*tail;
    public:
        LinkedList();
        void insert_head(int);
        void insert_tail(int);
        void insert_position(int);
        void delete_head();
        void delete_tail();
        void delete_pos();
        void display_node();
    };
}
#endif /* LinkedList_h */
