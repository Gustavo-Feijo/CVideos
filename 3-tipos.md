Os diferentes tipos apresentam diferentes representações binárias e formatadores.

Também há variações dentro de tipos semelhantes, por exemplo, dentro de inteiros, existem inteiros de 8,16,32,64 bits, com sinal, sem sinal, etc.

Por exemplo:

short int &rarr; **%hd** &rarr; -32,768 à 32,767.
unsigned short int &rarr; **%hu** &rarr; 0 à 65,535.

Nos casos acima, por não possuir uma representação negativa, o unsigned pode alcançar valores maiores, mas seu menor valor é 0.

Abaixo seguem as representações mais comuns:

short int &rarr; **%hd** &rarr; -32,768 à 32,767.
unsigned short int &rarr; **%hu** &rarr; 0 à 65,535.
___
int &rarr; **%d** &rarr; -2,147,483,648 à 2,147,483,647.
unsigned int &rarr; **%u** &rarr; 0 à 4,294,967,295.
___
Há um tipo chamado long int, contudo, nos tempos atuais, em sistemas de 64 bits, apresenta mesmo tamanho que 'int'.
___
long long int &rarr; **%lld** &rarr; -2⁶³ à 2⁶³-1.
unsigned long long int &rarr; **%llu** &rarr; 0 à 18,446,744,073,709,551,615.
___
char &rarr; **%c** &rarr; -128 à 127.
unsigned char &rarr; **%c** &rarr; 0 à 255.
___
float &rarr; **%f** &rarr; -1.2 * 10⁻³⁸ à 3.4 * 10³⁸.
___
double &rarr; **%lf** &rarr; -1.7 * 10⁻³⁰⁸ à 1.7 * 10³⁰⁸.
___
long double &rarr; **%Lf** &rarr; -3.4 * 10⁻⁴⁹³² à 1.1 * 10⁴⁹³².
___

Estes são os tipos mais comuns, seguidos de suas formatações para strings e seus valores minimos e maximos.
Não necessariamente são todas representações, contudo, são as mais básicas.
Há alternativas, como **%i** para inteiros, que apresenta mesma funcionalidade para o printf(), tendo apenas diferenças no scanf.

___

Os tipos apresentam também diferentes quantidades de bits/bytes.
Ao tentar, por exemplo, inserir um valor maior do que o permitido pelo tipo, ocorrerá overflow, com os bits restantes sendo ignorados.
