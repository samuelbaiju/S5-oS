#include<stdio.h>

void main()

{

    int n;

    printf("enter the no of process=");

    scanf("%d",&n);

    int bt[n],at[n],ct[n],wt[n],tat[n],pid[n],i,j,temp,t=0,c[n],count=1,change=0;

    for(i=0;i<n;i++)

    {

        pid[i]=i+1;

        c[i]=0;

    }

    for(i=0;i<n;i++)

    {

        printf("enter the at and bt of %d process ",i+1);

        scanf("%d%d",&at[i],&bt[i]);

    }

    for(i=0;i<n;i++)

    {

        for(j=0;j<n-i-1;j++)

        {

            if(at[j]>at[j+1])

            {

                temp=bt[j];

                bt[j]=bt[j+1];

                bt[j+1]=temp;

                temp=at[j];

                at[j]=at[j+1];

                at[j+1]=temp;

                temp=pid[j];

                pid[j]=pid[j+1];

                pid[j+1]=temp;

            }

            

        }

        

    }

    for(i=0;i<n;i++)

    {

    for(j=0;j<n;j++)

    {

     if(at[j]==at[j+1])

            {

                if(bt[j]>bt[j+1])

                {

                temp=bt[j];

                bt[j]=bt[j+1];

                bt[j+1]=temp;

                temp=at[j];

                at[j]=at[j+1];

                at[j+1]=temp;

                temp=pid[j];

                pid[j]=pid[j+1];

                pid[j+1]=temp;

                }

            }

    }}

    ct[0]=at[0]+bt[0];

    t=ct[0];

    c[0]=1;

    for(i=1;i<n;i++)

    {

        for(j=1;j<n-1;j++)

        {

            if(bt[j]>bt[j+1])

            {

                temp=bt[j];

                bt[j]=bt[j+1];

                bt[j+1]=temp;

                temp=at[j];

                at[j]=at[j+1];

                at[j+1]=temp;

                temp=pid[j];

                pid[j]=pid[j+1];

                pid[j+1]=temp;

            }

           

        }

    }

    for(j=0;j<n;j++)

    {

     if(bt[j]==bt[j+1])

            {

                if(at[j]>at[j+1])

                {

                temp=bt[j];

                bt[j]=bt[j+1];

                bt[j+1]=temp;

                temp=at[j];

                at[j]=at[j+1];

                at[j+1]=temp;

                temp=pid[j];

                pid[j]=pid[j+1];

                pid[j+1]=temp;

                }

            }

    }

    while(count<n)

    {

        for(i=1;i<n;i++)

        {

            if(at[i]<=t&&c[i]==0)

            {

                ct[i]=t+bt[i];

                t=ct[i];

                c[i]=1;

                count++;

                change=1;

                break;

            }

        }

        if(change==0)

        {

            t++;

        }

        change=0;

    }

      

int ttat=0;
int ttwt=0;
    

    for(i=0;i<n;i++)

    {

        tat[i]=ct[i]-at[i];
        wt[i]=tat[i]-bt[i];

    }
    
    for(i=0;i<n;i++)

    {

        
        ttat=ttat+tat[i];
        ttwt=ttwt+wt[i];

    }
    

    printf("pid\t\tat\t\tbt\t\tct\t\ttat\t\twt\n\n");

    for(i=0;i<n;i++)

    {

        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",pid[i],at[i],bt[i],ct[i],tat[i],wt[i]);

 }
 float atat,atwt;
 atwt=ttwt/n;
 atat=ttat/n;
 printf("average turnaround time=%f",atat);
 printf("average waiting time=%f",atwt);
 

}

