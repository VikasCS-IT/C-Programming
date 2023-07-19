#include<stdlib.h>
#include<memory.h>
// Function to allocate memory to
// blocks as per First fit algorithm
void First_Fit(int block_size[], int total_blocks, int process_size[], int total_process) {
   int allocation[total_process],k = 0;
   memset(allocation, -1, sizeof(allocation));
   //this for loop wll pick eact process and allocate a first fit block to it
   for (int i = k; i < total_process; i++) {
      for (int j = i; j < total_blocks; j++) {
         if (block_size[j] >= process_size[i]) {
            allocation[i] = j;
            k++;
            break;
         }
      }
   }
   printf("\n Process No.\tProcess Size\tBlock no.\n");
   for (int i = 0; i < total_process; i++) {
      printf(" %d\t\t%d\t\t",i+1,process_size[i]);
      if (allocation[i] != -1)
         printf("%d\n",allocation[i] + 1);
      else
         printf("Not Allocated\n");
   }
   printf("\nAbove are Internal Fragmentation.\n");
   printf("\nAfter complete process_size -> 47 and free block_size -> 50\n");
   printf("\n Process No.\tProcess Size\tBlock no.\n");
   for (int i = 0; i < total_process; i++) {
      if(i == 1){
        continue;
      }
      else{
        printf(" %d\t\t%d\t\t",i+1,process_size[i]);
      if (allocation[i] != -1)
         printf("%d\n",allocation[i] + 1);
      else
         printf("Not Allocated\n");
      }
   }
   printf("\nAbove are External Fragmentation because block no 2 and 5 are block_size(50+70=120)\n then not allocate process_size 100\n");
}
int main() {
   //create array to store block sizes
   int block_size[] = {220, 50, 200, 350, 70};
    //create array to store process sizes
   int process_size[] = {200, 47, 180, 300, 100};
    //variable total_blocks that contain total number of blocks
   int total_blocks = sizeof(block_size) / sizeof(block_size[0]);
    //variable total_process that contain total number of blocks
   int total_process = sizeof(process_size) / sizeof(process_size[0]);
   int allocation[total_process],i;
   printf("Process allocation using First Fit\n");
    //calling the function First_fit
   First_Fit(block_size, total_blocks, process_size, total_process);
   return 0 ;
}
