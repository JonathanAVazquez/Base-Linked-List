#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(){
    LinkedList list;
    
    cout << " - Entering data into the linked list - " << endl;
    cout << "Entering this number as a data entry: ";
    for(int i = 0; i < 10; i += 2){
        list.addLast(i);
        cout << i << " | ";
    }
    cout << endl;
    list.displayAll();
    //list.deleteFirst();
    //list.deleteNth(4);
    //list.deleteLast();
    list. displayAll();
    return 0;
}
