#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
};
int main(){
    //default allocation
    struct Node* head=NULL;
    struct Node* second=NULL;
    struct Node* third=NULL;
    
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    
    //memory is allocated for 3nodes in heap
    //pointers for each node are head second third
    
    head->data=1;
    head->next=second;
    
    second->data=2;
    second->next=third;
    
    third->data=3;
    third->next=NULL;
    
    printf("%d",*head);
    printf("\n%d",*second);
    printf("\n%d",*third);
    
    return 0;
  
    
}
