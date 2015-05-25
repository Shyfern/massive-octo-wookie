#include <iostream>
#include "Enemy.h"
#include "Player.h"

int main(){

	Enemy Jaafar;
	Jaafar.Boats = 12;
	Jaafar.Books = 0;
	Jaafar.CreatureType = 2;
	Jaafar.HitPoints = 9001;
	Jaafar.Introduction = "My name is Endigo Jaafar. You killed my father, prepare to die!";
	Jaafar.IsFemale = false;
	Jaafar.MoustacheType = 9;
	Jaafar.IsHipster = true;
	Jaafar.Volume = 100;
	Jaafar.WeaponType = 16;

	std::cout << Jaafar.Introduction << std::endl;
	std::cout << "Number of boats: " << Jaafar.Boats << std::endl;
	std::cout << Jaafar.IsFemale << std::endl;
	Player Player1;
	std::cin >> Player1.Boats;
	std::cin >> Player1.Books;
	std::cin >> Player1.CreatureType;
	Player1.HitPoints = 9002;
	std::cin >> Player1.IsFemale;
	std::cin >> Player1.MoustacheType;
	std::cin >> Player1.IsHipster;
	std::cin >> Player1.Volume;
	std::cin >> Player1.WeaponType;


	return 0;
}