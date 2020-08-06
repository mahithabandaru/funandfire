#include<stdio.h>
main()
{
	int item;
	printf("Items available :\n1.Pizza-Rs 239 \n2.Burger-Rs 129\n3.Pasta-Rs 179\n4.French Fries-Rs 99\n5.Sandwich-Rs 149\n");
	printf("Select an item");
	scanf("%d",&item);
	switch(item)
	{
    case 1 :printf("Item :Pizza\nPrice-Rs 239");
    break;
	case 2 :printf("Item :Burger\nPrice-Rs 129");
	break;
	case 3 :printf("Item :Pasta\nPrice-Rs 179");
	break;
	case 4 :printf("Item : French Fries\nPrice-Rs 99");
	break;
	case 5 :printf("Item :Sandwich\nPrice-Rs 149");
	break;
	default:printf("Please select any available items :(");
}
	}
