#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 80

int 
main (int argc, char *argv[])
{
	int rnd = 0;

	int totalCreds = 100;
	int health = 0;
	int attack = 0;
	int mana = 0;
	
	char name[MAX_LEN];
	int age;
	char gender;
	
	int count = 0;

	char c = '0';

	printf("Welcome to the Player Creation Tool.\n");
	while(1) {
		count++;
		if(count >= 10) {
			printf("Are you being obtuse on purpose, or are you genuinely stupid?\n");
			count = 0;
		}
		printf("What is your name?\n");
		scanf ("%s", name);
		printf("You entered: %s. Press y to confirm. Press any other key to re-enter.\n", name);
		getchar(); // consumes the new line character
		c = getchar();
		if(c == 'y' || c == 'Y'){
			break;	
		}
	}

	while(1) {
		count++;
		if(count >= 10) {
			printf("Are you being obtuse on purpose, or are you genuinely stupid?\n");
			count = 0;
		}
		printf("Are you male or female? Type M for male and F for female\n");
		getchar(); // consumes the new line character
		gender = getchar();
		if(gender == 'm' || gender == 'M'){
			gender = 'M';
			printf("Ah, so you're a bloke, eh? Press y to confirm. Press any other key to re-enter.\n");
			getchar(); // consumes the new line character
			c = getchar();
			if(c == 'y' || c == 'Y'){
				break;	
			}
		}
		if(gender == 'f' || gender == 'F'){
			gender = 'F';
			printf("Enchante mademoiselle. Press y to confirm. Press any other key to re-enter.\n");
			getchar(); // consumes the new line character
			c = getchar();
			if(c == 'y' || c == 'Y'){
				break;	
			}
		}
		else{
			printf("I get it. You don't subscribe to gender binaries. That's cool. Still, humour me\n");
			// getchar(); // consumes the new line character
		}
	}

	while(1) {
		count++;
		if(count >= 10) {
			printf("Are you being obtuse on purpose, or are you genuinely stupid?\n");
			count = 0;
		}
		printf("Alright, so how old are you?\n");
		scanf ("%i", &age);

		if(age<= 0){
			printf("Okay that is definitely too young to be playing this game.\n");
		}
		else{
			if (age >= 100) {
				printf("Haha, yeah right. Whatever, I'll allow it.\n");
			}
			printf("Really? %i. Wow, you need to sleep more... You sure? Press y\n", age);
			getchar(); // consumes the new line character
			c = getchar();
			if(c == 'y' || c == 'Y'){
				break;	
			}
		}
	}
	
	printf("Welcome %s. Let's continue\n", name);
	printf("You will have 100 points to spend on Health, Attack and Mana.\n");
	printf("Health determines how much total health you have\n");
	printf("Attack determines how much damage you deal to enemies\n");
	printf("Mana determines how effective health potions will be\n");
	printf("(Just go with it...)\n");

	while(1) {
		count++;
		if(count >= 15) {
			printf("Are you being obtuse on purpose, or are you genuinely stupid?\n");
			count = 0;
		}
		printf("How much do you want to allocate to health? Or just enter 150 to generate\n");
		printf("random values. Be warned, it's not really a good idea.\n");
		while(1){
			count++;
			if(count >= 15) {
				printf("Are you being obtuse on purpose, or are you genuinely stupid?\n");
				count = 0;
			}
			scanf("%i", &health);
			getchar(); // consumes the new line character

			if(health<= 0){
				printf("Sorry, that is an invalid value. please enter something that makes sense\n");
			}

			else if(health == 150) {
				rnd = 1;
				health = rand() %80;
				totalCreds = totalCreds - health;
				attack = rand() %(totalCreds-5);
				mana = totalCreds - attack;
				totalCreds = 100;
				break;
			}
			else if (health >= totalCreds - 1) {
				printf("I'm sorry, %s. I can't let you do that.\n", name);
			}
			else{
				totalCreds = totalCreds - health;
				break;
			}	
		}

		if(rnd != 1){
			printf("You now have %i points left for Attack and Mana. Choose wisely.\n", totalCreds);
			printf("How much do you want to allocate to Attack?\n");

			while(1){
				count++;
				if(count >= 15) {
					printf("Are you being obtuse on purpose, or are you genuinely stupid?\n");
					count = 0;
				}
				scanf("%i", &attack);
				if(attack<= 0){
					printf("Sorry, that is an invalid value. please enter something that makes sense\n");
				}
				else if (attack >= totalCreds) {
					printf("I'm sorry, %s. I can't let you do that.\n", name);
				}
				else{
					totalCreds = totalCreds - attack;
					mana = totalCreds;
					totalCreds = 0;
					break;
				}	
			}
		}

		printf("Great! You've chosen to have:\n");
		printf("Health: %i.\n", health);
		printf("Attack: %i.\n", attack);
		printf("  Mana: %i.\n", mana);

		printf("Press y to confirm. Press any other key to re-enter.\n", name);
		getchar(); // consumes the new line character
		c = getchar();
		if(c == 'y' || c == 'y'){
			break;	
		}
		else{
			rnd = 0;
		}
	}

	printf("Great! You're all set. Try not to die.\n");

	FILE* f = fopen("player.txt", "w");
	if (f == NULL) {
		printf("Error opening file!\n");
		fclose(f);		
		return(0);
	}
	
	/* print player name */
	fprintf(f, "%s\r\n", name);
	fprintf(f, "%c\r\n", gender);
	fprintf(f, "%i\r\n", age);

	/* print player attributes */
	fprintf(f, "%i\r\n", health);
	fprintf(f, "%i\r\n", attack);
	fprintf(f, "%i\r\n", mana);

	fclose(f);

	return 0;
}