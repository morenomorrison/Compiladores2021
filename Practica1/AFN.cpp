#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

/**
 * Clase AFN
 * 
 * vector <char> sigma - Símbolos de entrada
 * vector <int> Q - Conjunto de estados
 * int q0 - Estado inicial
 * vector <int> F - Conjunto de estados finales
 * unordered_map <int, vector <int> > Ff - Función de transición
*/
class AFN {
	private:
		vector <char> sigma;
		vector <int> Q;
		int q0;
		vector <int> F;
		unordered_map <int, vector <int> > Ff;
		
	public:
		void setSigma(vector <char> valor);
		vector<char> getSigma(void);
		void setQ(vector <int> valor);
		vector<int> getQ(void);
		void setq0(int valor);
		int getq0(void);
		void setF(vector <int> valor);
		vector<int> getF(void);
		void setFf(unordered_map <int, vector <int> > valor);
		unordered_map <int, vector <int> > getFf(void);
};

/* Métodos get & set */
void AFN::setSigma(vector <char> valor){
	sigma = valor;
}

vector<char> AFN::getSigma(void){
	return sigma;
}

void AFN::setQ(vector <int> valor){
	Q = valor;
}

vector<int> AFN::getQ(void){
	return Q;
}

void AFN::setq0(int valor){
	q0 = valor;
}

int AFN::getq0(void){
	return q0;
}

void AFN::setF(vector <int> valor){
	F = valor;
}

vector<int> AFN::getF(void){
	return F;
}

void AFN::setFf(unordered_map <int, vector <int> > valor){
	Ff = valor;
}

unordered_map <int, vector <int> > AFN::getFf(void){
	return Ff;
}

int main () {
	return 0;
}