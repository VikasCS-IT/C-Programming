#include<stdio.h>
void atSort(int n, int pid[], int at[], int bt[]);
void btSort(int n, int pid[], int at[], int bt[]);
 int main()
{
    int at[20],bt[20],pid[20],wt[20],ct[20],tat[20],st,i,j,n,sum=0,temp,ptemp,btemp,at_flag=0,bt_flag=0;
    int t_p[20],t_at[20],t_bt[20],totat=0,towt=0;
    float avg_wt,avg_tat;
    printf("Enter number of process:");
    scanf("%d",&n);
    printf("\nEnter arival and Burst Time:\n");
    for(i=0;i<n;i++)
    {
        printf("p%d:",i+1);
        scanf("%d",&at[i]);
        scanf("%d",&bt[i]);
        pid[i]=i+1;
    }
    for(i=0;i<n;i++){
        if(at[0]==at[i])
            continue;
        else
            at_flag = 1;
            break;
    }
    for(i=0;i<n;i++){
        if(bt[0]==bt[i])
            continue;
        else
            bt_flag = 1;
            break;
    }

    if(at_flag==0)
    {
        btSort(n,pid,at,bt); // Sorting pid, at and bt
    }
    else if(bt_flag==0){

        atSort(n,pid,at,bt); // Sorting pid, at and bt
    }
    else
    {
        atSort(n,pid,at,bt); // Sorting pid, at and bt
        for(i=0;i<n;i++){
            t_p[i] = pid[i];
            t_at[i] = at[i];
            t_bt[i] = bt[i];
            if(i == 0)
                break;
        }
        int pp[n-1], aat[n-1], bbt[n-1];
        for(i=0;i<n;i++){
            pp[i] = pid[i+1];
            aat[i] = at[i+1];
            bbt[i] = bt[i+1];
        }

        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n-1; j++)
            {
                if(bbt[i]>bbt[j])
                {
                    ptemp = pp[i];
                    pp[i] = pp[j];
                    pp[j] = ptemp;
                    temp = aat[i];
                    aat[i] = aat[j];
                    aat[j] = temp;
                    btemp = bbt[i];
                    bbt[i] = bbt[j];
                    bbt[j] = btemp;
                }
            }
        }

        for(j=0; j<n-1; j++)
        {
            t_p[j+1] = pp[j];
            t_at[j+1] = aat[j];
            t_bt[j+1] = bbt[j];
        }

        for(i=0; i<n; i++)
        {
            pid[i] = t_p[i];
            at[i] = t_at[i];
            bt[i] = t_bt[i];
        }
    }
    for(i=0;i<n;i++){
        sum = sum + bt[i];
        ct[i] = sum;            // Calculating ct
        tat[i] = ct[i] - at[i]; // Calculating tat
        wt[i] = tat[i] - bt[i]; // Calculating wt
        totat += tat[i];        // Calculating totat
        towt += wt[i];          // Calculating towt
    }

    /*wt[0]=0;
    for(i=1;i<n;i++)
    {
        wt[i] = wt[i-1] + bt[i-1];
        towt+=wt[i];
    }*/
    printf("\nProcess\t  Arival Time\t  Burst Time  \tCompTime\tTurnaroundTime\tWaiting Time");
    for(i=0;i<n;i++)
    {

        //towt+=wt[i];
        //totat+=tat[i];
        printf("\np%d\t\t   %d\t\t  %d\t\t    %d\t\t  %d\t\t %d",pid[i],at[i],bt[i],ct[i],tat[i],wt[i]);
    }
    avg_wt=(float)towt/n;
    avg_tat=(float)totat/n;
    printf("\n\nAverage Waiting Time = %f",avg_wt);
    printf("\nAverage Turnaround Time = %f\n",avg_tat);
}

// Sorting at and bt
void atSort(int n, int pid[], int at[], int bt[])
{
    int i, j, temp, btemp, ptemp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
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
// Sorting at and bt
void btSort(int n, int pid[], int at[], int bt[])
{
    int i, j, temp, btemp, ptemp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(bt[i]>bt[j]){
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
