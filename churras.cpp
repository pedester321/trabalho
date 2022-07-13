#include <iostream>

using namespace std;
// test
// test 2
int pb = 0,pnb = 0;
float pCerveja = 0, pRefriN = 0, pRefriD = 0,
pCarneV = 0, pLinguicaT = 0, pLinguicaF = 0,
pLimao = 0, pTomate = 0, pVinagre = 0, pPao = 0,
pCarvao = 0, pSal = 0, pDetergente = 0,
pEsponja= 0, pPapel = 0;

void cPessoas()
{
    
    cout << "Pessoas que bebem: "<<pb<<endl<<"Pessoas que nao bebem: "<<pnb<<endl<<endl;
    cout << "Quantas pessoas? ";
    cin >> pb;
    cout << "Quantas nao bebem? ";
    cin >> pnb;
    pb-=pnb;
    
}

void cProdutos()
{

}

void lista()
{

}

void custo()
{

}

int menu(int x)
{
    
    cout <<"Programa programador de churrascos by Pedro Fioravante"<<endl<<endl;
    cout <<"1- Cadastrar numero de participantes"<<endl
    <<"2- Cadastrar valor dos produtos"<<endl
    <<"3- Listar preco dos produtos e quantiades a serem compradas"<<endl
    <<"4- Custo total para cada pessoa"<<endl
    <<endl<<"Escolha umas das opcoes ou digite 0 para fecha o programa: ";
    cin >> x;
    switch(x)
    {
        case 0:
            x = -1;
            return x;
            break;
        case 1:
            cPessoas();
            break;
        case 2:
            cProdutos();
            break;
        case 3:
            lista();
            break;
        case 4:
            custo();
            break;
        default:
            menu(x);
    }
    
}



int main()
{
    int x = 0;

    while (x != -1)
    {
       x = menu(x);
    }
    
}