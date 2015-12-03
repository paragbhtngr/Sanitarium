#include <stdio.h>

#define MAX_LEN 80

int 
main (int argc, char *argv[])
{
	int totalCreds = 100;
	int health = 0;
	int attack = 0;
	int mana = 0;
	char name[MAX_LEN];
	
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
		if(c == 'y' || c == 'y'){
			break;	
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
		printf("How much do you want to allocate to health?\n");
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
			else if (health >= totalCreds - 1) {
				printf("I'm sorry, %s. I can't let you do that.\n", name);
			}
			else{
				totalCreds = totalCreds - health;
				break;
			}	
		}

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

	/* print player attributes */
	fprintf(f, "%i\r\n", health);
	fprintf(f, "%i\r\n", attack);
	fprintf(f, "%i\r\n", mana);

	fclose(f);

	return 0;
}