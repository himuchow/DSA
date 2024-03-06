#include <stdio.h>
#define MAX 5
int cq[MAX],f=-1,r=-1;
void cqenq(int x)
{
    if ((r+1)%MAX==f){
    printf("---QUEUE IS OVERFLOW---/n");
    return;
}
    r=(r+1)%MAX;
    cq[r]=x;
    if(f==-1)
    f=0;


}
void cqdeq(){
    int t;
    if(f==-1 && r==-1){
    printf("----QUEUE IS UNDER FLOW----");
    return;

}
t=cq[f];
  f=(f+1)%MAX;
  printf("Deleted item is %d \n",t);
return;
}
void cqdispQ()
{
    int i;
   if(f!=-1&&r!=-1){
    printf("queue contains:\n");
   if(f<=r)
    {
        for(i=f;i<=r;i++)
        {
            printf("%d  ",cq[i]);
        }

    }


   else{
       for(i=f;i<MAX;i++)
       printf("%d",cq[i]);
       for(i=0;i<=r;i++);
       printf("%d",cq[i]);


   }
   } else
    {
        printf("---The queue is empty---\n");
    }


}
 void main()
{
    int x,y;
    do{
        printf("\n---Queue menu---\n");
        printf("1.Insert element\n");
        printf("2. Delete an element\n");
        printf("3. Display the queue \n" );
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&x);

    switch(x)
    {
      case 1 :
      printf("\nEnter an elemnet to insert:");
      scanf("%d",&y);
      cqenq(y);
      break;

      case 2:
       cqdeq();
       break;

      case 3 :
      cqdispQ();
      break;

      case 4:
      printf("Good day");
      break;

      default:
      printf ("Invalid input");



    }
} while(x!=4);



}
