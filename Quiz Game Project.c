#include<stdio.h>
int main()
{
	int i;
	int ans1,ans2,ans3,ans4,ans5;
	int p1,p2,p3,p4,p5,p6,p7,p8,p9,p10;
	int po1,po2,po3,po4,po5,po6,po7,po8,po9,po10;
	printf("WELCOME TO THE QUIZ GAME!!\n\n");
	
	printf(">>Press 7 to Start the game:\n\n");
	printf(">>Press 0 to quit the game:\n\n");
	scanf("%d",&i);
	
	if(i==7)
	{
	printf("The Game has Started\n\n");
	}else if(i==0)
	{
		printf("The game has Ended\n\n");
	}
	else
	{
		printf("Invalid\n\n");
	}
	
	if(i==7)
	{
		printf("1)Which is the first Search Engine in the internet??\n");
		printf("1)Google\n");
		printf("2)Archie\n");
		printf("3)Wais\n");
		printf("4)Altavist\n");
		
		printf("Enter your answer:\n");
		scanf("%d",&ans1);
		
		if(ans1==2)
		{
			printf("Correct Answer\n");
			p1=5;
			printf("You have Scored %d points\n",p1);
		}
		else
		{
			printf("Wrong Answer\n");
			po1=0;
			printf("You have Scored %d points\n",po1);
		}
		
		printf("2)Which one is the first web browser invented in 1990??\n");
		printf("1)Internet Explorer\n");
		printf("2)Mosaic\n");
		printf("3)Mozilla\n");
		printf("Nexus\n");
		
		printf("Enter your answer:\n");
		scanf("%d",&ans2);
		
		if(ans2==4)
		{
			printf("Correct answer\n");
			p2=5;
			printf("You have scored %d points\n",p2);
		}
		else
		{
			printf("Wrong Answer\n");
			po2=0;
			printf("You have scored %d points\n",po2);
		}
		
		printf("3)First Computer virus is known as??\n\n");
		printf("1)Rabbit\n");
		printf("2)Creeper Virus\n");
		printf("EIK cloner\n");
		printf("SCA Virus\n");
		
		printf("Enter your answer:\n");
		scanf("%d",&ans3);
		
		if(ans3==2)
		{
		printf("Correct Answer\n");
		p3=5;
		printf("You have scored %d points\n",p3);
		}
		else
		{
			printf("Wrong Answer\n");
			po3=0;
			printf("You have scored %d points\n",po3);
		}
		
		printf("4)Firewall in computer is used for??\n\n");
		printf("1)Security\n");
		printf("2)Data Transmission\n");
		printf("3)Monitoring\n");
		printf("4)Authentication\n");
		
		printf("Enter your answer:\n");
		scanf("%d",&ans4);
		
		if(ans4==1)
		{
			printf("Correct answer\n");
			p4=5;
			printf("You have scored %d points\n",p4);
		}
		else
		{
			printf("Wrong Answer\n");
			po4=0;
			printf("You have scored %d points\n",po4);
		}
		
		printf("5)Which of the following is not a database management??\n\n");
		printf("1)MySql\n");
		printf("2)Oracle\n");
		printf("3)cobal\n");
		printf("4)Sybase\n");
		
		printf("Enter your answer:\n");
		scanf("%d",&ans5);
		
		if(ans5==3)
		{
			printf("Correct Answer\n");
			p5=5;
			printf("You hace scored %d points\n",p5);
		}
		else
		{
			printf("Wrong Answer\n");
			po5=0;
			printf("You have scored %d points\n",po5);
		}
	}
		int total=p1+p2+p3+p4+p5+p6+p7+p8+p9+p10+po1+po2+po3+po4+po5+po6+po7+po8+po9+po10;
		printf("Your total Marks is %d:\n",total);
}
