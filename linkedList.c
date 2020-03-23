#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"




void printList(node_t *head){
  node_t *temporary = head;

  while(temporary != NULL){
    printf("%d - ", temporary->value);
    temporary = temporary->next;
  }
  printf("\n");
}

node_t *create_new_node(int value){
  node_t *result = malloc(sizeof(node_t));
  result->value = value;
  result->next = NULL;
  return result;
}

//Head is pointer to a pointer so we can manipulate it in this function & dont have to do it in main
node_t *insertBeginning(node_t **head, node_t *node_to_insert){
  node_to_insert->next = *head;
  *head = node_to_insert;
  return node_to_insert;
}

void *insertNodeBetween(node_t *nodeBefore, node_t *newNode){
  newNode->next = nodeBefore->next;
  nodeBefore->next = newNode;
}

node_t *findNode(node_t *head, int value){
    node_t *tmp = head;
    while(tmp->next != NULL){
      if(tmp->value == value){
        return tmp; //Returns pointer to that node
      }else{
        return NULL;
      }
    }
}
