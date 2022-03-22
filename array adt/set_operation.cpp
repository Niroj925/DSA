#include<stdio.h>
#include<stdlib.h>
struct Array
{    int A[10];  
  int size;   
   int length;
   };
   void Display(struct Array arr)
   {    int i;    
   printf("\nElements are\n");
       for(i=0;i<arr.length;i++) 
       {
         printf("%d ",arr.A[i]);
         }
   }
 struct Array* Union(struct Array *arr1,struct Array *arr2)
 {
    int i,j,k;  
      i=j=k=0; 
         struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));  
         arr3->length=arr1->length+arr2->length;
          while(i<arr1->length && j<arr2->length)   
           { 
            if(arr1->A[i]==arr2->A[j])
            {
                i++;
                arr3->length--;
            }
           else if(arr1->A[i]<arr2->A[j])
           { 
             arr3->A[k++]=arr1->A[i++];  
             }
            else   
            { 
            arr3->A[k++]=arr2->A[j++];  
              } 
           }
           /*
          for(;i<arr1->length;i++) 
          {
           arr3->A[k++]=arr1->A[i];  
           }
             for(;j<arr2->length;j++) 
             {       
               arr3->A[k++]=arr2->A[j];
               }
               */
               // arr3->length=arr1->length+arr2->length;  
                 arr3->size=10; 
                   return arr3;
          
  }
   struct Array* inter(struct Array *arr1,struct Array *arr2)
 {
    int i,j,k;  
      i=j=k=0; 
         struct Array *arr4=(struct Array *)malloc(sizeof(struct Array));  
         arr4->length=arr1->length+arr2->length;
          while(i<arr1->length && j<arr2->length)   
           { 
            if(arr1->A[i]==arr2->A[j])
            {
                arr4->A[k++]=arr1->A[i];
            } 
           }
         /* for(;i<arr1->length;i++) 
          {
           arr4->A[k++]=arr1->A[i];  
           }
             for(;j<arr2->length;j++) 
             {       
               arr3->A[k++]=arr2->A[j];
               } 
                 arr3->size=10; 
                 */
                   return arr4;
          
  }
 int main()
{    
     struct Array arr1={{2,6,10,15,25},10,5};   
     struct Array arr2={{3,6,7,15,20},10,5}; 
     struct Array *arr3 ,*arr4; 
    // struct Array *arr4;
    arr3=Union(&arr1,&arr2);
    Display(*arr3);
   // arr4=inter(&arr1,&arr2);
    //Display(*arr4);
    return 0;
      }