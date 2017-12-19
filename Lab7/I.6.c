#include <stdio.h>
#include <stdlib.h>

struct sll{
    int info;
    struct sll *next;
};

struct dll{
    int info;
    struct dll *next;
    struct dll *prev;
};

int main()
{
    int i;
    int n;
    int x;
    struct dll *head, *tail;

    scanf("%d", &n);
    head = (struct dll *) malloc(n * sizeof(struct dll *));
    head = NULL;

    for (i = 0; i < n - 1; i++){
        struct dll *q = (struct dll *) malloc(n * sizeof(struct dll *));
        scanf("%d ", &x);
        q -> info = x;
        q -> next = NULL;
        q -> prev = NULL;
        if (head == NULL){
            head = q;
            tail = q;
        }else{
            tail -> next = q;
            q -> prev = tail;
            tail = q;
        }
    }

    //construire lista inversa
    struct sll *first, *last;
    struct dll *aux = head;

    first = (struct sll*) malloc(sizeof(struct sll*));
    first = NULL;

    while (aux -> next != NULL)
        aux = aux -> next;

    while (aux != NULL){
        if (first == NULL){
            first = aux;
            last = aux;
        }else{
            last -> next = aux;
            last = aux;
        }
        aux = aux -> prev;
    }

    //afisare lista inversa

    struct sll *p = first;

    while (p != NULL){
        printf("%d ", p -> info);
        p = p -> next;
    }

    return 0;
}
