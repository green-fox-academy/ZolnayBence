#include <gtest/gtest.h>
#include <string>
#include "Animal.h"

TEST(animal_eats, animal_eats_animal_Test)
{
    Animal animal;
    animal.AnimalEat();
    EXPECT_EQ(animal.getHunger(), 40);
}

TEST(animal_plays, animal_plays_ani_Test){ //project name
    Animal animal;  // object
    animal.AnimalPlay(); // actual function call on object
    EXPECT_EQ(animal.getHunger(), 51); // function getter or functionality that displays the result and the expected amount
    EXPECT_EQ(animal.getThirst(), 51);
}

TEST(animal_drinks, animal_drinks_anima_Test){
    Animal animal;
    animal.AnimalDrink();
    EXPECT_EQ(animal.getThirst(), 40);
}