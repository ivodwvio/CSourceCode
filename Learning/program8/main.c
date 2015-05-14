#include <stdio.h>

main()
{
	float e_days;
	float j_years;

	printf("Enter number of earth days: ");
	scanf("%f", &e_days);

	j_years = e_days / (365.0 * 12.0);

	printf("Equivalent Jovian years: %f\n", j_years);

	return 0;
}
