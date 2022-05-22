#pragma once
#include "Repo.h"

class Service {
	Repo& repo;

public:
	Service(Repo& r) : repo(r){}
};