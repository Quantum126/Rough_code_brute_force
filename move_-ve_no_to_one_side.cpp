#include<stdio.h>
int main()
{
    int arr[]={1,-1,3,2,-7,-5,11,6};
    

    int store_value=0;
    int size = 8, index_no=0 ;
    int previous_index_no;
    int count=0;

    // count the total positive no 
    for(int k=0;k<size;k++)
    {
        if(arr[k]>0)
        count++;
    }
    
   
    // This loop will run and find the negative no and negative no's index no 

    for(int k=0;k<size;k++)
    {
        for(int i=0;i<size;i++)
        {
           // printf("%d ",arr[i]);
            if(arr[i]<0){
            index_no = i;

            store_value =arr[i];
          
            break;
            }
            
        }
     // printf("index value %d\n",index_no);

      if (index_no != count)
      {
    
        for(int j=index_no;j<size-1;j++)
            {
                
                arr[j]=arr[j+1];
            }
                
        arr[size-1]=store_value;
       
      }
     
    }
    //printf("new one");


    for(int i =0;i<size;i++)
    printf(" %d ",arr[i]);
}