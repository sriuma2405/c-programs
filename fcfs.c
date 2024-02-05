#include <stdio.h>
#define max 30

int main(){
    int i,n,bt[max],at[max],wt[max],tat[max],ct[max];
    float awt=0,atat=0;

    printf("Enter the no of proccess: ");
    scanf("%d",&n);
    printf("Enter the burst time of the proecess: ");
    for(i=0;i<n;i++){
        scanf("%d",&bt[i]);
    }
    printf("Enter the arrival time  of the process: ");
    for(i=0;i<n;i++){
        scanf("%d",&at[i]);  
    }
    ct[0]=0;
    printf("process\t burst time\t arrival time\t waiting time\t turn around time\n");
    for(i=0;i<n;i++){
        wt[i]=0;
        tat[i]=0;
        ct[i+1]=ct[i]+bt[i];
        tat[i]=ct[i+1]-at[i];
        wt[i]=tat[i]-bt[i];
        awt=awt+wt[i];
        atat=atat+tat[i];
        printf(" %d\t\t%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],at[i],wt[i],tat[i]);

    }
    awt=awt/n;
    atat=atat/n;
    printf("Average waiting time is %f\n",awt);
    printf("Average turn around time is %f\n",atat);

    return 0;

}