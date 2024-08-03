#include<stdio.h>
#include<conio.h>

struct node{
    int data;
    struct node* next;
};


void printLinkedList(struct node* head){
    struct node* ptr1=head;
    while(ptr1!=NULL){
        printf("%d \t ", ptr1->data);
        ptr1=ptr1->next;
    }
}



struct node* insertAtBeginning( struct node* head, int x){
    struct node* Laxmi=(struct node*)malloc(sizeof(struct node));
    Laxmi->data=x;
    Laxmi->next=head;
    return Laxmi;
}


int main(){
    struct node* head;
    //  struct node* first;
    //   struct node* second;
    
    head=(struct node*)malloc(sizeof(struct node));
    // first=(struct node*)malloc(sizeof(struct node));
    // second=(struct node*)malloc(sizeof(struct node));

    head->data=1;
    head->next=NULL;
    // first->data=2;
    // second->data=3;
    int num;
   printf("Enter thenumber of nodes \n");
   scanf("%d", &num);
   for(int i=0;i<num;i++){
    int x;
    printf("Enter the value for your node \n");
    scanf("%d", &x);
    head=insertAtBeginning(head,x);
   }

    printLinkedList(head);
    return 0;
}