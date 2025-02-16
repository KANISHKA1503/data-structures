#include<stdio.h>
#define MAX 10
int arr[MAX],num,val,loop,ch;
void create()
{
    printf("Enter the array Elements:\n");
    for( loop=0;loop<num;loop++)
    scanf("%d",&arr[loop]);
}
void display()
{
    for(loop=0;loop<num;loop++)
    printf("%d ",arr[loop]);
}
void insert()
{
    int pos;
    printf("Enter the position:");
    scanf("%d",&pos);
    printf("Enter the value to be inserted:\n");
    scanf("%d",&val);
    for(loop=num;loop>=pos;loop--)
    {
        arr[loop]=arr[loop-1];
    }
    arr[pos-1]=val;
    num++;

}
void delete()
{
    int pos;
    printf("Enter the position to be deleted:\n");
    scanf("%d",&pos);
    for(loop=pos;loop<num;loop++)
    {
        arr[loop-1]=arr[loop];
    } 
    num--;
}
int main()
{
printf("Enter the size of the array:\n");
scanf("%d",&num);
while(1)
{
    printf("\nEnter the following numbers to perform the respective operation \n1.create 2.display 3.insert 4.delete 5.exit\n");
scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        create();
        break;
        case 2:
        display();
        break;
        case 3:
        insert();
        break;
        case 4:
        delete();
        break;
        case 5:
        return 0;
        break;

    }
}
return 0;
}
