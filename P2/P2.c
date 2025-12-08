#include <stdio.h>
#include <stdlib.h>

typedef struct Lista
{
    struct Lista *next;
    int number;

}Lista;
int power(int x, int y){
    int total=1;
    for (int i = 1; i < y; i++)
    {
        total=total*x;
    }
    
    return total;
}
Lista *addToListaEnd(Lista *head, int number){

    Lista *aux = head,*aux2;
    if(aux!=NULL){
        while (aux->next!=NULL)
        {
            aux = aux->next;
        }
        
        aux2 = (Lista*)malloc(sizeof(Lista));
        aux2->number = number;
        aux2->next = NULL;
        aux->next=aux2;
    }else{
        head = (Lista*)malloc(sizeof(Lista));
        head->next = NULL;
        head->number = number;
    }
    return head;

}
void PrintLista(Lista* head){

    Lista *aux = head;

    while (aux!=NULL)
    {
        printf("Number: %d\n", aux->number);
        aux = aux->next;
    }
}
Lista *ListCreate(int size, int *array){
    Lista *head,*aux,*auxB;


    if(size>0){
        head = (Lista*)malloc(sizeof(Lista));
        head->next = NULL;
        head->number = array[0];
    }else{
        exit(0);
    }

    for (int i = 1; i < size; i++)
    {
        aux = (Lista*)malloc(sizeof(Lista));
        aux->next = NULL;
        aux->number = array[i];

        if (i == 1)
        {
            head->next = aux;
            auxB = aux;
        }else{
            auxB->next=aux;
            auxB = auxB->next;
        }
        
    }

    return head; 
}
Lista *addTwoNumbers(Lista *l1, Lista *l2){

    float num1 = 0, num2 = 0,TotalMult1=-1,TotalMult2=-1;
    int finalResult;
    Lista *aux = l1,*aux2 = l2;

    while (aux!=NULL||aux2!=NULL)
    {
        if (aux!=NULL)
        {
            if (TotalMult1==-1)
            {
                num1 = aux->number;
                TotalMult1++;
            }else{
                num1 /= 10; 
                num1 += aux->number;
                TotalMult1++;

            }
            aux = aux->next;
        }


        if (aux2!=NULL)
        {
            if (TotalMult2==-1)
            {
                num2 = aux2->number;
                TotalMult2++;

            }else{
                num2/=10;
                num2 += aux2->number;
                TotalMult2++;   
            }
            aux2 = aux2->next;
        }
        
    }
    num1 = (power(10,TotalMult1+1))*num1;
    num2 = (power(10,TotalMult2+1))*num2;
    finalResult = num1+num2;
    Lista *resultHead = NULL;
    while (finalResult>=0)
    {
        resultHead = addToListaEnd(resultHead,finalResult%10);
        finalResult=finalResult/10;
        if (finalResult==0)
        {
            finalResult-=1;
        }
        
    }

    return resultHead;
}
int main(){
    int array1[1] = {0};
    int array2[1] = {0};
    Lista *l1 = ListCreate(1,array1);
    Lista *l2 = ListCreate(1,array2);
    Lista *result = addTwoNumbers(l1,l2);
    PrintLista(result);
    return 0;
}