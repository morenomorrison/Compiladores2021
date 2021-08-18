#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

/**
 * Clase AFD
 * 
 * vector <char> sigma - Símbolos de entrada
 * vector <int> Q - Conjunto de estados
 * int q0 - Estado inicial
 * vector <int> F - Conjunto de estados finales
 * unordered_map <int, char> Ff - Función de transición
*/
class AFD {
	private:
		vector <char> sigma;
		vector <int> Q;
		int q0;
		vector <int> F;
		unordered_map <int, char> Ff;

	public:
		void setSigma(vector <char> valor);
		vector<char> getSigma(void);
		void setQ(vector <int> valor);
		vector<int> getQ(void);
		void setq0(int valor);
		int getq0(void);
		void setF(vector <int> valor);
		vector<int> getF(void);
		void setFf(unordered_map <int, char> valor);
		unordered_map <int, char> getFf(void);
};

/* Métodos get & set */
void AFD::setSigma(vector <char> valor){
	sigma = valor;
}

vector<char> AFD::getSigma(void){
	return sigma;
}

void AFD::setQ(vector <int> valor){
	Q = valor;
}

vector<int> AFD::getQ(void){
	return Q;
}

void AFD::setq0(int valor){
	q0 = valor;
}

int AFD::getq0(void){
	return q0;
}

void AFD::setF(vector <int> valor){
	F = valor;
}

vector<int> AFD::getF(void){
	return F;
}

void AFD::setFf(unordered_map <int, char> valor){
	Ff = valor;
}

unordered_map <int, char> AFD::getFf(void){
	return Ff;
}

int main () {
	return 0;
}