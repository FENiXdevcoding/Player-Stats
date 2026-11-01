//main.c is where the program execution starts
#include <stdio.h>
#include "player.h"//including the header file to use the declared functions

int main() {
    int baseHealth = 100;
    int healthBonus = 25;

    float minDamage = 12.0f;
    float maxDamage = 20.0f;

    float attacksPerSecond = 1.5f;

    float currentEnergy = 75.0f;
    float maxEnergy = 100.0f;

    int health = totalHealth(baseHealth, healthBonus);
    float avgDamage = averageDamage(minDamage, maxDamage);
    
    float dps = damagePerSecond(avgDamage, attacksPerSecond); 
    float energyPct = energyPercentage(currentEnergy, maxEnergy);

    printf("Total Health: %d\n", health);
    printf("Mean DMG: %.2f\n", avgDamage);
    printf("DPS: %.2f\n", dps);
    printf("Energy Available: %.2f%%\n", energyPct);

    return 0;
}