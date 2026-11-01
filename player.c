//player.c is the implementation file where the functions declared in player.h are defined.
#include "player.h"//including the header file to use the declared functions 

int totalHealth(int baseHealth, int bonus) {
    return baseHealth + bonus;
}
float averageDamage(float minDamage, float maxDamage) {
    return (minDamage + maxDamage) / 2.0f;
}
float damagePerSecond(float damage, float attacksPerSecond) {
    return damage * attacksPerSecond;
}
float energyPercentage(float currentEnergy, float maxEnergy) {
    return (currentEnergy / maxEnergy) * 100.0f;
}