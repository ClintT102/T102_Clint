#include <stdio.h>
int main(){
int n, num =0;
    //enter the number you want to convert it to word//
    printf("[Convert number to word]\n");
    printf("Enter number to convert it to word:");
    scanf("%d", &n);  
    //reverse   
    while(n!=0)
{
    num = (num*10)+(n%10);
    n/=10;       
} 
    while(num!=0)
 {
     switch(num%10)
    {
      case 0:
       printf("zero");
    break;
    case 1:
       printf("one");
    break;
    case 2:
       printf("two");
    break;
    case 3:
       printf("three");
    break;
    case 4:
       printf("four");
    break;
    case 5:
       printf("five");
    break;
    case 6:
       printf("six");
    break;
    case 7:
       printf("eight");
    break;
    case 8:
       printf("nine");
    break;
    case 9:
       printf("ten");
    break;
  
    default:
    printf("invalid it's not a number");
    }
    
    num =num/10;
}



return 0;
}
 
    