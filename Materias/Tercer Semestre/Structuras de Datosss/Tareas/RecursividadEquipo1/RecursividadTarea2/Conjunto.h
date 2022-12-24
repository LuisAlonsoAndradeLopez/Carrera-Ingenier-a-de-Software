#ifndef CONJUNTO_H
#define CONJUNTO_H
#include <string>
using namespace std;

class Conjunto{
	private:
		int obj[12];
	public:
		Conjunto();
		~Conjunto();//Destructor
		void insertar(int);
		void retirar(int);
		bool pertenece(int);	
};
#endif
