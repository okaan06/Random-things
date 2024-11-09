#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void gpa(int credit,double score, double *wegihtedscore) {
	*wegihtedscore = credit * score;

}
int main() {

	int i,credit,totalCredit=0,totalCourses;		
	double score,totalWeightedscore=0,weightedScore,Gpa;
	printf("Enter your number of courses with credits: ");
	scanf("%d", &totalCourses);
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
	Gpa = totalWeightedscore / totalCredit;

	printf("Your gpa is: %.2f", Gpa);















	return 0;
}