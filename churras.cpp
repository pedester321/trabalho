#include <iostream>

using namespace std;
// test final

int pb = 0,pnb = 0;
float pCerveja = 0, pRefriN = 0, pRefriD = 0,
pCarneV = 0, pLinguicaT = 0, pLinguicaF = 0,
pLimao = 0, pTomate = 0, pCebola = 0, pVinagre = 0, pPao = 0,
pCarvao = 0, pSal = 0, pDetergente = 0,
pEsponja= 0, pPapel = 0;
float precos[16];

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
    int x = 99;
    do
    {
        cout << "Cadastro dos produtos"<<endl<<endl<<"Preco dos produtos: "<<endl;
        cout << "1- Cerveja: "<<pCerveja<<" por lata"<<endl;
        cout << "2- Refri: "<<pRefriN<<" por litro"<<endl;
        cout << "3- Refri Diet: "<<pRefriD<<" por litro"<<endl;
        cout << "4- Carne de Vaca: "<<pCarneV<<" por kilo"<<endl;
        cout << "5- Linguica Toscana: "<<pLinguicaT<<" por kilo"<<endl;
        cout << "6- Linguica de Frango: "<<pLinguicaF<<" por kilo"<<endl;
        cout << "7- Limao: "<<pLimao<<" por kilo"<<endl;
        cout << "8- Tomate: "<<pTomate<<" por kilo"<<endl;
        cout << "9- Cebola: "<<pCebola<<" por kilo"<<endl;
        cout << "10- Vinagre: "<<pVinagre<<" a unidade"<<endl;
        cout << "11- Pao: "<<pPao<<" por unidade"<<endl;
        cout << "12- Carvao: "<<pCarvao<<" por saco"<<endl;
        cout << "13- Sal Grosso: "<<pSal<<" por saco"<<endl;
        cout << "14- Detergente: "<<pDetergente<<" a unidade"<<endl;
        cout << "15- Esponja de pia: "<<pEsponja<<" a unidade"<<endl;
        cout << "16- Papel Higienico: "<<pPapel<<" por pacote"<<endl;
        cout <<endl<<"Para editar digite 1 - 16, Para todos digite 17, para nenhum digite 0: ";
        
        cin >> x;
        switch(x)
        {
            case 1:
                
                break;
            case 2:
            
            case 3:
            
            case 4:

            case 5:

            case 6:

            case 7:

            case 8:

            case 9:

            case 10:

            case 11:

            case 12:

            case 13:

            case 14:

            case 15:

            case 16:

            case 17:

            default:
                cout <<"Erro, tente novamente "<<endl;
        }
    } while (x != 0);
                
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