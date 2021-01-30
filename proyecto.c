#include <stdio.h>
#include <conio.h>
#include <stdlib.h> //limpiar pantalla
#include <windows.h> //espera

/*Este programa es el codigo para ejecutar
un triage hospitalario
*/

//Estructura para los datos del paciente

struct registro{
	
char nombre[50],sexo[10];
int edad;

}paciente;

//Programa
int main ()
{
	//Declaración de variables 
	char pre=168,ao=162,ae=130,ai=161,au=163,aa=160;
	int opc = 0,op = 0,res,vias,flujo,lista;

do{
	//Mensaje de bienvenida
printf("\n\n\t\tBienvenido al Triage para sala de urgencias\n\n");
printf("3) Iniciar				4) Salir\n");
scanf("%d",&opc);
Sleep(1000);
system("cls"); 

	switch (opc){   
	
	case 3: //Opción 3INICIAR  -Recopilación de datos del paciente
		fflush(stdin);
		printf("\n\t\t\tDATOS GENERALES DEL PACIENTE \n");
		printf("\n\nIngrese el nombre del paciente: ");
		scanf("%[^\n]",&paciente.nombre);
		fflush(stdin);
		printf("Ingrese el sexo del paciente: ");
		scanf("%[^\n]",&paciente.sexo);
		fflush(stdin);
		printf("Ingrese edad del paciente: ");
		scanf("%d",&paciente.edad);
		fflush(stdin);
		printf("\n\n1)Continuar				2)Regresar\n\n");
		scanf("%d",&op);
		Sleep(1000);
		system("cls");
		
		//Evaluación de los pacientes
		if(op == 1){
				fflush(stdin);
				printf("Conteste las siguientes preguntas relacionadas con la condici%cn del paciente\n 1=SI y 2=NO\n\n",ao);
				printf("1.%cEl paciente respira?\n",pre);
				scanf("%d",&res);
				//Primer criterio respiración 
				if(res == 2)
				{
					system("cls");
					printf("\n    ------------------------------------------------------------------------    \n\n");
					printf("\n\t\t\tDATOS GENERALES DEL PACIENTE \n\nNombre: %s\nSexo: %s\nEdad: %d",paciente.nombre,paciente.sexo,paciente.edad);
					printf("\n\n\nRESULTADO EVALUACION:\n\n\t\t\t\tCODIGO ROJO\n\nSe debe trasladar al paciente a la unidad de reanimaci%cn\n",ao);
					printf("El tiempo de atenci%cn debe ser menor a 5 minutos\n",ao);
					printf("\n\n    ------------------------------------------------------------------------    \n\n");
					system("pause");
					system("cls");
					break;   
				}else{
					//Segundo criterio vías aéreas
					printf("%cLas v%cas a%creas se encuentran despejadas?\n",pre,ai,ae);
					scanf("%d",&vias);
				if(vias == 2){
						system("cls");
						printf("\n    ------------------------------------------------------------------------    \n\n");
						printf("\n\t\t\tDATOS GENERALES DEL PACIENTE \n\nNombre: %s\nSexo: %s\nEdad: %d",paciente.nombre,paciente.sexo,paciente.edad);
						printf("\n\n\nRESULTADO EVALUACION:\n\n\t\t\t\tCODIGO ROJO\n\nSe debe trasladar al paciente a la sala de trauma o choque\n");
						printf("\nEl tiempo de atenci%cn debe ser menor a 5 minutos\n",ao);
						printf("\n\n    ------------------------------------------------------------------------    \n\n");
						system("pause");
						system("cls");
					}else{
						//Tercer criterio flujo sanguíneo                                                          
						printf("%cTiene una hemorragia?\n",pre,ai);
						scanf("%d",&flujo);
						if(flujo!=2)
						{
							system("cls");
							printf("\n    ------------------------------------------------------------------------    \n\n");
							printf("\n\t\t\tDATOS GENERALES DEL PACIENTE \n\nNombre: %s\nSexo: %s\nEdad: %d",paciente.nombre,paciente.sexo,paciente.edad);
							printf("\n\n\nRESULTADO EVALUACION:\n\n\t\t\t\tCODIGO ROJO\n\nSe debe trasladar al paciente a la sala de trauma o choque\n");
							printf("\nEl tiempo de atenci%cn debe ser menor a 5 minutos\n",ao);
							printf("\n\n    ------------------------------------------------------------------------    \n\n");
							system("pause");
							system("cls");
						}else{
							//Listado de posibles causas de urgencia
							Sleep(1000);
							system("cls");
							printf("\nA continuaci%cn se muestran motivos de urgencia.\n\nIndique si el paciente asiste por alguno de ellos 1=SI 2=NO\n\n",ao,ao,au);
							//Lista 1
							printf("-Trauma mayor\n-Pacientes con RCP\n-Perdida del estado de alerta-focalizaci%cn neurol%cgica\n",ao,ao);
							scanf("%d",&lista);
							if (lista ==1){
								system("cls");
								printf("\n    ------------------------------------------------------------------------    \n\n");
								printf("\n\t\t\tDATOS GENERALES DEL PACIENTE \n\nNombre: %s\nSexo: %s\nEdad: %d",paciente.nombre,paciente.sexo,paciente.edad);
								printf("\n\n\nRESULTADO EVALUACION:\n\n\t\t\t\tCodigo ROJO\n\nSe debe trasladar al paciente a la unidad de reanimaci%cn\n",ao);
								printf("\nEl tiempo de atenci%cn debe ser menor a 5 minutos\n",ao);
								printf("\n\n    ------------------------------------------------------------------------    \n\n");
								system("pause");
								system("cls");
							}else{
								//Lista 2
								printf("\n-Trauma menor\n-Hemorragia moderada\n-Cefalea sin signos neurol%cgicos\n-Obstrucci%cn de la v%ca a%crea incompleta\n",ao,ao,ai,ae);
								scanf("%d",&lista);
								if (lista ==1){
									system("cls");
									printf("\n    ------------------------------------------------------------------------    \n\n");
									printf("\n\t\t\tDATOS GENERALES DEL PACIENTE \n\nNombre: %s\nSexo: %s\nEdad: %d",paciente.nombre,paciente.sexo,paciente.edad);
									printf("\n\n\nRESULTADO EVALUACION:\n\n\t\t\t\tCODIGO AMARILLO\n\nSe debe trasladar al paciente a la %crea de observaci%cn de urgencias\n",aa,ao);
									printf("\nEl paciente debe recibir la atenci%cn entre los primeros 30 y 60 minutos\n",ao);
									printf("\n\n    ------------------------------------------------------------------------    \n\n");
									system("pause");
									system("cls");
								}else{
									//Lista 3
									printf("\n-Cefalea leve\n-Contusiones menores\n-Patolog%ca infecciosa que no requiere hospitalizaci%cn\n-Patolog%ca cr%cnica no agudizada\n",ai,ao,ai,ao);
									scanf("%d",&lista);
									if(lista==1){
										system("cls");
										printf("\n    ------------------------------------------------------------------------    \n\n");
										printf("\n\t\t\tDATOS GENERALES DEL PACIENTE \n\nNombre: %s\nSexo: %s\nEdad: %d",paciente.nombre,paciente.sexo,paciente.edad);
										printf("\n\n\nRESULTADO EVALUACION:\n\n\t\t\t\tCODIGO VERDE\n\nSe debe trasladar al paciente a la sala de espera del %crea de urgencias\n",aa);
										printf("\nLa condici%cn del paciente no pone en riesgo su vida, no hay tiempo definido para que reciba atenci%cn medica\n",ao,ao);
										printf("\n\n    ------------------------------------------------------------------------    \n\n");
										system("pause");
										system("cls");										
									}else{
										Sleep(1000);
										system("cls");
										//Evaluación de las constantes vitales
										printf("A continuaci%cn se evaluaran los signos vitales del paciente.\nPor favor conteste con base en los datos del paciente\n",ao);
										//Presión arterial
										printf("\n\t%cEn que intervalo se encuentra la presi%cn arterial del paciente?\n\n",pre,ao);
										printf("1) Sist%clica 120mmHg  +-  20mmHg\n   Diast%clica 80mmHg  +- 20mmHg\n\n",ao,ao);
										printf("2) Sist%clica <110mmHg    >160mmHg\n   Diast%clica <80mmHg   >100mmHg\n\n",ao,ao);
										printf("3) Sist%clica <90mmHg    >200mmHg\n   Diast%clica <60mmHg   >120mmHg\n\n",ao,ao);
										scanf("%d",&opc);
									switch(opc)
									{	
										 case 1: //Presión arterial en parámetros verdes 
										 printf("\n\t%cEn que intervalo se encuentra la frecuencia cardica de latidos por minuto del  paciente?\n\n",pre);
										 printf("1)  60 lpm   -  80 lpm\n"); 
										 printf("2) <60 lpm    >110 lpm\n");
										 printf("3) <40 lpm    >130 lpm\n");
										 scanf("%d",&opc);
											switch(opc)
											{
											
											case 1: //Frecuencia cardica en parámetros verdes
											system("cls");
											printf("\n    ------------------------------------------------------------------------    \n\n");
											printf("\n\t\t\tDATOS GENERALES DEL PACIENTE \n\nNombre: %s\nSexo: %s\nEdad: %d",paciente.nombre,paciente.sexo,paciente.edad);
											printf("\n\n\nRESULTADO EVALUACION:\n\n\t\t\t\tCODIGO VERDE\n\nSe debe trasladar al paciente a la sala de espera del %crea de urgencias\n",aa);
											printf("\nLa condici%cn del paciente no pone en riesgo su vida, no hay tiempo definido para que reciba atenci%cn medica\n",ao,ao);
											printf("\n\n    ------------------------------------------------------------------------    \n\n");
											system("pause");
											system("cls");
											break;
																																											  
											case 2: //Frecuencia cardica en parámetros amarillos
											printf("\n%cEn que intervalo se encuentra la frecuencia respiratoria por minuto del paciente?\n\n",pre);
											printf("1)  16 p/min  -  20 p/min\n");
											printf("2) <16 p/min    >24 p/min\n");
											printf("3) <10 p/min    >30 p/min\n");
											scanf("%d",&opc);
												switch(opc)
												{
													case 1: //Frecuencia respiratoria en parámetros verdes
													system("cls");
													printf("\n    ------------------------------------------------------------------------    \n\n");
													printf("\n\t\t\tDATOS GENERALES DEL PACIENTE \n\nNombre: %s\nSexo: %s\nEdad: %d",paciente.nombre,paciente.sexo,paciente.edad);
													printf("\n\n\nRESULTADO EVALUACION:\n\n\t\t\t\tCODIGO VERDE\n\nSe debe trasladar al paciente a la sala de espera del %crea de urgencias\n",aa);
													printf("\nLa condici%cn del paciente no pone en riesgo su vida, no hay tiempo definido para que reciba atenci%cn medica\n",ao,ao);
													printf("\n\n    ------------------------------------------------------------------------    \n\n");
													system("pause");
													system("cls");
													break;
													
													case 2: //Frecuencia respiratoria en parámetros amarillos
													system("cls");
													printf("\n    ------------------------------------------------------------------------    \n\n");
													printf("\n\t\t\tDATOS GENERALES DEL PACIENTE \n\nNombre: %s\nSexo: %s\nEdad: %d",paciente.nombre,paciente.sexo,paciente.edad);
													printf("\n\n\nRESULTADO EVALUACION:\n\n\t\t\t\tCODIGO VERDE\n\nSe debe trasladar al paciente a la sala de espera del %crea de urgencias\n",aa);
													printf("\nLa condici%cn del paciente no pone en riesgo su vida, no hay tiempo definido para que reciba atenci%cn medica\n",ao,ao);
													printf("\n\n    ------------------------------------------------------------------------    \n\n");
													system("pause");
													system("cls");
													break;
													
													case 3: //Frecuencia respiratoria en parámetros rojos
													system("cls");
													printf("\n    ------------------------------------------------------------------------    \n\n");
													printf("\n\t\t\tDATOS GENERALES DEL PACIENTE \n\nNombre: %s\nSexo: %s\nEdad: %d",paciente.nombre,paciente.sexo,paciente.edad);
													printf("\n\n\nRESULTADO EVALUACION:\n\n\t\t\t\tCODIGO AMARILLO\n\nSe debe trasladar al paciente a la %crea de observaci%cn de urgencias\n",aa,ao);
													printf("\nEl paciente debe recibir la atenci%cn entre los primeros 30 y 60 minutos\n",ao);
													printf("\n\n    ------------------------------------------------------------------------    \n\n");
													system("pause");
													system("cls");
													break;
													
													default:
													printf("Opci%cn no valida",ao);
													break;
												}
											break;
											
											case 3: //Frecuencia cardiaca en parámetros rojos
											printf("\n%cEn que intervalo se encuentra la frecuencia respiratoria por minuto del paciente?\n\n",pre);
											printf("1)  16 p/min  -  20 p/min\n");
											printf("2) <16 p/min    >24 p/min\n");
											printf("3) <10 p/min    >30 p/min\n");
											scanf("%d",&opc);
												switch(opc)
												{
													case 1: //Frecuencia respiratoria en parámetros verdes
													system("cls");
													printf("\n    ------------------------------------------------------------------------    \n\n");
													printf("\n\t\t\tDATOS GENERALES DEL PACIENTE \n\nNombre: %s\nSexo: %s\nEdad: %d",paciente.nombre,paciente.sexo,paciente.edad);
													printf("\n\n\nRESULTADO EVALUACION:\n\n\t\t\t\tCODIGO VERDE\n\nSe debe trasladar al paciente a la sala de espera del %crea de urgencias\n",aa);
													printf("\nLa condici%cn del paciente no pone en riesgo su vida, no hay tiempo definido para que reciba atenci%cn medica\n",ao,ao);
													printf("\n\n    ------------------------------------------------------------------------    \n\n");
													system("pause");
													system("cls");
													break;
													
													case 2: //Frecuencia respiratoria en parámetros amarillos
													system("cls");
													printf("\n    ------------------------------------------------------------------------    \n\n");
													printf("\n\t\t\tDATOS GENERALES DEL PACIENTE \n\nNombre: %s\nSexo: %s\nEdad: %d",paciente.nombre,paciente.sexo,paciente.edad);
													printf("\n\n\nRESULTADO EVALUACION:\n\n\t\t\t\tCODIGO VERDE\n\nSe debe trasladar al paciente a la sala de espera del %crea de urgencias\n",aa);
													printf("\nLa condici%cn del paciente no pone en riesgo su vida, no hay tiempo definido para que reciba atenci%cn medica\n",ao,ao);
													printf("\n\n    ------------------------------------------------------------------------    \n\n");
													system("pause");
													system("cls");
													break;
													
													case 3: //Frecuencia respiratoria en parámetros rojos
													system("cls");
													printf("\n    ------------------------------------------------------------------------    \n\n");
													printf("\n\t\t\tDATOS GENERALES DEL PACIENTE \n\nNombre: %s\nSexo: %s\nEdad: %d",paciente.nombre,paciente.sexo,paciente.edad);
													printf("\n\n\nRESULTADO EVALUACION:\n\n\t\t\t\tCODIGO AMARILLO\n\nSe debe trasladar al paciente a la %crea de observaci%cn de urgencias\n",aa,ao);
													printf("\nEl paciente debe recibir la atenci%cn entre los primeros 30 y 60 minutos\n",ao);
													printf("\n\n    ------------------------------------------------------------------------    \n\n");
													system("pause");
													system("cls");
													break;
												}
											break;
											}
										 break;
										 
										 case 2: //Presión arterial en parámetros amarillos
										 printf("\n%cEn que intervalo se encuentra la frecuencia cardica de latidos por minuto del  paciente?\n\n",pre);
										 printf("1)  60 lpm   -  80 lpm\n"); 
										 printf("2) <60 lpm    >110 lpm\n");
										 printf("3) <40 lpm    >130 lpm\n");
										 scanf("%d",&opc);
											switch(opc)
											{
												case 1: //Frecuencia cardica en parámetros verdes
												system("cls");
												printf("\n    ------------------------------------------------------------------------    \n\n");
												printf("\n\t\t\tDATOS GENERALES DEL PACIENTE \n\nNombre: %s\nSexo: %s\nEdad: %d",paciente.nombre,paciente.sexo,paciente.edad);
												printf("\n\n\nRESULTADO EVALUACION:\n\n\t\t\t\tCODIGO VERDE\n\nSe debe trasladar al paciente a la sala de espera del %crea de urgencias\n",aa);
												printf("\nLa condici%cn del paciente no pone en riesgo su vida, no hay tiempo definido para que reciba atenci%cn medica\n",ao,ao);
												printf("\n\n    ------------------------------------------------------------------------    \n\n");
												system("pause");
												system("cls");
												break;
												
												case 2: //Frecuencia cardiaca en parámetros amarillos
												printf("\n%cEn que intervalo se encuentra la frecuencia respiratoria por minuto del paciente?\n\n",pre);
												printf("1)  16 p/min  -  20 p/min\n");
												printf("2) <16 p/min    >24 p/min\n");
												printf("3) <10 p/min    >30 p/min\n");
												scanf("%d",&opc);
												switch (opc)
												{
													case 1: //Frecuencia respiratoria en parámetros verdes
													system("cls");
													printf("\n    ------------------------------------------------------------------------    \n\n");
													printf("\n\t\t\tDATOS GENERALES DEL PACIENTE \n\nNombre: %s\nSexo: %s\nEdad: %d",paciente.nombre,paciente.sexo,paciente.edad);
													printf("\n\n\nRESULTADO EVALUACION:\n\n\t\t\t\tCODIGO VERDE\n\nSe debe trasladar al paciente a la sala de espera del %crea de urgencias\n",aa);
													printf("\nLa condici%cn del paciente no pone en riesgo su vida, no hay tiempo definido para que reciba atenci%cn medica\n",ao,ao);
													printf("\n\n    ------------------------------------------------------------------------    \n\n");
													system("pause");
													system("cls");
													break;
													
													case 2: //Frecuencia respiratoria en parámetros amarillos
													system("cls");
													printf("\n    ------------------------------------------------------------------------    \n\n");
													printf("\n\t\t\tDATOS GENERALES DEL PACIENTE \n\nNombre: %s\nSexo: %s\nEdad: %d",paciente.nombre,paciente.sexo,paciente.edad);
													printf("\n\n\nRESULTADO EVALUACION:\n\n\t\t\t\tCODIGO VERDE\n\n Se debe trasladar al paciente a la sala de espera del %crea de urgencias\n",aa);
													printf("\nLa condici%cn del paciente no pone en riesgo su vida, no hay tiempo definido para que reciba atenci%cn medica\n",ao,ao);
													printf("\n\n    ------------------------------------------------------------------------    \n\n");
													system("pause");
													system("cls");
													break;
													
													case 3: //Frecuencia respiratoria en parámetros rojos
													system("cls");
													printf("\n    ------------------------------------------------------------------------    \n\n");
													printf("\n\t\t\tDATOS GENERALES DEL PACIENTE \n\nNombre: %s\nSexo: %s\nEdad: %d",paciente.nombre,paciente.sexo,paciente.edad);
													printf("\n\n\nRESULTADO EVALUACION:\n\n\t\t\t\tCODIGO AMARILLO\n\nSe debe trasladar al paciente a la %crea de observaci%cn de urgencias\n",aa,ao);
													printf("\nEl paciente debe recibir la atenci%cn entre los primeros 30 y 60 minutos\n",ao);
													printf("\n\n    ------------------------------------------------------------------------    \n\n");
													system("pause");
													system("cls");
													break;
													
													default:
													printf("\nOpci%cn no valida",ao);
													break;
												}
												break;
												
												case 3: //Frecuencia cardiaca en parámetros rojos
												printf("\n%cEn que intervalo se encuentra la frecuencia respiratoria por minuto del paciente?\n\n",pre);
												printf("1)  16 p/min  -  20 p/min\n");
												printf("2) <16 p/min    >24 p/min\n");
												printf("3) <10 p/min    >30 p/min\n");
												scanf("%d",&opc);
												switch(opc)
												{
													case 1: //Frecuencia respiratoria en parámetros verdes
													system("cls");
													printf("\n    ------------------------------------------------------------------------    \n\n");
													printf("\n\t\t\tDATOS GENERALES DEL PACIENTE \n\nNombre: %s\nSexo: %s\nEdad: %d",paciente.nombre,paciente.sexo,paciente.edad);
													printf("\n\n\nRESULTADO EVALUACION:\n\n\t\t\t\tCODIGO AMARILLO\n\n Se debe trasladar al paciente a la %crea de observaci%cn de urgencias\n",aa,ao);
													printf("\nEl paciente debe recibir la atenci%cn entre los primeros 30 y 60 minutos\n",ao);
													printf("\n\n    ------------------------------------------------------------------------    \n\n");
													system("pause");
													system("cls");
													break;
													
													case 2: //Frecuencia respiratoria en parámetros amarillos
													system("cls");
													printf("\n    ------------------------------------------------------------------------    \n\n");
													printf("\n\t\t\tDATOS GENERALES DEL PACIENTE \n\nNombre: %s\nSexo: %s\nEdad: %d",paciente.nombre,paciente.sexo,paciente.edad);
													printf("\n\n\nRESULTADO EVALUACION:\n\n\t\t\t\tCODIGO AMARILLO\n\n Se debe trasladar al paciente a la %crea de observaci%cn de urgencias\n",aa,ao);
													printf("\nEl paciente debe recibir la atenci%cn entre los primeros 30 y 60 minutos\n",ao);
													printf("\n\n    ------------------------------------------------------------------------    \n\n");
													system("pause");
													system("cls");
													break;
													
													case 3: //Frecuencia respiratoria en parámetros rojos
													system("cls");
													printf("\n    ------------------------------------------------------------------------    \n\n");
													printf("\n\t\t\tDATOS GENERALES DEL PACIENTE \n\nNombre: %s\nSexo: %s\nEdad: %d",paciente.nombre,paciente.sexo,paciente.edad);
													printf("\n\n\nRESULTADO EVALUACION:\n\n\t\t\t\tCodigo ROJO\n\n Se debe trasladar al paciente a la unidad de reanimaci%cn\n",ao);
													printf("\nEl tiempo de atenci%cn debe ser menor a 5 minutos\n",ao);
													printf("\n\n    ------------------------------------------------------------------------    \n\n");
													system("pause");
													system("cls");
													break;
												}
												break;
												
												default:
												printf ("Opci%cn no v%clida",ao,aa);
												break;
											}
										 break;

										 case 3: //Presión arterial en parámetros rojos
										  printf("\n%cEn que intervalo se encuentra la frecuencia cardica de latidos por minuto del  paciente?\n\n",pre);
										 printf("1)  60 lpm   -  80 lpm\n"); 
										 printf("2) <60 lpm    >110 lpm\n");
										 printf("3) <40 lpm    >130 lpm\n");
										 scanf("%d",&opc);
											switch(opc)
											{
												
												case 1://Frecuencia cardica en parámetros verdes
												system("cls");
												printf("\n    ------------------------------------------------------------------------    \n\n");
												printf("\n\t\t\tDATOS GENERALES DEL PACIENTE \n\nNombre: %s\nSexo: %s\nEdad: %d",paciente.nombre,paciente.sexo,paciente.edad);
												printf("\n\n\nRESULTADO EVALUACION:\n\n\t\t\t\tCODIGO VERDE\n\nSe debe trasladar al paciente a la sala de espera del %crea de urgencias\n",aa);
												printf("\nLa condici%cn del paciente no pone en riesgo su vida, no hay tiempo definido para que reciba atenci%cn medica\n",ao,ao);
												printf("\n\n    ------------------------------------------------------------------------    \n\n");
												system("pause");
												system("cls");
												break;
												
												case 2://Frecuencia cardiaca en parámetros amarillos
												printf("\n%cEn que intervalo se encuentra la frecuencia respiratoria por minuto del paciente?\n\n",pre);
												printf("1)  16 p/min  -  20 p/min\n");
												printf("2) <16 p/min    >24 p/min\n");
												printf("3) <10 p/min    >30 p/min\n");
												scanf("%d",&opc);
												switch(opc)
												{
													case 1: //Frecuencia respiratoria en parámetros verdes
													system("cls");
													printf("\n    ------------------------------------------------------------------------    \n\n");
													printf("\n\t\t\tDATOS GENERALES DEL PACIENTE \n\nNombre: %s\nSexo: %s\nEdad: %d",paciente.nombre,paciente.sexo,paciente.edad);
													printf("\n\n\nRESULTADO EVALUACION:\n\n\t\t\t\tCODIGO AMARILLO\n\nSe debe trasladar al paciente a la %crea de observaci%cn de urgencias\n",aa,ao);
													printf("\nEl paciente debe recibir la atenci%cn entre los primeros 30 y 60 minutos\n",ao);
													printf("\n\n    ------------------------------------------------------------------------    \n\n");
													system("pause");
													system("cls");
													break;
													
													case 2: //Frecuencia respiratoria en parámetros amarillos
													system("cls");
													printf("\n    ------------------------------------------------------------------------    \n\n");
													printf("\n\t\t\tDATOS GENERALES DEL PACIENTE \n\nNombre: %s\nSexo: %s\nEdad: %d",paciente.nombre,paciente.sexo,paciente.edad);
													printf("\n\n\nRESULTADO EVALUACION:\n\n\t\t\t\tCODIGO AMARILLO\n\nSe debe trasladar al paciente a la %crea de observaci%cn de urgencias\n",aa,ao);
													printf("\nEl paciente debe recibir la atenci%cn entre los primeros 30 y 60 minutos\n",ao);
													printf("\n\n    ------------------------------------------------------------------------    \n\n");
													system("pause");
													system("cls");
													break;
													
													case 3: //Frecuencia respiratoria en parámetros rojos
													system("cls");
													printf("\n    ------------------------------------------------------------------------    \n\n");
													printf("\n\t\t\tDATOS GENERALES DEL PACIENTE \n\nNombre: %s\nSexo: %s\nEdad: %d",paciente.nombre,paciente.sexo,paciente.edad);
													printf("\n\n\nRESULTADO EVALUACION:\n\n\t\t\t\tCodigo ROJO\n\nSe debe trasladar al paciente a la unidad de reanimaci%cn\n",ao);
													printf("\nEl tiempo de atenci%cn debe ser menor a 5 minutos\n",ao);
													printf("\n\n    ------------------------------------------------------------------------    \n\n");
													system("pause");
													system("cls");
													break;
													
													default:
													printf("Opci%cn no valida",ao);
													break;
												}
												
												break;
												
												case 3://Frecuencia cardiaca en parámetros rojos
												printf("\n%cEn que intervalo se encuentra la frecuencia respiratoria por minuto del paciente?\n\n",pre);
												printf("1)  16 p/min  -  20 p/min\n");
												printf("2) <16 p/min    >24 p/min\n");
												printf("3) <10 p/min    >30 p/min\n");
												scanf("%d",&opc);
												switch(opc)
												{
													case 1: //Frecuencia respiratoria en parámetros verdes
													system("cls");
													printf("\n    ------------------------------------------------------------------------    \n\n");
													printf("\n\t\t\tDATOS GENERALES DEL PACIENTE \n\nNombre: %s\nSexo: %s\nEdad: %d",paciente.nombre,paciente.sexo,paciente.edad);
													printf("\n\n\nRESULTADO EVALUACION:\n\n\t\t\t\tCODIGO AMARILLO\n\nSe debe trasladar al paciente a la %crea de observaci%cn de urgencias\n",aa,ao);
													printf("\nEl paciente debe recibir la atenci%cn entre los primeros 30 y 60 minutos\n",ao);
													printf("\n\n    ------------------------------------------------------------------------    \n\n");
													system("pause");
													system("cls");
													break;
													
													case 2: //Frecuencia respiratoria en parámetros amarillos
													system("cls");
													printf("\n    ------------------------------------------------------------------------    \n\n");
													printf("\n\t\t\tDATOS GENERALES DEL PACIENTE \n\nNombre: %s\nSexo: %s\nEdad: %d",paciente.nombre,paciente.sexo,paciente.edad);
													printf("\n\n\nRESULTADO EVALUACION:\n\n\t\t\t\tCODIGO AMARILLO\n\nSe debe trasladar al paciente a la %crea de observaci%cn de urgencias\n",aa,ao);
													printf("\nEl paciente debe recibir la atenci%cn entre los primeros 30 y 60 minutos\n",ao);
													printf("\n\n    ------------------------------------------------------------------------    \n\n");
													system("pause");
													system("cls");
													break;
													
													case 3: //Frecuencia respiratoria en parámetros rojos
													system("cls");
													printf("\n    ------------------------------------------------------------------------    \n\n");
													printf("\n\t\t\tDATOS GENERALES DEL PACIENTE \n\nNombre: %s\nSexo: %s\nEdad: %d",paciente.nombre,paciente.sexo,paciente.edad);
													printf("\n\n\nRESULTADO EVALUACION:\n\n\t\t\t\tCodigo ROJO\n\nSe debe trasladar al paciente a la unidad de reanimaci%cn\n",ao);
													printf("\nEl tiempo de atenci%cn debe ser menor a 5 minutos\n",ao);
													printf("\n\n    ------------------------------------------------------------------------    \n\n");
													system("pause");
													system("cls");
													break;
													
													default:
													printf("Opci%cn no valida",ao);
													break;
												}
												
												break;
											}
										break;	
									}
									}  //Nuevo
										
								}//Constantes vitales
								}
							
						}
					}
				}
			}//Continuar o regresar  											  
		break; //Menu opcion iniciar
		
	case 4: //Menu opción salir 
		printf("Saliste del registro"); //Seleccionar la opción salir del menu principal
	break;
	}
	
}while (opc !=4); //Regresar al menu prncipal después de haber finalizado un registro
	
return 0;

}