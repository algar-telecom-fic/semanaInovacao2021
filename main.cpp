#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    vector<double> vet;
    
    // Faz a leitura do arquivo
    ifstream arquivo("numeros.txt");
    while(getline(arquivo, str)){
        double val = stod(str);
        vet.push_back(val);
    }
    arquivo.close();

    // 1- soma
    // 2- media
    // 3- desvio padrao
    // 4- variancia
    // 5- valores extremos (min e max)
    // 6- valores ordenados
    double soma = 0.0, media = 0.0, desvPad = 0.0, variancia = 0.0;
    
    for(int i = 0; i < vet.size(); i++){
        soma += vet.at(i);
    }
    media = soma / vet.size();

    for(int i = 0; i < vet.size(); i++){
        variancia += pow(vet.at(i) - media, 2);
    }
    variancia = variancia / (vet.size() - 1);
    
    desvPad = sqrt(variancia);

    cout << "Foram lidos " << vet.size()+1 << " valores" << endl << endl;
    cout << "Soma: " << soma << endl;
    cout << "Media: " << media << endl;
    cout << "Variancia: " << variancia << endl;
    cout << "Desvio Padrao: " << desvPad << endl;
    sort(vet.begin(), vet.end());
    cout << "Menor valor: " << vet.at(0) << endl;
    cout << "Maior valor: " << vet.at(vet.size() - 1) << endl;
    
    //Abre o arquivo de saida
    ofstream arquivoSaida("numerosOrdenados.txt");
    for(int i = 0; i < vet.size(); i++){
        arquivoSaida << vet.at(i) << endl;;
    }
    arquivoSaida.close();

    cout << endl << "Programa finalizado" << endl;
}