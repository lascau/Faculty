#include <stdio.h>
#include <stdlib.h>

struct Nod{
    int info;
    struct Nod *next;
};

float media(struct Nod *list)
{
    int s = 0;
    int nr = 0;

    while (list != NULL){
        s = s + list -> info;
        nr++;
        list = list -> next;
    }
    return s / nr;
}

int main()
{
    srand(time(NULL));
    int i;

    struct Nod *first, *last, *p;
    first = (struct Nod *) malloc(sizeof(struct Nod *));
    first = NULL;

    for (i = 0; i < 24; i++){
        p = (struct Nod *) malloc(sizeof (struct Nod *));
        p -> info = rand() % 100;
        p -> next = NULL;
        if (first == NULL){
            first = p;
            last = p;
        }else{
            last -> next = p;
            last = p;
        }
    }
   printf("List:");
   p = first;
   while (p != NULL){
        printf("%d ",p -> info);
        p = p -> next;
   }

    printf("\nMedia:%.2f ", media(first));

    return 0;
}
