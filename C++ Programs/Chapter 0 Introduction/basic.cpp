#include <iostream>
#include <stdio.h>
using namespace std;

struct node{
    int data;
    node *next;
};

int main(){
    
    node *head , *temp;
head = new node;

    head->data = 45;
    head->next = NULL;

    temp = head;


    for(int i = 0 ; i<5 ; i++){
        temp->next = new node;
        temp= temp->next;

        cout<<"Enter number : ";
        cin>>temp->data;
        temp->next = NULL;

    } 

    temp = head;

    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp= temp->next;
    }
    return 0;
}