#include <stdio.h>
#include <stdlib.h>

// Create a function
int *answer1(int* nums, int numsSize, int target) {

    int *answer1Array = (int*)malloc(sizeof(int)*2);
    int n1,n2;
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i; j < numsSize; j++)
        {
            if (i!=j)
            {
                if ((nums[i]+nums[j]) == target)
                {
                    n1=i;
                    n2=j;
                    break;
                }
                
            }
            
        }
        
    }
    answer1Array[0] = n1;
    answer1Array[1] = n2;
    return answer1Array;
}
//Só funciona com numeros positivos
//Se quiser criar um array para numeros negativos também e crio essa situação isolada(não entendo hashtables em C rsrsrs)
int *answer2(int* nums, int numsSize, int target) {
    int maxNum = 0;
    int a1,a2;
    for (int i = 0; i < numsSize; i++)
    {
        if (maxNum<nums[i])
        {
            maxNum=nums[i];
        }
        
    }

    int key[maxNum],values[maxNum];

    for (int i = 0; i < maxNum; i++)
    {
        key[i] = 0;
        values[i] = 0;
    }

    for (int i = 0; i < numsSize; i++)
    {
        if (values[target-nums[i]-1]!=0)
        {
            a1 = i;
            a2 = key[target-nums[i]-1];

        }else{
            key[nums[i]-1] = i;
            values[nums[i]-1] = nums[i];
        }
        
    }
    
    int *answer2Array = (int*)malloc(sizeof(int)*2);
    answer2Array[0] = a1;
    answer2Array[1] = a2;
    return answer2Array;
}

//respostaFinal com numeros negativos também




int main() {

    int nums[4] = {2,7,11,15};
    int numsSize = 4,target = 9;
  
    int *answer = answer1(nums,numsSize,target);  // call the function
    printf("First method - %d %d\n",answer[0],answer[1]);
    free(answer);

    answer = answer2(nums,numsSize,target);  // call the function
    printf("Second method - %d %d\n",answer[0],answer[1]);

    return 0;
}