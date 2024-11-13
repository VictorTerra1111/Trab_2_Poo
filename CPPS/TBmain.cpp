#include <iostream>
#include <list>
#include <string>
#include "../HPPS/Obras.hpp"
#include "../HPPS/File_manage.hpp"

using namespace std;

int main()
{
    bool iniciar, ask;
    int numPergunta;
    list<Obras> lista;
    cout << "comecar?" << endl;
    cin >> iniciar;

    if (!iniciar)
    {
        cout << "Ate mais" << endl;
        return 0;
    }

    list<Obras>::iterator it = lista.begin(); // iterador para adicionar a lista do TXT

    while (it != lista.end())
    {
        ++it;
        lista.push_back(ReadInfo());
    }

    while (ask)
    {
        cout << "1) Qual a obra mais antiga da coleção?" << endl;
        cout << "2) Quais os filmes dentro da coleção?" << endl;
        cout << "3) Quais os livros da coleção?" << endl;
        cout << "4) Quais obras não são filmes e nem livros? O que elas são?" << endl;
        cout << "5) Qual a obra mais nova da coleção?" << endl;
        cin >> numPergunta;
        switch (numPergunta)
        {
        case 1:
            Obras antigo = lista.begin(); // TERMINAR

            for (int i = 0; i < lista.size(); ++i)
            {
                
            }
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        }
    }

    return 0;
}