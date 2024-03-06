#include <stdio.h>
#define MAX 5
int q[10],f=-1,r=-1;
void enq(int x)
{
    if (r==MAX-1){
    printf("---QUEUE IS OVERFLOW---/n");
    return;
}
    r++;
    q[r]=x;
    if(f==-1)
    f=0;


}
void deq(){
    int t;
    if(f==-1 && r==-1){
    printf("----QUEUE IS UNDER FLOW----");
    return;

}
t=q[f];
  f++;
  printf("Deleted item is %d \n",t);
return;
}
void dispQ()
{
    int i;
    if(f!=-1&&r!=-1){
    printf("queue contains:\n");
    for(i=f;i<=r;i++)

{
    printf("%d  ",q[i]);
}
    }
   else

  {

       printf("Empty queue\n");
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
      enq(y);
      break;

      case 2:
       deq();
       break;

      case 3 :
      dispQ();
      break;

      case 4:
      printf("Good day");
      break;

      default:
      printf ("Invalid input");



    }
} while(x!=4);



}

