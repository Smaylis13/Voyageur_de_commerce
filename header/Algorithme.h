#ifndef ALGORITHME_H
#define ALGORITHME_H

#include "Population.h"


using namespace std;
class Algorithme
{
	public:
		Algorithme();
		Population Nouvelle(Population a,float p);
	private:
		float proba;
};

#endif


