#include <stdio.h>
#include <stdlib.h>

struct Nod{
    int info;
    struct Nod *next;
};

void concatenate(struct Nod *list1,struct Nod *list2)
{
    if(list1 != NULL && list2 != NULL){
        if (list1 -> next == NULL)
            list1 -> next = list2;
        else
            concatenate(list1 -> next,list2);
    }
    else
        printf("list1 or list 2 is empty\n");
}

int main()
{
    //first list
    int i;
    int lengthOfList1;
    int val;

    scanf("%d", &lengthOfList1);

    struct Nod *first, *last, *p;
    first = (struct Nod *) malloc(sizeof(struct Nod *));
    first = NULL;

    for (i = 0; i < lengthOfList1; i++){
        p = (struct Nod *) malloc(sizeof (struct Nod *));
        scanf("%d", &val);
        p -> info = val;
        p -> next = NULL;
        if (first == NULL){
            first = p;
            last = p;
        }else{
            last -> next = p;
            last = p;
        }
    }
    printf("List1:");
    p = first;
    while (p != NULL){
        printf("%d ",p -> info);
        p = p -> next;
    }
    printf("\n");

    //second list
    int lengthOfList2;
    int val1;

    scanf("%d", &lengthOfList2);

    struct Nod *first1, *last1, *p1;
    first1 = (struct Nod *) malloc(sizeof(struct Nod *));
    first1 = NULL;

    for (i = 0; i < lengthOfList2; i++){
        p1 = (struct Nod *) malloc(sizeof (struct Nod *));
        scanf("%d", &val1);
        p1 -> info = val1;
        p1 -> next = NULL;
        if (first1 == NULL){
            first1 = p1;
            last1 = p1;
        }else{
            last1 -> next = p1;
            last1 = p1;
        }
    }
    printf("List2:");
    p1 = first1;
    while (p1 != NULL){
        printf("%d ", p1 -> info);
        p1 = p1 -> next;
    }
    printf("\n");


    //Concatenation
    concatenate(first, first1);
    printf("List1 + List2:");
    p = first;
    while (p != NULL){
        printf("%d ", p -> info);
        p = p -> next;
    }

    return 0;
}
