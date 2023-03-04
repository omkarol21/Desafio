#include <iostream>
#include <string>

using namespace std;

main (){
	setlocale (LC_ALL, "portuguese");
	
	string aluno[3];
	float notaAluno[3][4], result;
	
	for (int i = 0; i < 3; i++) {
		cout << "Informe o nome do aluno " << (i + 1) << ": ";
		cin >> aluno[i];

		cout << "Informe a nota de matemática do aluno " << (i + 1) << ": ";
		cin >> notaAluno[i][0];
		
		cout << "Informe a nota de português do aluno " << (i + 1) << ": ";
		cin >> notaAluno[i][1];
		
		cout << "Informe a nota de ciências humanas do aluno " << (i + 1) << ": ";
		cin >> notaAluno[i][2];
		
		cout << "Informe a nota de ciências da natureza do aluno " << (i + 1) << ": ";
		cin >> notaAluno[i][3];
		
		cout << endl;
	}
	
	
	for (int i = 0; i < 3; i++) {
		result = (notaAluno[i][0] + notaAluno[i][1] + notaAluno[i][2] + notaAluno[i][3]) / 4;
		cout << "Aluno: " << aluno[i] << " a média é: " << result << endl;
	}
	
	scanf ("%d %d %d", aluno[i]);
	
	if(aluno[0] > aluno[1]){
		aux = aluno[0];
		aluno[0] = aluno[2];
		aluno[2] = aux;
	}
	
	if(aluno[0] > aluno[1]){
		aux = aluno[0];
		aluno[0] = aluno[1];
		aluno[1] = aux;
	}
	
	if(aluno[1] > aluno[2]){
		aux = aluno[1];
		aluno[1] = aluno[2];
		aluno[2] = aux;
	}	
}
