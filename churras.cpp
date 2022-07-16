#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;


int pb = 0,pnb = 0; //pessoas que bebem e nao
/*
float pCerveja = 0, pRefriN = 0, pRefriD = 0,
pCarneV = 0, pLinguicaT = 0, pLinguicaF = 0,
pLimao = 0, pTomate = 0, pCebola = 0, pVinagre = 0, pPao = 0,
pCarvao = 0, pSal = 0, pDetergente = 0,
pEsponja= 0, pPapel = 0;
*/

typedef struct
{
    string id;
    float p;
    float qt;
    string t;

}produto;

produto pro[16];



void cQt()//calculo das Quantidades
{
    pro[0].qt = (pb*6);
    pro[1].qt = ceil(((pb*0.3)+pnb));
    pro[2].qt = ceil(((pb+pnb)*0.2));
    pro[3].qt = ((pb+pnb)*0.25);
    pro[4].qt = ((pb+pnb)*0.05);
    pro[5].qt = pro[4].qt;
    pro[6].qt = pro[4].qt;
    pro[7].qt = pro[4].qt;
    pro[8].qt = ((pb+pnb)*0.01);
    pro[9].qt = 1;
    pro[10].qt = ((pb+pnb)*3);
    pro[11].qt = ceil(pro[4].qt);
    pro[12].qt = ceil(pro[2].qt);
    pro[13].qt = 1;
    pro[14].qt = 1;
    pro[15].qt = ceil(pro[3].qt);
    
}

void cPessoas()
{
    cout<<flush;
    system("CLS");

    cout <<endl<< "Pessoas que bebem: "<<pb<<endl<<"Pessoas que nao bebem: "<<pnb<<endl<<endl;
    cout << "Quantas pessoas? ";
    cin >> pb;
    cout << "Quantas nao bebem? ";
    cin >> pnb;
    pb-=pnb;
    
    cQt();

}

void cProdutos()
{
    int x = 99;
    do
    {   
        cout<<flush;
        system("CLS");

        cout <<endl;
        for(int i = 0; i < 16; i++)
        {
            cout << (i+1) <<"- "<<pro[i].id<<": "<<pro[i].p<<endl;
        }
        cout <<endl<<"Para editar digite 1 - 16, Para todos digite 17, para nenhum digite 0: ";
        cin >> x;

        if((x>=1)&&(x<=16))
        {
           cout << "Digite o novo preco de "<<pro[x-1].id<<" :";
           cin >> pro[x-1].p;
        }
        if(x == 17)
        {
            for (int i = 0; i < 16; i++)
            {
                cout << "Digite o novo preco de "<<pro[i].id<<" :";
                cin >> pro[i].p;
            }
            
        }
        /*
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
        */
    } while (x != 0);
                
}

void lista()
{
    cout<<flush;
    system("CLS");
    
    cout <<endl;
    for(int i = 0; i < 16; i++)
    {
        cout << (i+1) <<"- "<<pro[i].id<<": "<<pro[i].p<<" X "<<pro[i].qt<<" "
        <<pro[i].t<<endl;
    }
}

void custo()
{

}

int menu(int x)
{
    cout<<flush;
    system("CLS");

    cout <<endl<<"Programa programador de churrascos by Pedro Fioravante"<<endl<<endl;
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

    pro[0].id = "Cerveja";
    pro[1].id = "Refri";
    pro[2].id = "Refri Diet";
    pro[3].id = "Carne de Vaca";
    pro[4].id = "Linguica Toscana";
    pro[5].id = "Linguica de Frango";
    pro[6].id = "Limao";
    pro[7].id = "Tomate";
    pro[8].id = "Cebola";
    pro[9].id = "Vinagre";
    pro[10].id = "Pao";
    pro[11].id = "Carvao";
    pro[12].id = "Sal Grosso";
    pro[13].id = "Detergente";
    pro[14].id = "Esponja";
    pro[15].id = "Papel Higienico";
    
    pro[0].t = "lata";
    pro[1].t = "litro";
    pro[2].t = "litro";
    pro[3].t = "kilo";
    pro[4].t = "kilo";
    pro[5].t = "kilo";
    pro[6].t = "kilo";
    pro[7].t = "kilo";
    pro[8].t = "kilo";
    pro[9].t = "unidade";
    pro[10].t = "unidade";
    pro[11].t = "saco";
    pro[12].t = "saco";
    pro[13].t = "unidade";
    pro[14].t = "unidade";
    pro[15].t = "pacote";

    while (x != -1)
    {
       x = menu(x);
    }
    
}