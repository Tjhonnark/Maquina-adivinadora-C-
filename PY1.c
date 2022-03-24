#include<stdio.h>
#include<locale.h>

int edad(int year, int year1);
int meses1(int mes, int mes1);
int meses2(int mes, int mes1);
int dias1(int dia, int dia1);
int dias2(int dia, int dia1);
int bis(int dia, int dia1);
int mesesf1(int mes, int mes1);
int mesesf2(int mes, int mes1);
int diasf1(int dia, int dia1);
int diasf2(int dia, int dia1);
int diasf3(int dia, int dia1);
int diasf4(int dia, int dia1);
int bisf(int dia, int dia1);
int diasbasic(int dia, int dia1);

int main(){
setlocale(LC_CTYPE, "spanish");
    int op, a, i, dia, dia1, mes, mes1, year, year1, edadt, meses, dias, bisi=0, acum=0, diaf, dia_meses, vida, mesesf=0, diasf=0;
    char name[20];

do{
    printf ("\t\t\t\t\tCOMPA�IA MAQUINAS ADIVINADORAS");
    printf ("\n\n\t1. Presentaci�n");
    printf ("\n\n\t2. Proceso");
    printf ("\n\n\t3. Salir\n\n");
    printf ("\n\n\tOpci�n: ");
    scanf ("%d", &op);

    if (op==1 || op==2 || op==3){
        if(op==1){
            do{
                system("cls");
                printf ("\tIntegrantes\tC�dula\n\n\tAllan Arauz \tc�dula\n\n\tJenitze \tc�dula\n\n\tRodrigo Garc�a \t8-949-328\n\n");
                printf ("\n1. Regresar");
                printf ("\n\nOpci�n: ");
                scanf ("%d", &a);
                system("cls");
            }while(a<1 || a>1);
        }
        else if (op==2){
            system("cls");
            do{
                printf ("�C�al es su nombre?\n");
                fflush(stdin);
                scanf ("%[^\n]", &name);
                printf ("\n");
            do{
                do{
                    printf ("Fecha de nacimiento: \n");
                    printf ("\tD�a: ");
                    scanf("%d", &dia);
                    printf ("\tMes: ");
                    scanf("%d", &mes);
                    printf ("\tA�o: ");
                    scanf("%d", &year);
                    fflush(stdin);
                    system("cls");
                    if ((dia>31 || dia<1) || (mes>12 || mes<1)){
                        printf ("Ingrese los datos correctos. ");
                        printf ("Indique la fecha en n�meros.\n");
                        system("PAUSE");
                        system("cls");
                    }
                    else{}
                }while((dia>31 || dia<1) || (mes>12 || mes<1));

                do{
                    printf ("Fecha actual o futura: \n");
                    printf ("\tD�a: ");
                    scanf("%d", &dia1);
                    printf ("\tMes: ");
                    scanf("%d", &mes1);
                    printf ("\tA�o: ");
                    scanf("%d", &year1);
                    fflush(stdin);
                    system("cls");
                    if ((dia1>31 || dia1<1) || (mes1>12 || mes1<1)){
                        printf ("Ingrese los datos correctos. ");
                        printf ("Indique la fecha en n�meros.\n");
                        system("PAUSE");
                        system("cls");
                    }
                    else{}
                }while((dia1>31 || dia1<1) || (mes1>12 || mes1<1));
            }while(year>year1 || year<=0);

                if ((year1 % 4 == 0) && ((mes1==2 && dia1>=29) || (mes1>2))){
                    if (mes==2){
                        if (mes<=mes1 && dia<=dia1){
                            edadt = edad(year,year1);
                            meses = meses1(mes,mes1);
                            dias = dias1(dia,dia1);
                        }
                        else if (mes<mes1 && dia>dia1){
                            edadt = edad(year,year1);
                            meses = meses1(mes,mes1) - 1;
                            dias = bis(dia,dia1);
                        }
                        else if (mes>mes1 && dia<=dia1){
                            edadt = edad(year,year1) - 1;
                            meses = meses2(mes,mes1);
                            dias = dias1(dia,dia1);
                        }
                        else if (mes>=mes1 && dia>dia1){
                            edadt = edad(year,year1) - 1;
                            meses = meses2(mes,mes1) - 1;
                            dias = bis(dia,dia1);
                        }
                    }
                    else if (mes==4 || mes==6 || mes==9 || mes==11){
                        if (mes<=mes1 && dia<=dia1){
                            edadt = edad(year,year1);
                            meses = meses1(mes,mes1);
                            dias = dias1(dia,dia1);
                        }
                        else if (mes<mes1 && dia>dia1){
                            edadt = edad(year,year1);
                            meses = meses1(mes,mes1) - 1;
                            dias = dias3(dia,dia1);
                        }
                        else if (mes>mes1 && dia<=dia1){
                            edadt = edad(year,year1) - 1;
                            meses = meses2(mes,mes1);
                            dias = dias1(dia,dia1);
                        }
                        else if (mes>=mes1 && dia>dia1){
                            edadt = edad(year,year1) - 1;
                            meses = meses2(mes,mes1) - 1;
                            dias = dias3(dia,dia1);
                        }
                    }
                    else if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
                        if (mes<=mes1 && dia<=dia1){
                            edadt = edad(year,year1);
                            meses = meses1(mes,mes1);
                            dias = dias1(dia,dia1);
                        }
                        else if (mes<mes1 && dia>dia1){
                            edadt = edad(year,year1);
                            meses = meses1(mes,mes1) - 1;
                            dias = dias4(dia,dia1);
                        }
                        else if (mes>mes1 && dia<=dia1){
                            edadt = edad(year,year1) - 1;
                            meses = meses2(mes,mes1);
                            dias = dias1(dia,dia1);
                        }
                        else if (mes>=mes1 && dia>dia1){
                            edadt = edad(year,year1) - 1;
                            meses = meses2(mes,mes1) - 1;
                            dias = dias4(dia,dia1);
                        }
                    }
                }
                else{
                    if (mes==2){
                        if (mes<=mes1 && dia<=dia1){
                            edadt = edad(year,year1);
                            meses = meses1(mes,mes1);
                            dias = dias1(dia,dia1);
                        }
                        else if (mes<mes1 && dia>dia1){
                            edadt = edad(year,year1);
                            meses = meses1(mes,mes1) - 1;
                            dias = dias2(dia,dia1);
                        }
                        else if (mes>mes1 && dia<=dia1){
                            edadt = edad(year,year1) - 1;
                            meses = meses2(mes,mes1);
                            dias = dias1(dia,dia1);
                        }
                        else if (mes>=mes1 && dia>dia1){
                            edadt = edad(year,year1) - 1;
                            meses = meses2(mes,mes1) - 1;
                            dias = dias2(dia,dia1);
                        }
                    }
                    else if (mes==4 || mes==6 || mes==9 || mes==11){
                        if (mes<=mes1 && dia<=dia1){
                            edadt = edad(year,year1);
                            meses = meses1(mes,mes1);
                            dias = dias1(dia,dia1);
                        }
                        else if (mes<mes1 && dia>dia1){
                            edadt = edad(year,year1);
                            meses = meses1(mes,mes1) - 1;
                            dias = dias3(dia,dia1);
                        }
                        else if (mes>mes1 && dia<=dia1){
                            edadt = edad(year,year1) - 1;
                            meses = meses2(mes,mes1);
                            dias = dias1(dia,dia1);
                        }
                        else if (mes>=mes1 && dia>dia1){
                            edadt = edad(year,year1) - 1;
                            meses = meses2(mes,mes1) - 1;
                            dias = dias3(dia,dia1);
                        }
                    }
                    else if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
                        if (mes<=mes1 && dia<=dia1){
                            edadt = edad(year,year1);
                            meses = meses1(mes,mes1);
                            dias = dias1(dia,dia1);
                        }
                        else if (mes<mes1 && dia>dia1){
                            edadt = edad(year,year1);
                            meses = meses1(mes,mes1) - 1;
                            dias = dias4(dia,dia1);
                        }
                        else if (mes>mes1 && dia<=dia1){
                            edadt = edad(year,year1) - 1;
                            meses = meses2(mes,mes1);
                            dias = dias1(dia,dia1);
                        }
                        else if (mes>=mes1 && dia>dia1){
                            edadt = edad(year,year1) - 1;
                            meses = meses2(mes,mes1) - 1;
                            dias = dias4(dia,dia1);
                        }
                    }
                }
            //Cuanto falta
            if ((year1 % 4 == 0) && ((mes1==2 && dia1>=29) || (mes1>2))){
                    if (mes==2){
                        if (mes<=mes1 && dia<dia1){
                            mesesf = mesesf2(mes,mes1) - 1;
                            diasf = bisf(dia,dia1);
                        }
                        else if (mes<mes1 && dia>=dia1){
                            mesesf = 12 - meses1(mes,mes1);
                            diasf = diasf1(dia,dia1);
                        }
                        else if (mes>mes1 && dia<dia1){
                            mesesf = mesesf1(mes,mes1) - 1;
                            diasf = bisf(dia,dia1);
                        }
                        else if (mes>=mes1 && dia>=dia1){
                            mesesf = mesesf1(mes,mes1);
                            diasf = diasf1(dia,dia1);
                        }
                    }
                    else if (mes==4 || mes==6 || mes==9 || mes==11){
                        if (mes<=mes1 && dia<dia1){
                            mesesf = mesesf2(mes,mes1) - 1;
                            diasf = diasf3(dia,dia1);
                        }
                        else if (mes<mes1 && dia>=dia1){
                            mesesf = 12 - meses1(mes,mes1);
                            diasf = diasf1(dia,dia1);
                        }
                        else if (mes>mes1 && dia<dia1){
                            mesesf = mesesf1(mes,mes1) - 1;
                            diasf = diasf3(dia,dia1);
                        }
                        else if (mes>=mes1 && dia>=dia1){
                            mesesf = mesesf1(mes,mes1);
                            diasf = diasf1(dia,dia1);
                        }
                    }
                    else if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
                        if (mes<=mes1 && dia<dia1){
                            mesesf = mesesf2(mes,mes1) - 1;
                            diasf = diasf4(dia,dia1);
                        }
                        else if (mes<mes1 && dia>=dia1){
                            mesesf = 12 - meses1(mes,mes1);
                            diasf = diasf1(dia,dia1);
                        }
                        else if (mes>mes1 && dia<dia1){
                            mesesf = mesesf1(mes,mes1) - 1;
                            diasf = diasf4(dia,dia1);
                        }
                        else if (mes>=mes1 && dia>=dia1){
                            mesesf = mesesf1(mes,mes1);
                            diasf = diasf1(dia,dia1);
                        }
                    }
                }
                else{
                    if (mes==2){
                        if (mes<=mes1 && dia<dia1){
                            mesesf = mesesf2(mes,mes1) - 1;
                            diasf = diasf2(dia,dia1);
                        }
                        else if (mes<mes1 && dia>=dia1){
                            mesesf = 12 - meses1(mes,mes1);
                            diasf = diasf1(dia,dia1);
                        }
                        else if (mes>mes1 && dia<dia1){
                            mesesf = mesesf1(mes,mes1) - 1;
                            diasf = diasf2(dia,dia1);
                        }
                        else if (mes>=mes1 && dia>=dia1){
                            mesesf = mesesf1(mes,mes1);
                            diasf = diasf1(dia,dia1);
                        }
                    }
                    else if (mes==4 || mes==6 || mes==9 || mes==11){
                        if (mes<=mes1 && dia<dia1){
                            mesesf = mesesf2(mes,mes1) - 1;
                            diasf = diasf3(dia,dia1);
                        }
                        else if (mes<mes1 && dia>=dia1){
                            mesesf = 12 - meses1(mes,mes1);
                            diasf = diasf1(dia,dia1);
                        }
                        else if (mes>mes1 && dia<dia1){
                            mesesf = mesesf1(mes,mes1) - 1;
                            diasf = diasf3(dia,dia1);
                        }
                        else if (mes>=mes1 && dia>=dia1){
                            mesesf = mesesf1(mes,mes1);
                            diasf = diasf1(dia,dia1);
                        }
                    }
                    else if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
                        if (mes<=mes1 && dia<dia1){
                            mesesf = mesesf2(mes,mes1) - 1;
                            diasf = diasf4(dia,dia1);
                        }
                        else if (mes<mes1 && dia>=dia1){
                            mesesf = 12 - meses1(mes,mes1);
                            diasf = diasf1(dia,dia1);
                        }
                        else if (mes>mes1 && dia<dia1){
                            mesesf = mesesf1(mes,mes1) - 1;
                            diasf = diasf4(dia,dia1);
                        }
                        else if (mes>=mes1 && dia>=dia1){
                            mesesf = mesesf1(mes,mes1);
                            diasf = diasf1(dia,dia1);
                        }
                    }
                }
                //# de a�os bisiestos
                for (i=0;i<=edadt;){
                    bisi = bisi + 1;
                    i=i+4;
                }

                //meses --> dia

                    if (mes<mes1){
                    for (i=mes;i<mes1;){
                        if (i==2){
                            acum = acum + 28;
                        }
                        else if (i==4 || i==6 || i==9 || i==11){
                            acum = acum + 30;
                        }
                        else if (i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12){
                            acum = acum + 31;
                        }
                        i++;
                    }
                    }
                    else if (mes>mes1){
                        for (i=mes;i<=12;){
                            if (i==2){
                                acum = acum + 28;
                            }
                            else if (i==4 || i==6 || i==9 || i==11){
                                acum = acum + 30;
                            }
                            else if (i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12){
                                acum = acum + 31;
                            }
                        i++;
                        }
                        for (i=0;i<mes1;i++){
                            if (i==2){
                                acum = acum + 28;
                            }
                            else if (i==4 || i==6 || i==9 || i==11){
                                acum = acum + 30;
                            }
                            else if (i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12){
                                acum = acum + 31;
                            }
                        }
                    }

            else{}

                diaf=diasbasic(dia,dia1);
                dia_meses=acum + diaf;

                vida = bisi + dia_meses + (edadt*365);

                printf ("La edad de %s es %d a�os con %d meses y %d d�as.\n", name, edadt, meses, dias);

                if (mesesf==1 && diasf==1){
                    printf ("Faltan %d d�a con %d mes para el siguiente cumplea�os.", diasf, mesesf);
                }
                if (mesesf>1 && diasf>1){
                    printf ("Faltan %d d�as con %d meses para el siguiente cumplea�os.", diasf, mesesf);
                }
                else if (mesesf==1 && diasf==0){
                    printf ("Faltan %d mes para el siguiente cumplea�os.", mesesf);
                }
                else if (mesesf>1 && diasf==0){
                    printf ("Faltan %d meses para el siguiente cumplea�os.", mesesf);
                }
                else if (mesesf==0 && diasf==1){
                    printf ("Faltan %d d�a para el siguiente cumplea�os.", diasf);
                }
                else if (mesesf==0 && diasf>1){
                    printf ("Faltan %d d�as para el siguiente cumplea�os.", diasf);
                }
                else if (mesesf==0 && diasf==0){
                    printf ("�Feliz cumplea�os!");
                }

                diasf=0;
                mesesf=0;

                printf ("\nHas vivido %d d�as.\n", vida);

                acum=0;
                dia_meses=0;
                bisi=0;
                vida=0;

                do{
                    printf ("\n\t1. Continuar\t2. Regresar\n\n");
                    printf ("opci�n: ");
                    scanf ("%d", &a);
                    if (a<1 || a>2){
                        printf ("Opci�n incorrecta. ");
                        system("PAUSE");
                    }
                    else{}
                    system("cls");
                }while(a<1 || a>2);

            }while(a==1);
            system("cls");
        }
        else if(op==3){
            system("cls");
            printf ("Gracias por preferirnos, esperamos haber adivinado su edad ;)\n");
        }
    }
    else{
        printf ("Escoja una de las tres opciones. ");
        system("PAUSE");
        system("cls");
    }
}while(op==1 || op==2 || op<1 || op>3);
}
int edad(int x, int y){
    int edad=0;
    edad = y - x;
    return(edad);
}
int meses1(int x, int y){
    int mes=0;
    mes = y - x;
    return(mes);
}
int meses2(int x, int y){
    int mes=0;
    mes = 12 - (x - y);
    return(mes);
}
int mesesf1(int x, int y){
    int mes=0;
    mes = x - y;
    return(mes);
}
int mesesf2(int x, int y){
    int mes=0;
    mes = 12 - (y - x);
    return(mes);
}
int dias1(int x, int y){
    int dia=0;
    dia = y - x;
    return(dia);
}
int dias2(int x, int y){
    int dia=0;
    dia = 28 - (x - y);
    return(dia);
}
int dias3(int x, int y){
    int dia=0;
    dia = 30 - (x - y);
    return(dia);
}
int dias4(int x, int y){
    int dia=0;
    dia = 31 - (x - y);
    return(dia);
}
int bis(int x, int y){
    int dia=0;
    dia = 29 - (x - y);
    return(dia);
}
int diasf1(int x, int y){
    int dia=0;
    dia = x - y;
    return(dia);
}
int diasf2(int x, int y){
    int dia=0;
    dia = 28 - (y - x);
    return(dia);
}
int diasf3(int x, int y){
    int dia=0;
    dia = 30 - (y - x);
    return(dia);
}
int diasf4(int x, int y){
    int dia=0;
    dia = 31 - (y - x);
    return(dia);
}
int bisf(int x, int y){
    int dia=0;
    dia = 29 - (y - x);
    return(dia);
}
int diasbasic(int x, int y){
    int dias=0;
    dias = y - x;
    return(dias);
}