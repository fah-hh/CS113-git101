#include <stdio.h>
#include <stdlib.h>
struct list{
  int a;
  struct node *next;
};

struct node{
  int data;
  struct node *next;
};

struct list *newList() {
  struct list *ls = (struct list*)malloc(sizeof(struct list));
  ls->a = 0;
  ls->next = NULL;
  return ls;
}

void pluss (struct list *ls,int data) {
  struct node *newnode = (struct node*)malloc(sizeof(struct node));
  newnode->data = data;
  newnode->next = NULL;
  if (ls->a == 0) {
    ls->next = newnode;
  }
  
  else {
    struct node *nodee = ls->next;
    struct node *nextt = NULL;
    while (nodee != NULL) {
      nextt = nodee->next;
      if (nodee->data >= data) {
        newnode->next = nodee;
        ls->next = newnode;
        break;
      }
      if (nextt == NULL) {
        nodee->next = newnode;
        break;
      }
      if (nextt->data >= data) {
        newnode->next = nextt;
        nodee->next = newnode;
        break;
      }
      nodee = nodee->next;
    }
  }
  ls->a+=1;
}

void printList (struct list *ls){
  struct node *tmp;
  struct node *head = ls->next;
  for(tmp = head; tmp; tmp = tmp->next){
    printf("%d\n",tmp->data);
  }
}

int main() {
  struct list *ls = newList();
  int input;
  while(scanf("%d",&input) == 1){
    if (input <= -1) {
      printList(ls);
      break;
    }
    pluss(ls,input);
  }
  return 0;