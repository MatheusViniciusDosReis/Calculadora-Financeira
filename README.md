# Calculadora Financeira

Bibliotécas que serão ultilizadas:
#include <iostream> // Bibliotéca padrão
#include <math.h> // usamos para expressões financeiras
#include <iomanip> //usamos para limitar os números após a virgula

Para o programa rodar em looping e finalizar apenas quando for solicitado pelo usuário, usamos o while
while(sairDoPrograma == 0) // quando o usuário quiser sair ele irá retornar um valor 1

Variaveis para juro simples

1. capital // usado para guardar o capital inicial do usuário
2. taxa // usado para guardar a taxa de juro ao ano
3. juroSimples // usado para guardar o resultado da formula de juro simples
4. tempo // usado para guardar a quantidade de tempo que o capital será investido, podendo ser em mês ou ano
5. escolhaUsuário // para guardar o valor da condição se usuário guardará o capital em mêses ou anos

A formula que ultilizamos para juro simples:

juroSimples = capital * ((taxa / 12) / 100) * tempo - capital;
capitalFinal = juroSimples + capital;

Variaveis para juro composto

1. capital // usado para guardar o capital inicial do usuário
2. taxa // usado para guardar a taxa de juro ao ano
3. juroComposto // usado para guardar o resultado da formula de juro composto
4. capitalFinal // usado para guardar o resultado do capital final
5. tempo // usado para guardar a quantidade de tempo que o capital será investido, podendo ser em mês ou ano
6. escolhaUsuário // para guardar o valor da condição se usuário guardará o capital em mêses ou anos

A formula que ultilizamos para juro composto:

  tempo = tempo * 12;
  juroComposto = capital * (pow((1 + ((taxa / 100) / 12)), tempo)) - capital;
  capitalFinal = juroComposto + capital;
   
