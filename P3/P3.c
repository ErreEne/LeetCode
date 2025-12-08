#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Lista
{
    struct Lista *next;
    char letter;

}Lista;

Lista *addToListaEnd(Lista *head, int letter){

    Lista *aux = head,*aux2;
    if(aux!=NULL){
        while (aux->next!=NULL)
        {
            aux = aux->next;
        }
        
        aux2 = (Lista*)malloc(sizeof(Lista));
        aux2->letter = letter;
        aux2->next = NULL;
        aux->next=aux2;
    }else{
        head = (Lista*)malloc(sizeof(Lista));
        head->next = NULL;
        head->letter = letter;
    }
    return head;

}

int checkIfDuplicate(char a,Lista *head){
    Lista *aux  =head;
    while (aux!=NULL)
    {
        if (a==aux->letter)
        {
            return 1;
        }
        
    }
    
    return 0;

}

int lengthOfLongestSubstring(char* s){

    Lista *bigList, *comp;
    for (int i = 0; i < strlen(s); i++)
    {
        
    } 

}


int main(){


}