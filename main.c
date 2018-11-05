#include <stdio.h>
#include <malloc.h>

typedef struct LinkeList {
    char *name;
    int ID;
    struct LinkeList *pt_Next;
}T_LinkeList,*PT_LinkeList;

static PT_LinkeList g_ptLinkListHeader;

int main() {
    PT_LinkeList pt_new1;
    PT_LinkeList pt_new2;
    PT_LinkeList pt_new3;
    
    pt_new1 = malloc(sizeof(T_LinkeList));
    pt_new1->name       = "pt_new1";
    pt_new1->ID         = 1;
    /*放入链表*/
    pt_new1->pt_Next    = g_ptLinkListHeader;
    g_ptLinkListHeader  = pt_new1;
    
    pt_new2 = malloc(sizeof(T_LinkeList));
    pt_new2->name       = "pt_new2";
    pt_new2->ID         = 2;
    /*放入链表*/
    pt_new2->pt_Next    = g_ptLinkListHeader;
    g_ptLinkListHeader  = pt_new2;
    
    pt_new3 = malloc(sizeof(T_LinkeList));
    pt_new3->name       = "pt_new3";
    pt_new3->ID         = 3;
    /*放入链表*/
    pt_new3->pt_Next    = g_ptLinkListHeader;
    g_ptLinkListHeader  = pt_new3;

    free(pt_new1);
    free(pt_new2);
    free(pt_new3);
    
    printf("Hello, World!\n");
    return 0;
}