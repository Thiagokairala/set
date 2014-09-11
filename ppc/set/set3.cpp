#include <iostream>
#include <set>

using namespace std;

class aluno {
	public:
		string nome;
		int nota;

	aluno(string _nome, int _nota) : nome(_nome), nota(_nota) {};
	
	bool operator< (const aluno& b) const {
		return nota < b.nota;
	}
};

int main() {
	set<aluno> alunos;

	alunos.insert(aluno("Thiago", 10));
	alunos.insert(aluno("Parley", 10));
	alunos.insert(aluno("Bruno", 9));
	alunos.insert(aluno("Edson", 100));
 
	
	for (set<aluno>::const_iterator it = alunos.begin(); it!=alunos.end(); it++) {
		cout << it->nome << ", " << it->nota << endl;
	}

	return 0;
}
