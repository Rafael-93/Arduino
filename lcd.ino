//Programa: Teste de Display LCD 16 x 2
 
//Carrega a biblioteca LiquidCrystal
#include <LiquidCrystal.h>
 
//Define os pinos que serão utilizados para ligação ao display
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void telacima(){
     //Limpa a tela
    lcd.clear();
    //Posiciona o cursor na coluna 17, linha 0;
    lcd.setCursor(17, 0);
    //Envia o texto entre aspas para o LCD
    lcd.print("    Projeto PCB");
    //Posiciona o cursor na coluna 17, linha 1;
    lcd.setCursor(17, 1);
    //Envia o texto entre aspas para o LCD
    lcd.print("Aluno: Rafael Jose");
     
    //Rolagem para a esquerda
    for (int posicao = 0; posicao < 34; posicao++)
    {
      lcd.scrollDisplayLeft();
      delay(300);
    }


     //Limpa a tela
    lcd.clear();
    //Posiciona o cursor na coluna 17, linha 0;
    lcd.setCursor(17, 0);
    //Envia o texto entre aspas para o LCD
    lcd.print("    Projeto PCB");
    //Posiciona o cursor na coluna 17, linha 1;
    lcd.setCursor(17, 1);
    //Envia o texto entre aspas para o LCD
    lcd.print("Aluna: Thais Barros");
     
    //Rolagem para a esquerda
    for (int posicao = 0; posicao < 35; posicao++)
    {
      lcd.scrollDisplayLeft();
      delay(300);
    }
  
     
  }
 
void setup()
{
  //Define o número de colunas e linhas do LCD
  lcd.begin(16, 2); 
}
 
void loop()
{
 telacima();
}
