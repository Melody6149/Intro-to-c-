#pragma once
class MyHero
{
private:
	int _health = 100;
	int _attacVal = 10;
public:
	void fight(MyHero hero);
	void takeDamage();
};