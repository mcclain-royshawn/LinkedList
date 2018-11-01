//
//  LinkedList.cpp
//  LinkedList
//
//  Created by Royshawn McClain on 10/24/18.
//  Copyright © 2018 Royshawn McClain. All rights reserved.
//

#include"LinkedList.h"
using namespace linkedlist;

LinkedList::LinkedList() {
    head=NULL; tail=NULL;
}
void LinkedList::insert_head(int value) {
    Node* temp=new Node;
    temp->data=value;
    if(head==NULL && tail==NULL) {
        temp->next=NULL;
        head=temp;
        tail=temp;
    } else {
        temp->next=head;
        head=temp; }

}
void LinkedList::insert_tail(int value) {
    Node* temp=new Node;
    temp->data=value;
    if(head==NULL && tail==NULL) {
        temp->next=NULL;
        head=temp;
        tail=temp;
    }
    else
    {
        tail->next=temp; temp->next=NULL; tail=temp;
    }
}
    void LinkedList::insert_position(int value){
        int pos;
        cout<<"Enter the position: ";
        cin>>pos;
        if (pos==1) {
            cout<<"Choose Insert Head";
        }
        else{
        Node *after=new Node;
        Node *before=new Node;
        after=head;
        for(int i=1;i<pos;i++) {
            before=after;
            after=after->next;
        }
        Node* temp=new Node;
        temp->data=value;
        
        before->next=temp; temp->next=after;
        }
    }

void LinkedList::delete_head() {
    Node *temp=new Node;
    temp=head;
    head=temp->next; delete temp;
}
void LinkedList::delete_tail() {
    Node *after=new Node;
    Node *before=new Node;
    after=head;
    while(after->next=NULL) {
        before=after; after=after->next;
    }
    before->next=NULL; tail=before;
    delete after; }

void LinkedList::delete_pos()
{
    int pos;
    cout<<"Enter the position";
    cin>>pos;
    
    Node* after = new Node;
    Node* before = new Node;
    after = head;
    for (int i=1;i<pos;i++)
    {
        before=after;
        after=after->next;
    }
    before->next=after->next;
    delete after;
    
}
void LinkedList::display_node() {
    int counter=1;
    Node *temp=new Node;
    temp=head;
    while(temp!=NULL)
    {
    
        cout<<"Node" << counter<<". "<<temp->data<<endl;
        temp=temp->next;
        counter++;
    }
    
}
