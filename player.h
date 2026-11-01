//.h is used to declare functions and variables that will be used in the corresponding .c file.
#ifndef PLAYER_H//#ifndef is for declaration of the header file
#define PLAYER_H//#define is for defining the header file

int totalHealth(int baseHealth, int bonus);
float averageDamage(float minDamage, float maxDamage);
float damagePerSecond(float damage, float attacksPerSecond);
float energyPercentage(float currentEnergy, float maxEnergy);

#endif//#endif is for ending the declaration of the header file