#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void favTeam(int titles, const char team[],const char name[]) {
	printf("Hello my name is %s. My favorite team is %s and we have %d titles.\n",name, team, titles);
}
int main() {
	int x = 0,titles;
	const char team, name;
	while (x > 0) {
		printf("\nEnter your name, your favorite team, and team's total titles: ");
		scanf("%s %s %d", &name, &team, &titles);
		favTeam(titles, team, name);
	} 


	return 0;
}