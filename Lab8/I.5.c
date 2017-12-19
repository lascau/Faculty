#include <stdio.h>
#include <stdlib.h>

struct Nod{
    int info;
    struct Nod *next;
};

int sum(struct Nod *list)
{
    int s = 0;

    while (list != NULL){
        s = s + list -> info;
        list = list -> next;
    }
    return s;
}

int main()
{
    int i;
    int n;
    int val;

    scanf("%d", &n);

    struct Nod *first, *last, *p;
    first = (struct Nod *) malloc(sizeof(struct Nod *));
    first = NULL;

    for (i = 0; i < n; i++){
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
    printf("List:");
    p = first;
    while (p != NULL){
        printf("%d ",p -> info);
        p = p -> next;
    }
    printf("\n");

    printf("%d", sum(first));

    return 0;
}
