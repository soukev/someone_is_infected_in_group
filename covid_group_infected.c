/*
** Calculating probability that person is infected in group of people
** using Birthday Paradox
 */
#include <stdio.h>
#include <math.h>

int main(void){
    float population;
    float infected;
    float sizeOfGroup;

    // Get number of people in zone
    printf("Population: ");
    scanf("%f", &population);

    // Get number of infected people in zone
    printf("Number of infected people: ");
    scanf("%f", &infected);

    printf("Size of group: ");
    scanf("%f", &sizeOfGroup);

    // calculate probability
    float isInf = infected / population; // probability that person is infected
    float isNotInf = 1 - isInf; // probability that preson is NOT infected
    float nooneIsInf = pow(isNotInf, sizeOfGroup); // probability that noone is infected in group
    float someoneIsInf = 1 - nooneIsInf; // and reverse to get probability that someone is infected in group

    printf("Probability of someone being infected is: %.2f%%\n", someoneIsInf * 100);
}
