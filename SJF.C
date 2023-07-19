#include<stdio.h>
 int main()
{
    int at[20],bt[20],p[20],wt[20],tat[20],i,j,n,total=0,pos,temp,ptemp,btemp,at_flag=0,bt_flag=0;
    int t_p[20],t_at[20],t_bt[20];
    float avg_wt,avg_tat;
    printf("Enter number of process:");
    scanf("%d",&n);
    printf("\nEnter arival and Burst Time:\n");
    for(i=0;i<n;i++)
    {
        printf("p%d:",i+1);
        scanf("%d",&at[i]);
        scanf("%d",&bt[i]);
        p[i]=i+1;
    }
    for(i=0;i<n;i++){
        if(at[i]==0)
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
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                if(bt[i]>bt[j])
                {
                    ptemp = p[i];
                    p[i] = p[j];
                    p[j] = ptemp;
                    temp = at[i];
                    at[i] = at[j];
                    at[j] = temp;
                    btemp = bt[i];
                    bt[i] = bt[j];
                    bt[j] = btemp;
                }
            }
        }
    }
    else if(bt_flag==0){
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                if(at[i]>at[j])
                {
                    ptemp = p[i];
                    p[i] = p[j];
                    p[j] = ptemp;
                    temp = at[i];
                    at[i] = at[j];
                    at[j] = temp;
                    btemp = bt[i];
                    bt[i] = bt[j];
                    bt[j] = btemp;
                }
            }
        }
    }
    else
    {
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                if(at[i]>at[j])
                {
                    ptemp = p[i];
                    p[i] = p[j];
                    p[j] = ptemp;
                    temp = at[i];
                    at[i] = at[j];
                    at[j] = temp;
                    btemp = bt[i];
                    bt[i] = bt[j];
                    bt[j] = btemp;
                }
            }
        }
        for(i=0;i<n;i++){
            t_p[i] = p[i];
            t_at[i] = at[i];
            t_bt[i] = bt[i];
            if(i == 0)
                break;
        }
        int pp[n-1],aat[n-1],bbt[n-1];
        for(i=0;i<n;i++){
            pp[i] = p[i+1];
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
            p[i] = t_p[i];
            at[i] = t_at[i];
            bt[i] = t_bt[i];
        }
    }

    wt[0]=0;
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
        total+=wt[i];
    }
    total=0;
    printf("\nProcess\t  Arival Time\t  Burst Time  \tWaiting Time\tTurnaround Time");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        total+=tat[i];
        printf("\np%d\t\t   %d\t\t  %d\t\t    %d\t\t%d",p[i],at[i],bt[i],wt[i],tat[i]);
    }
    avg_wt=(float)total/n;
    avg_tat=(float)total/n;
    printf("\n\nAverage Waiting Time=%f",avg_wt);
    printf("\nAverage Turnaround Time=%f\n",avg_tat);
}
