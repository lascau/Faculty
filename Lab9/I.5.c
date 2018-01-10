#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    Node* next;
};

void BubbleSort(Node* first)
{
    int gata;
    do
    {
        gata=1;
        for(Node* p=first; p->next; p=p->next)
            if(p->info > p->next->info){
                int aux=p->info;
                p->info=p->next->info;
                p->next->info=aux;
                gata=0;
            }
    }
    while(!gata);
}

int main()
{

    return 0;
}
