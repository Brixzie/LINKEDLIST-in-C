
/*
1. Understand typedef and make a choice for the code
2. When -> vs . for accessing struct variables?
2. Understand how malloc works, internally.
3. Pointer to a pointer
4. Add delete function
*/

#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

 int main(){
   node_t *head;
   node_t *tail;
   node_t *tmp;
   node_t *tmp2;

   int n;
   for(n=0;n<10;n++){
     tmp = create_new_node(n);
     if(n<1){
       head = tmp;}
     else{
       tmp2->next = tmp;
     }
     tmp2 = tmp;
   }


   node_t *newNode = create_new_node(6);
   newNode = create_new_node(6);
   //head = insert_at_head(head,newNode); //Or call function as parameter
   //head = insert_at_head(head,create_new_node(6));
   insertBeginning(&head,create_new_node(6));

   printList(head);
   //printf("\nAddress: %p\n",(void *)findNode(head,6));
   node_t *finding = findNode(head, 6);
   if(finding != NULL){
     printf("\nAddress: %p \nFinding: %d\n",(void *)findNode(head,6), finding->value);
   }

   insertNodeBetween(finding, create_new_node(3));
   printList(head);
   return 0;

 }
