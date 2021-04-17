#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[]){


    
 int numero1,numero2,numero3;
 string caracter1, caracter2,nome[50];
  //Vetor de 50 caracter pois a questão deixa claro.

  //Solicitando a quantidade de teclas a ser digitadas.

 cout << "Quantas teclas existe vao ser digitadas?"<<endl;
 cin >> numero1;

  //Solicitando o primeiro caracter.
  if(numero1 >0 && numero1 <= 50){
    for(int i;i<=numero1;i++){   
    cout << "digite o primeiro caracter" << endl;
    cin >> caracter1;

    if(caracter1=="#"){

      //Solicitando a tecla
      cout << "Qual eh a decla?"<< endl;
      cin >> numero2;

      //solicitando o segundo caracter.
      cout << "Digite o segundo caracter" << endl;
      cin  >> caracter2;

      if(caracter2 == "="){

        //solicitando quantidades de vezes.
        cout << "digite a quantas vezes o numero vai ser precionado"<< endl;
        cin >>numero3;
      }
                  
      else{
         
        cout << "Caracter nao encontrado" << endl;

      }

    }

    else{

      cout << "Caracter nao encontrado" << endl;
    }

    //Opções das teclas digitadas

    if(numero2 == 2){

      switch(numero3){
        case 1: nome[i] = "A";
        break;

        case 2: nome[i] = "B";
        break;

        case 3: nome[i] = "C";
        break;
      }
    }

    if(numero2==3){

      switch(numero3){
        case 1: nome[i] = "D";
        break;

        case 2: nome[i] = "E";
        break;

        case 3: nome[i] = "F";
        break;

          }
        }

        if(numero2==4){

          switch(numero3){
           case 1: nome[i] = "G";
           break;

           case 2: nome[i] = "H";
           break;

           case 3: nome[i] = "I";
           break;
          }
        }

      if(numero2==5){

       switch(numero3){
          case 1: nome[i] = "J";
          break;

          case 2: nome[i] = "K";
          break;

          case 3: nome[i] = "L";
          break;
        }
      }

      if(numero2==6){

       switch(numero3){
          case 1: nome[i] = "M";
          break;

          case 2: nome[i] = "N";
          break;

          case 3: nome[i] = "O";
          break;
        }
      }

      if(numero2==7){

       switch(numero3){
          case 1: nome[i] = "P";
          break;

          case 2: nome[i] = "Q";
          break;

          case 3: nome[i] = "R";
          break;

          case 4: nome[i] = "S";
          break;
        }
      }

      if(numero2==8){

       switch(numero3){
          case 1: nome[i] = "T";
          break;

          case 2: nome[i]= "U";
          break;

          case 3: nome[i]= "V";
          break;
        }
      }

      if(numero2==9){

       switch(numero3){
          case 1: nome[i] = "W";
          break;

          case 2: nome[i] = "X";
          break;

          case 3: nome[i] = "Y";
          break;

          case 4: nome[i] = "Z";
          break;
       }
      }
    }


  }
  else{
   cout <<"Tamanho da palavra invalida" << endl;

  }
   
   cout << "A palavra descrita eh: " <<endl;

    for(int i; i<=numero1;i++){
    cout << nome[i];
  }
  return 0;
}
