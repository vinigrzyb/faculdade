/* Vinicius Grzyb Oliveira
Josiel Maicon
30.09.2024
Medidor de quadro geral por via de recursos humanos.
_________________________________________________________________________________________________________________
ALGORITMO repeticao
FACA{
}ENQUANTO(salario > 0);
*/
#include <stdio.h>
int main () {
int sexo, salario, total_pessoas, salarioTotalH, salarioTotalM, soma_salario, qtd_homens=0, qtd_mulheres=0, media_geral, media_masc,
media_femi;
printf("Programa de estatisticas de recursos humanos");
//loop while para permitir com que o usuário adicione vários dados
do{
printf("\nInsira o salario: ");
scanf("%d", &salario);
//Estrutura condicional para para o loop se o salario for menor ou igual a 0
if(salario <= 0){
printf("Valor 0 inserido! Encerrando o programa...");
break;
}
printf("[1] Masculino\n[2] Feminino \nInsira o sexo: ");
scanf("%d", &sexo);
//estrutura condicional para verificar o sexo
if(sexo == 1){
qtd_homens++;
salarioTotalH =+ salario;
}else if(sexo == 2){
qtd_mulheres++;
salarioTotalM =+ salario;
}else{
printf("dados invalidos!\n");
}
}while(salario > 0);
soma_salario = salarioTotalM + salarioTotalH;
total_pessoas = qtd_homens + qtd_mulheres;
media_geral = (soma_salario / (float)total_pessoas);
media_masc = salarioTotalH / qtd_homens;
media_femi = salarioTotalM / qtd_mulheres;
printf("\n\nQuantidade total de pessoas: %d", total_pessoas);
printf("\nQuantidade de homens: %d", qtd_homens);
printf("\nQuantidade de mulheres: %d", qtd_mulheres);
printf("\nMedia salarial geral das pessoas: R$%d", media_geral);
printf("\nMedia salarial dos homens: R$%d", media_masc);
printf("\nMedia salarial das mulheres: R$%d", media_femi);//estrutura condicional que filtra a renda e declara o grupo pertencente
if(media_geral < 1500){
printf("\nGrupo com renda BAIXA");
}else if(media_geral <= 5000){
printf("\nGrupo com renda MEDIA");
}else{
printf("\nGrupo com renda ALTA");
}
return 0;
}