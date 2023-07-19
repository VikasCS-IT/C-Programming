// Implementation FCFS CPU scheduling algorithm.

#include<stdio.h>
#include<conio.h>
void sort(int n, char *pid[], int at[], int bt[]);
void main()
{
    int i, n, sum=0;
    int at[10], bt[10], wt[10], tat[10], ct[10];
    int towt = 0, totat = 0;
    float awt, atat;
    char *pid[] = {"P0","P1","P2","P3","P4","P5","P6","P7","P8","P9"};
    printf("Enter number of process ID : ");
    scanf("%d",&n);
    printf("Enter Arrival time\n");
    for(i=1;i<=n;i++){
        scanf("%d",&at[i]);
    }
    printf("Enter Burst time\n");
    for(i=1;i<=n;i++){
        scanf("%d",&bt[i]);
    }
    printf("\n");

    printf("Befor sorting process is:\n\n");
    printf("************************\n");
    printf("PID\tAT\tBT\n");
    printf("************************\n");

    for(i=1;i<=n;i++){
        printf("%s\t%d\t%d\n",pid[i],at[i],bt[i]);
    }
    printf("************************\n");

    sort(n,&pid,at,bt); // Sorting pid, at and bt

    for(i=1;i<=n;i++){
        sum = sum + bt[i];
        ct[i] = sum;            // Calculating ct
        tat[i] = ct[i] - at[i]; // Calculating tat
        wt[i] = tat[i] - bt[i]; // Calculating wt
        totat += tat[i];        // Calculating totat
        towt += wt[i];          // Calculating towt
    }

    awt=(float)towt/n;
    atat=(float)totat/n;

    printf("After calculating time of process is:\n");
    printf("PID: Process ID\nAT: Arrival Time\nBT: Burst Time\nWT: Waiting Time\nTAT: Turnaround Time\nCT: Completion Time\n\n");
    printf("*******************************************\n");
    printf("PID\tAT\tBT\tCT\tTAT\tWT\n");
    printf("*******************************************\n");

    for(i=1;i<=n;i++){
        printf("%s\t%d\t%d\t%d\t%d\t%d\n",pid[i],at[i],bt[i],ct[i],tat[i],wt[i]);
    }
    printf("\nAverage waiting time is : %f",awt);
    printf("\nAverage turnaroundtime is:%f",atat);
    printf("\n*******************************************");
}

// Sorting at and bt
void sort(int n, char *pid[], int at[], int bt[])
{
    int i, j, temp, btemp;
    int *ptemp;
    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if(at[i]>at[j]){
                // Sort PID
                ptemp = pid[i];
                pid[i] = pid[j];
                pid[j] = ptemp;
                // Sort Arrival time
                temp = at[i];
                at[i] = at[j];
                at[j] = temp;
                // Sort Burst time
                btemp = bt[i];
                bt[i] = bt[j];
                bt[j] = btemp;
            }
        }
    }
}
