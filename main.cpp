//
//  main.cpp
//  LinkedList
//
//  Created by Royshawn McClain on 10/24/18.
//  Copyright © 2018 Royshawn McClain. All rights reserved.
//

#include "LinkedList.h"

using namespace linkedlist;
using namespace std;

//gv
void menu();
int value;
int choice;
void clears();
///////////////////////////////////////////////////
int main(){
    
    //local var
    
    LinkedList linkedlist1;
    //code linkedlist1.insert_head(60);
    
   
    
    do {
     
       
    menu();
     cout<<"Enter a choice."<<endl;
    cin>>choice;
    
    switch (choice) {
        case 1:
            cout<<"Enter a value to Insert to Head"<<endl;
            cin>>value;
            linkedlist1.insert_head(value);
            break;
        case 2:
            cout<<"Enter a value to Insert to Tail"<<endl;
            cin>>value;
            linkedlist1.insert_tail(value);
            break;
        case 3:
            cout<<"Enter a value to Insert to Any Position"<<endl;
            cin>>value;
            linkedlist1.insert_position(value);
            break;
        case 4:
            linkedlist1.delete_head();
            cout<<"The head has been deleted"<<endl;
            break;
        case 5:
            linkedlist1.delete_tail();
            cout<<"The tail has been deleted"<<endl;
            break;
        case 6:
            linkedlist1.delete_pos();
            cout<<"The selected position has been deleted"<<endl;
            break;
        case 7:
            linkedlist1.display_node();
            break;
        case 8:
            cout<<"The program will now self-destruct -_-"<<endl;
            system("exit");
            break;
        default:
            cout<<"Invalid Option";
            break;
    }
       
        
            system( "read -n 1 -s -p \"Press any key to continue...\"" );
        clears();
        
    } while (choice!=8);
    
    
    return 0;
}
///////////////////////////////////////////////////

void menu()
{
    
    cout<<"Enter an option"<<endl;
    cout<<"1. Insert Head"<<endl;
    cout<<"2. Insert Tail"<<endl;
    cout<<"3. Insert Position"<<endl;
    cout<<"4. Delete Head"<<endl;
    cout<<"5. Delete Tail"<<endl;
    cout<<"6. Delete Position"<<endl;
    cout<<"7. Display"<<endl;
    cout<<"8. Exit"<<endl;
}

void clears()
{
    for (int i=0; i<=10; i++) {
        cout<<"\n\n\n\n\n";
    }
}
