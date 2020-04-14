#include<stdio.h>
void main()
{
  int choice;
  printf("Enter your option please \n");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
      printf("Food item -Pizza\n");
      printf("Price - Rs 239\n");
      break;
    case 2:
      printf("Food item -Burger\n");
      printf("Price - Rs 129\n");
      break;
    case 3:
      printf("Food item -Pasta\n");
      printf("Price - Rs 179\n");
      break;
    case 4:
      printf("Food item -French Fries\n");
      printf("Price - Rs 99\n");
      break;
    case 5:
      printf("Food item -Sandwich\n");
      printf("Price - Rs 149\n");
      break;
    default: printf("Your entered option is not in the list\n");
  }
}
    
