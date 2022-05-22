#pragma once
#include "Repo.h"

class Service {
	Repo& repo;

public:
	Service(Repo& r) : repo(r){}
	string pressed(int i, int j);
};


string Service::pressed(int i, int j)
{
	return repo.pressed(i, j);
}