#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void gpa(int credit,double score, double *wegihtedscore) {
	*wegihtedscore = credit * score;

}
int main() {

	int i,credit,totalCredit=0,totalCourses;		
	double score,totalWeightedscore=0,weightedScore,Gpa;
	do {    
	printf("Enter your number of courses with credits: ");
	scanf("%d", &totalCourses);
	} while (totalCourses = 0);
	do {

	for (i = 1; i <= totalCourses; i++) {
		printf("\nEnter the courses credit: ");
		scanf("%d", &credit);
		do{ 
		printf("Enter your score: ");
		scanf("%lf", &score);
		} while (!(score >= 0 && score <= 4));
		gpa(credit, score, &weightedScore);
		totalWeightedscore += weightedScore;
		totalCredit += credit;

	}
	} while (totalCredit = 0);
	Gpa = totalWeightedscore / totalCredit;

	printf("Your gpa is: %.2f", Gpa);
	if (Gpa = 4)
		printf("\nYou are HIGH HONOUR student.");
	else if (Gpa < 4 && Gpa >= 3)
		printf("\nYou are HONOUR student.");
	else if (Gpa < 3 && Gpa>= 2)
		printf("\nYou are SATISFACTORY student.");
	else if (Gpa < 2 && Gpa >= 1.80)
		printf("\nYou are PROBATION student.");
	else
		printf("\nYou are UNSATISFACTORY student.");





	return 0;
}