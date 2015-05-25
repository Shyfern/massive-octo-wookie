#pragma once

#include <string>

class Enemy
{
public:
	std::string Introduction;

	/*
	Beard = 0
	Chin curtain
	Chin strap beard
	Clean shaven
	Friendly muttonchops
	Fu Manchu = 5
	Goat patch
	Goatee
	German Goatee
	Handlebar moustache
	Horseshoe = 10
	Neckbeard
	Pencil
	muttonchops
	sidewhiskers
	shenandoah = 15
	sideburns
	soul patch
	stubble
	toothbrush
	van dyke = 20
	walrus
	*/
	int MoustacheType;

	/*
	Bare hands = 0
	flamethrower
	car bomb
	catapult
	sword
	crossbow = 5
	dagger
	grenade
	garrote wire
	m60 machine gun
	pistol whip = 10
	scissors
	scorpion
	slingshot
	vampire fangs
	zombie bite = 15
	hot coffee
	*/
	int WeaponType;

	/*
	Human = 0
	zombie
	dragon
	unicorn
	liger
	angel = 5
	basilisk
	bugbears
	demon
	dinosaur
	dwarf = 10
	elf
	worm
	gargoyle
	ghost
	gnome = 15
	hag
	halfling
	hydra
	mummy
	orc = 20
	skeleton
	troll
	worg
	shark
	*/
	int CreatureType;
	int Volume;
	int Books;
	int Boats;
	int HitPoints;
	bool IsFemale;
	bool IsHipster;

	Enemy();
	~Enemy();
};

