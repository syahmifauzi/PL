#include <stdio.h>

int main()
{
	int i, bowler, score, total_score, tb_score = 0;

	for (bowler = 1; bowler <= 3; bowler++) {
		
		printf("Input Bowler #%d: ", bowler);

		total_score = 0;
		for (i = 1; i <= 3; i++) {
			scanf("%d", &score);
			total_score += score;
		}

		printf("Bowler #%d score is %d\n", bowler, total_score);
		tb_score += total_score;
	}

	printf("\nTotal bowlers score: %d\n", tb_score);

	return 0;
}
