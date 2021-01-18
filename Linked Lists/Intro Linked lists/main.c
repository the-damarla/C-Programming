#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head;

void Insert(int x){

    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = head;
    head = temp;
}

void Print(){

    struct node* temp = head;
    printf("\nThe List is ");
    while(temp!=NULL){
        printf(" %d", temp->data);
        temp=temp->next;
    }
}

int main(void){

    printf("how many numbers : ");
    int n,i,x;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("\nEnter the number ");
        scanf("%d",&x);
        Insert(x);
    }
    Print();
    return 0;
}


