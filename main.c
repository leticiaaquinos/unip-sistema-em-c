#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

char usuario[5] = "admin";
int senha = "123";
int continuar = 1;

typedef struct data DATA;
struct data{
        int dia;
        int mes;
        int ano;
    };

int validaData(data){
        int dia;
        int mes;
        int ano;
        if (dia < 1 || dia > 31){
            return 1;
        }
        if (mes < 1 || mes > 12){
            return 1;
        }
        if (ano < 0){
            return 1;
        }
        return 0;
}

typedef struct endereco ENDERECO;
struct endereco{
        char rua[30];
        int numero;
        char bairro[20];
        char cidade[20];
        char estado[10];
        int cep
};

typedef struct paciente PACIENTE;
struct paciente{
        char nome[40];
        int cpf;
        int idade;
        int telefone;
        ENDERECO endereco;
        DATA nascimento;
        char email[40];
        DATA diagnostico;
} paciente;

    int temcomorbidade;
    int temcomorbidadeglobal;
    int comorbidade;
    char comorbidadeGlobal[20];

int main(){

        setlocale(LC_ALL, "Portuguese");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("                        SISTEMA EM C PARA CADASTRAR\n");
        printf("                    PACIENTES DIAGNOSTICADOS COM COVID-19.\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        /* ao receber o diagnostico positivo */
        printf("                        O PACIENTE ESTA COM COVID-19.\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("                     PRESSIONE ENTER PARA LOGIN NO SISTEMA\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        getch();
        system("cls");

    /*login no sistema(informando o usuario e a senha) */

    do{
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("                        SISTEMA EM C PARA CADASTRAR\n");
        printf("                    PACIENTES DIAGNOSTICADOS COM COVID-19.\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("                                    USUARIO:");
        scanf("%s", &usuario);
        fflush(stdin);
        printf("\n");
        printf("                                     SENHA:");
        scanf("%d", &senha);
        system("cls");

            if(senha == 123){
                printf("\n                              ENTRADA PERMITIDA!\n");
                printf("                 PRESSIONE ENTER PARA INICIAR O CADASTRO DO PACIENTE");
                continuar = 0;
                getch();
                system("cls");
            } else{
                printf("\n                              ENTRADA NAO PERMITIDA!\n");
                printf("                                  1. TENTE NOVAMENTE");
                scanf("%d", &continuar);
            }
    } while(continuar !=0);
    fflush(stdin);
    system("cls");

    /*informar os dados do paciente*/

    /* nome */

    printf("\n                                 NOME:");
    scanf("%s", &paciente.nome);
    fflush(stdin);

    /* CPF */

    printf("\n                                 CPF:");
    scanf("\n%d", &paciente.cpf);
    fflush(stdin);

    /* idade */

    printf("\n                                 IDADE:");
    scanf("\n%d", &paciente.idade);
    fflush(stdin);

    /* telefone */

    printf("\n                                 TELEFONE:");
    scanf("\n%d", &paciente.telefone);
    fflush(stdin);

    /* rua */

    printf("\n                                 RUA:");
    scanf("\n%s", &paciente.endereco.rua);
    fflush(stdin);

    /* numero */

    printf("\n                                 NUMERO:");
    scanf("\n%d", &paciente.endereco.numero);
    fflush(stdin);


    /* bairro */

    printf("\n                                 BAIRRO:");
    scanf("\n%s", &paciente.endereco.bairro);
    fflush(stdin);

     /* cidade */

    printf("\n                                 CIDADE:");
    scanf("\n%s", &paciente.endereco.cidade);
    fflush(stdin);

     /* estado */

    printf("\n                                 ESTADO:");
    scanf("\n%s", &paciente.endereco.estado);
    fflush(stdin);

     /* CEP */

    printf("\n                                 CEP:");
    scanf("\n%d", &paciente.endereco.cep);
    fflush(stdin);

     /* data de nascimento */

    printf("\n                                 DATA DE NASCIMENTO:");
    scanf("%d/%d/%d", &paciente.nascimento.dia, &paciente.nascimento.mes, &paciente.nascimento.ano);
    fflush(stdin);

    /* e-mail */

    printf("\n                                 E-MAIL:");
    scanf("\n%s", &paciente.email);
    fflush(stdin);

    /* data do diagnostico*/

    printf("\n                                 DATA DO DIAGNOSTICO:");
    scanf("\n%d/%d/%d", &paciente.diagnostico.dia, &paciente.diagnostico.mes, &paciente.diagnostico.ano);
    fflush(stdin);

    /*se for o caso, informar existentes comorbidades*/

    printf("\n                                 O PACIENTE TEM COMORBIDADES?");
    printf("\n                                 1. SIM\n");
    printf("\n                                 2. NAO\n");
    printf("\n                                 ESCOLHA UMA OPCAO:");
    scanf("\n%d", &temcomorbidade);
    fflush(stdin);

        if (temcomorbidade == 1){

            temcomorbidadeglobal = 1;

            printf("\n                                 COMORBIDADES:\n");
            printf("\n                                 1.DIABETES\n");
            printf("\n                                 2.OBESIDADE\n");
            printf("\n                                 3.HIPERTENSAO\n");
            printf("\n                                 4.TUBERCULOSE\n");
            printf("\n                                 ESCOLHA UMA OPCAO:");
            scanf("%d", &comorbidade);
    switch (comorbidade){
    case 1:
      strcpy(comorbidadeGlobal, "Diabetes");
      break;
    case 2:
      strcpy(comorbidadeGlobal, "Obesidade");
      break;
    case 3:
      strcpy(comorbidadeGlobal, "Hipertensauo");
      break;
    case 4:
      strcpy(comorbidadeGlobal, "Tuberculose");
      break;
    }
        } else {
            printf("\n                                SEM COMORBIDADE\n");
            temcomorbidadeglobal = 0;
        }

    system("cls");
    printf("                                   FIM DO CADASTRO.\n");

    /*salvar os dados em um arquivo para consultar*/

    printf("\n                 PRESSIONE ENTER PARA CONSULTAR OS DADOS DO PACIENTE.");
    getch();
    system("cls");
    printf("\n                       NOME: %s\n", paciente.nome);
    printf("\n                       CPF: %d\n", paciente.cpf);
    printf("\n                       IDADE: %d\n", paciente.idade);
    printf("\n                       TELEFONE: %d\n", paciente.telefone);
    printf("\n                       ENDERECO:");
    printf("\n                       RUA: %s", paciente.endereco.rua);
    printf("\n                       NUMERO:%d", paciente.endereco.numero);
    printf("\n                       BAIRRO: %s", paciente.endereco.bairro);
    printf("\n                       CIDADE: %s", paciente.endereco.cidade);
    printf("\n                       ESTADO: %s", paciente.endereco.estado);
    printf("\n                       CEP: %d\n", paciente.endereco.cep);
    printf("\n                       DATA DE NASCIMENTO: %d/%d/%d\n", paciente.nascimento.dia, paciente.nascimento.mes, paciente.nascimento.ano);
    printf("\n                       E-MAIL: %s\n", paciente.email);
    printf("\n                       DATA DO DIAGNOSTICO: %d/%d/%d\n", paciente.diagnostico.dia, paciente.diagnostico.mes, paciente.diagnostico.ano);
    printf("\n                       COMORBIDADE: %s\n", comorbidadeGlobal);

     FILE *arq = fopen("arquivo-pacientes-covid.txt", "a");

        fprintf(arq, "-----------------------------------------------\n");
        fprintf(arq, "     Sistema em C para cadastrar pacientes\n");
        fprintf(arq, "          diagnosticados com covid-19. \n");
        fprintf(arq, "-----------------------------------------------\n");
        fprintf(arq, "               Nome: %s\n",paciente.nome);
        fprintf(arq, "               CPF: %d\n",paciente.cpf);
        fprintf(arq, "               Idade: %d\n",paciente.idade);
        fprintf(arq, "               Telefone: %d\n",paciente.telefone);
        fprintf(arq, "               Rua: %s\n",paciente.endereco.rua);
        fprintf(arq, "               Numero: %d\n",paciente.endereco.numero);
        fprintf(arq, "               Bairro: %s\n",paciente.endereco.bairro);
        fprintf(arq, "               Cidade: %s\n",paciente.endereco.cidade);
        fprintf(arq, "               Estado: %s\n",paciente.endereco.estado);
        fprintf(arq, "               CEP: %d\n",paciente.endereco.cep);
        fprintf(arq, "               Data de nascimento: %d/%d/%d\n",paciente.nascimento.dia, paciente.nascimento.mes, paciente.nascimento.ano);
        fprintf(arq, "               Email: %s\n",paciente.email);
        fprintf(arq, "               Data de diagnostico: %d/%d/%d\n",paciente.diagnostico.dia, paciente.diagnostico.mes, paciente.diagnostico.ano);
        fprintf(arq, "               Comorbidade: %s\n",comorbidadeGlobal);

        fclose(arq);

    /*calcular a idade */

    int calcularIdade(){
        int idade;

        idade = paciente.diagnostico.ano - paciente.nascimento.ano;
        if((paciente.diagnostico.mes < paciente.nascimento.mes) || (paciente.diagnostico.mes == paciente.nascimento.mes) && (paciente.diagnostico.dia < paciente.nascimento.dia)){
            idade = idade - 1;
        }
        return (idade);
    }

    /* verificar se o paciente possui alguma comorbidade e se pertence ao grupo de risco*/

    printf("\n       PRESSIONE ENTER PARA VERIFICAR SE O PACIENTE PERTENCE AO GRUPO DE RISCO.");
    getch();
    system("cls");

    if(paciente.idade >=65 || temcomorbidadeglobal == 1){
        printf("\n                       O PACIENTE PERTENCE AO GRUPO DE RISCO.\n");

    /*salvar em um arquivo o CEP e a idade do paciente*/

        printf("\n                       CEP: %d\n", paciente.endereco.cep);
        printf("\n                       IDADE: %d\n", paciente.idade);
        printf("\n                  SALVO EM UM ARQUIVO TXT O CEP E A IDADE DO PACIENTE\n");
        printf("\n                          PARA ENVIAR A SECRETARIA DA SAÚDE\n");
        printf("\n                                  FIM DO SISTEMA\n");
    } else {
        printf("\n                       O PACIENTE NAO PERTENCE AO GRUPO DE RISCO.\n");
        printf("\n                                  FIM DO SISTEMA\n");
    }

       FILE *arquivo = fopen("arquivo-secretaria-da-saude.txt", "a");

        fprintf(arq, "-----------------------------------------------\n");
        fprintf(arq, "     Sistema em C para cadastrar pacientes\n");
        fprintf(arq, "          diagnosticados com covid-19. \n");
        fprintf(arq, "-----------------------------------------------\n");
        fprintf(arquivo, "               Idade: %d\n",paciente.idade);
        fprintf(arquivo, "               CEP: %d\n",paciente.endereco.cep);

        fclose(arquivo);

    return 0;
    /* FIM */

}

