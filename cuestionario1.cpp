#include<iostream>  //para 	cout o cin
#include<conio.h>   //para 	getch();
#include<stdlib.h>  //para 	system("PAUSE");
using namespace std;
main ()
{
	int Opc, idioma;//sera la opcion de elegir
	int Salir;//indica el momento para salir del programa
	char respuesta,repetir;
	int contap=0,contan=0,contador=0;
	
			cout <<"\n\n Seleccione un idioma\n\n\n";
			cout<<"1-Espa�ol\n";
			cout<<"2-Ingles\n";
			cout<<"3-Aleman\n";
			cin>>idioma;	 
			if (idioma==1)
				{ 
				cout<<"Estas en idioma-Espa�ol\n";
			//	cout<<"si puntaje es menor a-----";
			//	cout<<"desea repetir? s";
			while(contador<2)
			{
		
				do
				{
						contap=0;
						contan=0;
				
						cout<< "Modulos"<<endl;
						cout<< "1)Manejo de tecnicas de programacion"<<endl;
						cout<< "2)Comunicacion en los ambitos escolar y profesional"<<endl;
						cout<< "3)Interaccion inicial en ingles"<<endl;
						cout<< "4)Aplicacion de matematicas discretas"<<endl;
						cout<< "5)Mantenimiento de equipo de computo basico"<<endl;
						cout<< "6)Representacion simbolica y angular del entorno"<<endl;
						cout<< "7)Identificacion de la biodiversidad"<<endl;
						cout<< "8)Analisis de la materia y la energia"<<endl;
						cout<< "9)Manejo de aplicaciones por medios digitales"<<endl;
						cout<< "10)Salir"<<endl;
						cout<<"Dame otra opcion(rango 1-10)"<<endl;
						cin>>Opc;
						switch (Opc) 
							{
								case 1: // Modulo a
								
								cout<<"Manejo de tecnicas de programacion"<<endl; 
								cout<<"1-�Que es programacion?"<<endl;
								cout<<"a)dise�ar, depurar, codificar y mantener un codigo"<<endl;
								cout<<"b)Un conjunto de programas"<<endl;
								cout<<"c)Secuencia de operaciones en un determinado orden"<<endl;
								cout<<"d)Se usa para resolver un problema"<<endl;
								cin>>respuesta;
		 
							    if(respuesta=='a')
									{
								  		cout<<"la respuesta es correcta1"<<endl;
								  		contap=contap+1;
							    	}
								else
									{
										cout<<"La respuesta es incorrecta1"<<endl;
										contan=contan+1;
									}	
										cout<<"2-�Que es un algoritmo?"<<endl;
										cout<<"a)Es la forma para resolver un problema"<<endl;
										cout<<"b)Un conjunto de criterios para evaluar"<<endl;
										cout<<"c)Enlista opciones"<<endl;
										cout<<"d)Indica el orden de realizacion"<<endl;
										cin>>respuesta;	
							    if(respuesta=='a')
									{
										cout<<"la respuesta es correcta2"<<endl;
										contap=contap+1;
								    }
								else
									{
										cout<<"La respuesta es incorrecta2"<<endl; 
										contan=contan+1;
									}
										cout<<"�3-�Cuales son las fases del ciclo de vida del Software?"<<endl;
										cout<<"a)Mantenimiento y evolucion, Identificacion de necesidades"<<endl;
										cout<<"b)Validaci�n, analisis y dise�o"<<endl;
										cout<<"c)Pruebas y codificacion"<<endl;
										cout<<"d)Todas las anteriores"<<endl;
										cin>>respuesta;	
							    if(respuesta=='d')
								    {
								    	cout<<"la respuesta es correcta3"<<endl;
								    	contap=contap+1;
								    }
								else
									{
								    	cout<<"La respuesta es incorrecta3"<<endl; 
										contan=contan+1;
								    }
								    	cout<<"4-�Identificacion de Necesidades:�Cuales son las fases para plantear un problema?"<<endl;
										cout<<"a)Establecer y Listar"<<endl;
										cout<<"b)Validar, Analizar y Dise�ar"<<endl;
										cout<<"c)Establecer, Listar, Recabar, Evaluar"<<endl;
										cout<<"d)Ninguna"<<endl;
										cin>>respuesta;
								if(respuesta=='a')
									{
								    	cout<<"la respuesta es correcta"<<endl;	
								    	contap=contap+1;
								    } 
								else
									{
								    	cout<<"La respuesta es incorrecta"<<endl;
								    	contan=contan+1;
										
								    }
								    cout<<"5-�Que es establecer?"<<endl;
										cout<<"a)Las oportunidades a partir de los criterios que se establezcan"<<endl;
										cout<<"b)Datos e informacion para cada oportunidad y garantizar una decision"<<endl;
										cout<<"c)Listar opciones que seran la base de cada oportunidad"<<endl;
										cout<<"d)Conjunto de criterios para evaluar las oportunidades, si se adecua con requerimiento del cliente"<<endl;
										cin>>respuesta;
								if(respuesta=='d')
									{
								    	cout<<"la respuesta es correcta"<<endl;
								    	contap=contap+1;
								    }
								else
									{
								    	cout<<"La respuesta es incorrecta"<<endl; 
								    	contan=contan+1;
									
								    }
								    	cout<<"6-�Que es Listar?"<<endl;
										cout<<"a)Conjunto de criterios para evaluar las oportunidades, si se adecua con requerimiento del cliente"<<endl;
										cout<<"b)Listar opciones que seran la base de cada oportunidad"<<endl;
										cout<<"c)Datos e informacion para cada oportunidad y garantizar una decision"<<endl;
										cout<<"d)Las oportunidades a partir de los criterios que se establezcan"<<endl;
										cin>>respuesta;
								if(respuesta=='b')
									{
								    	cout<<"la respuesta es correcta"<<endl;
								    	contap=contap+1;
								    }
								else
									{
								    	cout<<"La respuesta es incorrecta"<<endl;
								    	contan=contan+1;
										
							    	}
							    	cout<<"7-�Que es recabar?"<<endl;
										cout<<"a)Las oportunidades a partir de los criterios que se establezcan"<<endl;
										cout<<"b)Datos e informacion para cada oportunidad y garantizar una decision"<<endl;
										cout<<"c)Listar opciones que seran la base de cada oportunidad"<<endl;
										cout<<"d)Conjunto de criterios para evaluar las oportunidades,si se adecua con requerimiento del cliente"<<endl;
										cin>>respuesta;
								if(respuesta=='a')
									{
							    		cout<<"la respuesta es correcta"<<endl;
							    		contap=contap+1;
							    	}
								else
									{
								    	cout<<"La respuesta es incorrecta"<<endl;
								    	contan=contan+1;
										
							    	}
								cout<<"8-�Que es evaluar?"<<endl;
										cout<<"a)Conjunto de criterios para evaluar las oportunidades, si se adecua con requerimiento del cliente"<<endl;
										cout<<"b)Listar opciones que ser�n la base de cada oportunidad"<<endl;
										cout<<"c)Datos e informacion para cada oportunidad y garantizar una decision"<<endl;
										cout<<"d)Las oportunidades a partir de los criterios que se establezcan"<<endl;
										cin>>respuesta;
								if(respuesta=='d')
									{
							    		cout<<"la respuesta es correcta"<<endl;
							    		contap=contap+1;
							    	}	 
								else
									{
								    	cout<<"La respuesta es incorrecta"<<endl;
								    	contan=contan+1;
										
							    	}
							    	cout<<"9-�Cual es el ciclo de vida del Software?"<<endl;
										cout<<"a)Definicion de necesidades, analisis, dise�o, codificacion"<<endl;
										cout<<"b)Pruebas, validacion, mantenimiento y evolucion"<<endl;
										cout<<"c)Las anteriores"<<endl;
										cout<<"d)Ninguna"<<endl;
										cin>>respuesta;
								if(respuesta=='a')
									{
										cout<<"la respuesta es correcta"<<endl;	
										contap=contap+1;
									}
								else
									{
										cout<<"La respuesta es incorrecta"<<endl; 
										contan=contan+1;
									}
										cout<<"10-�Para que se usa un algoritmo?"<<endl;
										cout<<"a)Para la programacion del software"<<endl;
										cout<<"b)Para indicar el orden"<<endl;
										cout<<"c)Para obtener un resultado"<<endl;
										cout<<"d)Ninguna de las anteriores"<<endl;
										cin>>respuesta;
							    if(respuesta=='a')
								    {
										cout<<"la respuesta es correcta"<<endl;
										contap=contap+1;
									} 
								else
									{
										cout<<"La respuesta es incorrecta"<<endl; 
										contan=contan+1;
									}
										cout<<"11-�Como se usa un algoritmo?"<<endl;
										cout<<"a)Se obtiene el mismo resultado"<<endl;
										cout<<"b)Para poder crear un software"<<endl;
										cout<<"c)Resuelve un problema planteado"<<endl;
										cout<<"d)Todas"<<endl;
										cin>>respuesta;
								if(respuesta=='a')
									{
										cout<<"la respuesta es correcta"<<endl;
										contap=contap+1;
									}
								else
									{
										cout<<"La respuesta es incorrecta"<<endl;
										contan=contan+1;
									}
									cout<<"12-�Que es el pseudocodigo?"<<endl;
										cout<<"a)Conjunto de instrucciones o reglas"<<endl;
										cout<<"b)Indica el orden"<<endl;
										cout<<"c)Para obtener el mismo resultado"<<endl;
										cout<<"d)Descripcion de un algoritmo"<<endl;
										cin>>respuesta;
								if(respuesta=='a')
									{
										cout<<"la respuesta es correcta"<<endl;
										contap=contap+1;
									}
								else
									{
										cout<<"La respuesta es incorrecta"<<endl;
										contan=contan+1;
									}
										cout<<"13-�Cuantos tipos de condicion hay?"<<endl;
										cout<<"a)2"<<endl;
										cout<<"b)3"<<endl;
										cout<<"c)1"<<endl;
										cout<<"d)5"<<endl;
										cin>>respuesta;
								if(respuesta=='a')
									{
										cout<<"la respuesta es correcta"<<endl;
										contap=contap+1;
									}
								else
									{
										cout<<"La respuesta es incorrecta"<<endl; 
										contan=contan+1;
									}
									cout<<"14-�Cuales son?"<<endl;
										cout<<"a)Condicional simple, compuesta y operador"<<endl;
										cout<<"b)Ninguna"<<endl;
										cout<<"c)Condicional simple y compuesta"<<endl;
										cout<<"d)a y b"<<endl;
										cin>>respuesta;
								if(respuesta=='a')
									{
										cout<<"la respuesta es correcta"<<endl;
										contap=contap+1;
									}
								else
									{
										cout<<"La respuesta es incorrecta"<<endl;
										contan=contan+1;
									}
									cout<<"15-�Como se usa un pseudocodigo?"<<endl;
										cout<<"a)En un unico punto de inicio"<<endl;
										cout<<"b)Un numero finito de caminos entre el punto de inicio y los posibles puntos de termino"<<endl;
										cout<<"c)Ambos"<<endl;
										cout<<"d)Otro"<<endl;
										cin>>respuesta;
								if(respuesta=='c')
									{
										cout<<"la respuesta es correcta"<<endl;
										contap=contap+1;
									}
								else
									{
										cout<<"La respuesta es incorrecta"<<endl;
										contan=contan+1;
									}
										cout<<"16-�Quien nos indica el flujo de los procesos?"<<endl;
										cout<<"a)Una flecha"<<endl;
										cout<<"b)Una entrada de datos"<<endl;
										cout<<"c)Un circulo"<<endl;
										cout<<"d)Una salida de datos"<<endl;
										cin>>respuesta;
								if(respuesta=='a')
									{
										cout<<"la respuesta es correcta"<<endl;
										contap=contap+1;
									}
								else
									{
										cout<<"La respuesta es incorrecta"<<endl;	 
										contan=contan+1;
									}
										cout<<"17-En esta fase el programa se pasa a un lenguaje de programacion �Que fase es?"<<endl;
										cout<<"a)Analisis"<<endl;
										cout<<"b)Dise�o"<<endl;
										cout<<"c)Prueba"<<endl;
										cout<<"d)Codificaci�n"<<endl;
										cin>>respuesta;
								if(respuesta=='a')
									{
										cout<<"la respuesta es correcta"<<endl;
										contap=contap+1;
									}
								else
									{
										cout<<"La respuesta es incorrecta"<<endl;
										contan=contan+1;
									}
									cout<<"18-�Que fase del ciclo de vida del software se enlistan tareas donde el software debe realizar tareas?"<<endl;
										cout<<"a)Codificacion"<<endl;
										cout<<"b)Prueba"<<endl;
										cout<<"c)Dise�o"<<endl;
										cout<<"d)Analisis"<<endl;
										cin>>respuesta;
								if(respuesta=='a')
									{
										cout<<"la respuesta es correcta"<<endl;
										contap=contap+1;
									}
								else
									{
										cout<<"La respuesta es incorrecta"<<endl; 
										contan=contan+1;
									}
									cout<<"19-Es una propuesta de solucion en la cual se garantiza el cumplimiento de forma eficiente logica y completa"<<endl;
										cout<<"a)Prueba"<<endl;
										cout<<"b)Analisis"<<endl;
										cout<<"c)Dise�o"<<endl;
										cout<<"b)Codificacion"<<endl;
										cin>>respuesta;
								if(respuesta=='a')
									{
										cout<<"la respuesta es correcta"<<endl;
										contap=contap+1;
									} 
								else
									{
										cout<<"La respuesta es incorrecta"<<endl;	 
										contan=contan+1;
									}
									cout<<"20-Es la fase en la que se determina cualquier error o deficiencia del programa y se realiza cualquier accion para corregirla�?"<<endl;
										cout<<"a)Dise�o"<<endl;
										cout<<"b)Codificacion"<<endl;
										cout<<"c)Prueba"<<endl;
										cout<<"b)Analisis"<<endl;
										cin>>respuesta;
								if(respuesta=='b')
									{
										cout<<"la respuesta es correcta"<<endl;
										contap=contap+1;
									}
								else
									{
										cout<<"La respuesta es incorrecta"<<endl;
										contan=contan+1;
									}   
							break;	
							case 2: cout<<endl<<"todavia estoy en construccion"<<endl<<endl;
							break;
							case 10: exit(0);
							default:cout<<endl<<endl<<"No hay opciom"<<endl<<endl;
							break;
							system ("pause");	
							//getch();
							}
							if(contap<15)
								{
										cout<<"deseas repetir la prueba? s/n"<<endl<<endl;
										cin>>repetir;
										contador=1;
								}	
						cout<<"Las respuestas correctas fueron "<<contap<<endl;
						cout<<"Las respuestas incorrectas fueron "<<contan<<endl;
				}
				while((contap<15) && (repetir=='s'));	
				contador=contador+1;
				}			
							
				}
				else
				if(idioma==2)
				{
					cout<<"Estas en idioma- Ingles "<<endl;
				}
				else
				if(idioma==3)
				{
					cout<<"Estas en idioma- Aleman "<<endl;
				}	
				else
				{
					cout<<"Estas en idioma- desconocido "<<endl;	
				}
}
