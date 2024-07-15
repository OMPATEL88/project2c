#include<stdio.h>
main(){
	int i;
	printf("what's the markes :");
	scanf("%d",&i);
	char a = i>=90?'A':i>=80?'B':i>=70?'C':i>=60?'D':i>=50?'E':'F';
	printf("Your grade is :%c\n",a);
	switch(a){
	    case 65: printf("Excellent Work");
		break;
		case 66: printf("Well done");
		break;
		case 67: printf("Good job");
		break;
		case 68: printf("You passed");
		break;
		case 69: printf("you can do better");
		break;
		case 70: printf("Sorry you are fail");
		break;
	}
	printf("\n");
	if(i=65){
		printf("Congratulations!You are eligible for the next level");
		}
		else if(i=66){
		printf("Congratulations!You are eligible for the next level");
		}
		else if(i=67){
		printf("Congratulations!You are eligible for the next level");
		}
		else if(i=68){
		printf("Congratulations!You are eligible for the next level");
	}
	else if(i=69){
		printf("Congratulations!You are eligible for the next level");
	}
	else {
		printf("Please try again next time");
	}
}

