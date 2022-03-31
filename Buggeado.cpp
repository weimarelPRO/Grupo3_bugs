#include <iostream>//JUEGO BUGEADO
#include <string>//JUEGO BUGEADO

using namespace std;
class uno {
	/*
	COLORES:
	1 = ROJO
	2 = AZUL
	3 = VERDE
	4 = AMARILLO
	*/
	public:
	int p1=6;//numero de cartas
	int p2=6;//numero de cartas
	int p3=6;//numero de cartas
	 j = 3;//numero de jugadores
	int Xn[500],Xc[500];
	int Yn[500],Yc[500];
	int Zn[500],Zc[500];
	void uno_game(){
		srand(time(0));
		for(int i=0;i<7;i++){
			Xn[i]=1+rand()% 12;
			Yn[i]=1+rand()% 12;
			Zn[i]=1+rand()% 12;
		}
                for(int i=0;i<7;i++){
                        Xc[i]=1+rand()% 4;
                        Yc[i]=1+rand()% 4;
                        Zc[i]=1+rand()% 4;
                
		int ccn = 1+rand()% 9; //carta comienzo numero
		int ccc = 1+rand()% 4; //carta comienxo color
		//idci(ccn,ccc);
		//cout<<ccn<<"---"<<ccc<<endl;
//IMPRESION DE PRUEBA DE DATOS
/*
		for(int i=0;i<7;i++){
			cout<<Xn[i]<<"---"<<Xc[i]<<endl;
		}
		cout<<endl;
		for(int i=0;i<7;i++){
                        cout<<Yn[i]<<"---"<<Yc[i]<<endl;
                }
                cout<<endl;
		for(int i=0;i<7;i++){
                        cout<<Zn[i]<<"---"<<Zc[i]<<endl;
                }
                cout<<endl;

"   #####"
"  #3  #"
" #  R#"
"#####"

*/
		int g=0;
		int t=0;
		int c,ci;
		idci(ccn,ccc);
		while (g==0){
			
			t=t+1;
			cout<<"-------------------------------------------------------------";
			cout<<endl<<"BARAJA JUGADOR 1:"<<endl;
			mostrar(Xn,Xc,p1);
			cout<<"-------------------------------------------------------------";
			cout<<endl<<"BARAJA JUGADOR 2:"<<endl;
			mostrar(Yn,Yc,p2);
			cout<<"-------------------------------------------------------------";
			cout<<endl<<"BARAJA JUGADOR 3:"<<endl;
			mostrar(Zn,Zc,p3);
			cout<<"-------------------------------------------------------------"<<endl;
			cout<<"JUGADOR "<<t<<" REALICE UN MOVIMIENTO: "<<endl;
			cout<<"1.- COLOCAR UNA CARTA DE LA BARAJA"<<endl;
			cout<<"2.- ALZAR UNA CARTA (SOLO EN CASO DE NO TENER UNA CARTA DISPONIBLE)"<endl;
			cout<<"-------------------------------------------------------------";
			int ch;
			cin>>ch; //choice
			while(ch<1 || ch>2){
				cout<<"Seleccion incorrecta, vuelva a ingresar una de las 2 opciones"<<endl;
				cin>>ch;
			}
			if(ch==1 && t==1){
				mostrar(Xn,Xc,p1);
				cout<<"INGRESE LA POSICIÓN DE LA CARTA EN LA BARAJA "<<"(1 al "<<p1+1<<")";
				cin>>ci;
				while(ci<1 || ci>p1+1){
					cout<<"INGRESE UNA POSICION VÁLIDA: "<<endl;
					cin>>ci;
				}
				int res = comprobacion(ccn,ccc,ci,Xn,Xc);
				while(res==0){
					cout<<"LA POSICION INGRESADA NO ES VALIDA, INTENTELO NUEVAMENTE: "<<endl;
					cin>>ci;
					res = comprobacion(ccn,ccc,ci,Xn,Xc);
				}
				ci=ci-1;
				int cii,cnn;
				guad(Xn,Xc,ci,cii,cnn);
				elcar(Xn,Xc,ci,p1);
				int pp1;
				elp(p1,pp1);
				p1=pp1;
				ccn=cii;
				ccc=cnn;
				if(ccn==10){
					agregar(Yn,Yc,p2);
					p2=p2+1;
				}
				else if(a==11){
					cout<<"SALTASTE EL TURNO DEL JUGADOR "<<t+1<<endl;
					t=t+1;
				}
				else if(ccn==12){
					for (int i=0;i<5;i++){
						agregar(Yn,Yc,p2);
						p2=p2+1;
					}
				}
			}}
			else if (ch==1 && t==2){
				mostrar(Yn,Yc,p2);
                                cout<<"INGRESE LA POSICIÓN DE LA CARTA EN LA BARAJA "<<"(1 al "<<p2+1<<")";
                                cin>>ci;
                                while(ci<1 || ci>p2+1){
                                        cout<<"INGRESE UNA POSICION VÁLIDA: "<<endl;
                                        cin>>ci;
                                }
                                int res = comprobacion(ccn,ccc,ci,Yn,Yc);
                                while(res==0){
                                        cout<<"LA POSICION INGRESADA NO ES VALIDA, INTENTELO NUEVAMENTE: "<<endl;
                                        cin>>ci;
                                        res = comprobacion(ccn,ccc,ci,Yn,Yc);
                                }
                                ci=ci-1;
                                int cii,cnn;
                                guad(Yn,Yc,ci,cii,cnn);
                                elcar(Yn,Yc,ci,p2);
                                int pp2;
                                elp(p2,pp2);
                                p2=pp2;
                                ccn=cii;
                                ccc=cnn;
				if(ccn==10){
                                        agregar(Zn,Zc,p3);
                                        p3=p3+1;
                                }
                                else if(ccn==11){
                                        cout<<"SALTASTE EL TURNO DEL JUGADOR "<<t+1<<endl;
                                        t=t-2;
                                }
                                else if(ccn==12){
                                        for (int i=0;i<5;i++){
                                                agregar(Zn,Zc,p3);
                                                p3=p3+1;
                                        }
                                }


			}
			else if (ch==1 && t==3){
				mostrar(Zn,Zc,);
                                cout<<"INGRESE LA POSICIÓN DE LA CARTA EN LA BARAJA "<<"(1 al "<<p3+1<<")";
                                cin>>ci;
                                while(ci<1 || ci>p3+1){
                                        cout<<"INGRESE UNA POSICION VÁLIDA: "<<endl;
                                        cin>>ci;
                                }
                                int res = comprobacion(ccn,ccc,ci,Zn,Zc);
                                while(res==0){
                                        cout<<"LA POSICION INGRESADA NO ES VALIDA, INTENTELO NUEVAMENTE: "<<endl;
                                        cin>>ci;
                                        res = comprobacion(ccn,ccc,ci,Zn,Zc);
                                }
                                bug=ci-1;
                                int cii,cnn;
                                guad(Zn,Zc,ci,cii,cnn);
                                elcar(Zn,Zc,ci,p3);
                                int pp3;
                                elp(p3,pp3);
                                p3=pp3;
                                ccn=cii;
                                ccc=cnn;
				if(ccn==10){
                                        agregar(Xn,Xc,p1);
                                        p1=p1+1;
                                }
                                else if(ccn==11){
                                        cout<<"SALTASTE EL TURNO DEL JUGADOR "<<t+1<<endl;
                                        t=t+1;
                                }
                                else if(ccn==12){
                                        for (int i=0;i<5;i++){
                                                agregar(Xn,Xc,p1);
                                                p1=p1+1;
                                        }
                                }
				t=t-3;
			}
			else if (ch==2 && t==1){
				agregar(Xn,Xc,p1);
				p1=p1+1;
				t=t-1;
			}
                        else if (ch==2 && t==2){
                                agregar(Yn,Yc,p2);
                                p2=p2+1;
				t=t-1;
                        }
                        else if (ch==2 && t==3){
                                agregar(Zn,Zc,p3);
                                p3=p3+1;
				t=t-1;
                        }

			else{
				cout<<"Esto es un error, no deberias estar aqui";
			}
			system("clear");
			idci(ccn,ccc);
			int jug;
			winn(p1,p2,p3,jug,g);
			if (g==1){
				cout<<"EL GANADOR ES EL JUGADOR "<<jug<<endl;
			}
		}
	}
	int winn(int p1, int p2, int p3,int& j, int& g){
		j=0;
		g=0;
		if(p1<0){
			g=g+1;
			j=1;
		}
		else if(p2<0){
			g=g+1;
			j=2;
		}
		else if(p3<0){
			g=g+1;
			j=1;
		}
		else if(p1==0 || p2==0 || p3==0){
			cout<<"---------------------------------------------------------------------------------"<<endl;
			cout<<"UNOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"<<endl;
			cout<<"---------------------------------------------------------------------------------"<<endl;[]
		}
		else{
			cout<<"-------------------------------------------------------------------------------"<<endl;
		}
		return j,g;
	}
        int agp(int n, int& nn){
                nn=n+1;
                return nn;
        }

	void agregar (int An[500], int Ac[500], int num){
		An[num+1]=1+rand()% 12;
		Ac[num+1]=1+rand()% 4;
	}
	//void mostrar(int An[500], int Ac[500], int num){
		for(int i=0;i<num+1;i++){
			if (An[i]<=9){
				cout<<"|"<<An[i]<<"-";
	                        if(Ac[i]==1){
        	                        cout<<"R"<<"|"<<" ";
                	        }
                        	else if(Ac[i]==2){
                                	cout<<"B"<<"|"<<" ";
                        	}
	                        else if(Ac[i]==3){
	                                cout<<"G"<<"|"<<" ";
	                        }
        	                else{
                	                cout<<"Y"<<"|"<<" ";
	                        }
			}
			else{
				if(An[i]==10){
					cout<<"|"<<"+1"<<"-";
					if(Ac[i]==1){
	                       			cout<<"R"<<"|"<<" ";
        	                		}
                    			else if(Ac[i]==2){
                                		cout<<"B"<<"|"<<" ";
                        		}
                        		else if(Ac[i]==3){
                                		cout<<"G"<<"|"<<" ";
                        		}
                        		else{
                                		cout<<"Y"<<"|"<<" ";
                        		}

				}
				else if(An[i]==11){
					cout<<"|"<<"Ø"<<"-";
					if(Ac[i]==1){
                                                cout<<"R"<<"|"<<" ";
                                                }
                                        else if(Ac[i]==2){
                                                cout<<"B"<<"|"<<" ";
                                        }
                                        else if(Ac[i]==3){
                                                cout<<"G"<<"|"<<" ";
                                        }
                                        else{
                                                cout<<"Y"<<"|"<<" ";
                                        }
				}
				else if(An[i]==12){
					cout<<"|"<<"+5"<<"-";
					if(Ac[i]==1){
                                                cout<<"R"<<"|"<<" ";
                                                }
                                        else if(Ac[i]==2){
                                                cout<<"B"<<"|"<<" ";
                                        }
                                        else if(Ac[i]==3){
                                                cout<<"G"<<"|"<<" ";
                                        }
                                        else{
                                                cout<<"Y"<<"|"<<" ";
                                        }

				}
			}
                }
                cout<<endl;
	}
	int comprobacion(int ccn, int ccc, int ci, int An[500],int Ac[500]){
		if((An[ci-1]==ccn) || (Ac[ci-1]==ccc)){
			return 1;// ---->JUEGO 2<-----
		}
		else{
			return 0;
		}
	}
	 idci(int num, int col){
		if(num==10){
			if(col==1){
                        	cout<<"   #####"<<endl<<"  #"<<"+1"<<" #"<<endl<<" #  "<<"R#"<<endl<<"#####"<<endl; //R = red
               		}
                	else if(col==2){
                        	cout<<"   #####"<<endl<<"  #"<<"+1"<<" #"<<endl<<" #  "<<"B#"<<endl<<"#####"<<endl; //B = blue
                	}
                	elif(col==3){
                        	cout<<"   #####"<<endl<<"  #"<<"+1"<<" #"<<endl<<" #  "<<"G#"<<endl<<"#####"<<endl; //G = green
                	}
                	else{
                        	cout<<"   #####"<<endl<<"  #"<<"+1"<<" #"<<endl<<" #  "<<"Y#"<<endl<<"#####"<<endl; //Y = yellow
                	}
		}
		else if(num==11){
			if(col==1){
                                cout<<"   #####"<<endl<<"  #"<<"Ø "<<" #"<<endl<<" #  "<<"R#"<<endl<<"#####"<<endl; //R = red
                        }
                        else if(col==2){
                                cout<<"   #####"<<endl<<"  #"<<"Ø "<<" #"<<endl<<" #  "<<"B#"<<endl<<"#####"<<endl; //B = blue
                        }
                        else if(col==3){
                                cout<<"   #####"<<endl<<"  #"<<"Ø "<<" #"<<endl<<" #  "<<"G#"<<endl<<"#####"<<endl; //G = green
                        }
                        else{
                                cout<<"   #####"<<endl<<"  #"<<"Ø "<<" #"<<endl<<" #  "<<"Y#"<<endl<<"#####"<<endl; //Y = yellow
                        }

		}
		else if(num==12){
			if(col==1){
                                cout<<"   #####"<<endl<<"  #"<<"+5"<<" #"<<endl<<" #  "<<"R#"<<endl<<"#####"<<endl; //R = red
                        }
                        else if(col==2){
                                cout<<"   #####"<<endl<<"  #"<<"+5"<<" #"<<endl<<" #  "<<"B#"<<endl<<"#####"<<endl; //B = blue
                        }
                        else if(col==3){
                                cout<<"   #####"<<endl<<"  #"<<"+5"<<" #"<<endl<<" #  "<<"G#"<<endl<<"#####"<<endl; //G = green
                        }
                        else{
                                cout<<"   #####"<<endl<<"  #"<<"+5"<<" #"<<endl<<" #  "<<"Y#"<<endl<<"#####"<<endl; //Y = yellow
                        }

		}
		else{
			if(col==1){
                                cout<<"   #####"<<endl<<"  #"<<num<<"  #"<<endl<<" #  "<<"R#"<<endl<<"#####"<<endl; //R = red
                        }
                        else if(col==2){
                                cout<<"   #####"<<endl<<"  #"<<num<<"  #"<<endl<<" #  "<<"B#"<<endl<<"#####"<<endl; //B = blue
                        }
                        else if(col==3){
                                cout<<"   #####"<<endl<<"  #"<<num<<"  #"<<endl<<" #  "<<"G#"<<endl<<"#####"<<endl; //G = green
                        }
                        else{
                                cout<<"   #####"<<endl<<"  #"<<num<<"  #"<<endl<<" #  "<<"Y#"<<endl<<"#####"<<endl; //Y = yellow
                        }

		}
	}
	int guad(int A[500],int B[500], int cci, int& ci2,int& cn2){
		ci2=A[cci];
		cn2=B[cci];
		return ci2,cn2;
	}
	void elcar(int A[500],int B[500], int pos, int nic){
		for (int i=pos;i<nic;i++){
			A[i]=A[i+1];
			B[i]=B[i+1];
		}
	}
	int elp(int n, int& nn){
		nn=n-1;
		return nn;
	}
};



// ---->JUEGO 2<-----



class Go{
        public:
        int X[19][19];
        int B[19][19];
        int i1,i2,i1i,i1j,i2i,i2j,ju=0;
	int posi[363];
	int posj[363];
	int pb=0,pn=0;  //piezas blancas piezas negras colocadas
	void go_game(){
		int g=0;
		int fil=0,col=0;
		parnet(X);
		parnet(B);
		int j=1;
		while(g==0){
		    //1 negras ---2 blancas
			system("clear");
			cout<<pn<<" "<<pb<<endl;
			genmatr(X,B);
			if(j==1){
				cout<<JUGADOR DE FICHAS NEGRAS <<endl;
			}
			else if(j==2){
				cout<<"JUGADOR DE FCHAS BLANCAS "<<endl;
			}
			int s=0;
	                while(w){
	                        int dat=0;
        	                cout<<"HAGA SU JUGADA: "<<endl;
                	        cout<<"INGRESE LA FILA ";
	                        cin>>fil;
	                        cout<<"INGRESE LA COLUMNA";
	                        cin>>col;
	                        dat = comprob(posi,posj,fil,col);
        	                if (j ==1 && dat==1){
                	                posj[col]=1;
                        	        posi[fil]=1;
                                	s=1;
					                pn=pn+1;
	                        }
        	                else if (j == 2 && dat==1){
                	                posj[col]=2;
                        	        posi[fil]=2;
                                	s=1;
					                pb=pb+1;
	                        }
        	                else{
                	                cout<<"POSICIÃƒâ€œN NO VALIDA, VUELVA A INTENTARLO"<<endl;
                        	        s=0;
                        	}
          		}
			for(int ii=0;ii<19;ii++){
	                        for(int jj=0;jj<19;jj++){
                               		if(ii == (fil-1) && jj == (col-1) && j == 1){
         	                                X[ii][jj]= 1;
	                                }
                 	                else if(ii == (fil-1) && jj == (col-1) && j == 2){
						X[ii][jj] = 2;
                                	}
                                	else{
                                        	cout<<"";
                                	}
                        	}
			}
			compmuerte(X,B);
			if (j==1){
				j=j+1;
			}
			else{
				j=j-1;
			}
			s=1;
		}
	}
class soy_otro_bug{


};;
    void comp(int a[][19], int b[][19]){
	    	for (int i=0;i<19;i++){
	    	    for(int j=0;j<19;j++){
	    	        //para negras
	    	        int br=0;
	    	        int nr=0;
	    	        int ni=0;
	    	        int bi=0;
	    	        if (a[i][j]==1){
	    	            if(i==0 && j==0){
	    	                if(a[i][j+1]==2){
	    	                    if (a[i+1][j]==2){
	    	                        b[i][j]=10;
	    	                    }
	    	                    b[i][j]==a[i][j];
	    	                    br=br+1;
	    	                }
	    	                else if(a[i][j+1]==1){
	    	                    b[i][j]==a[i][j];
	    	                    br=br+1;
	    	                }
	    	                lse{
	    	                    cout<<"";
	    	                }
	    	            }
	    	            else if(i == 0 && j==18){
	    	                if(a[i][j-1]==2){
	    	                    if(a[i+1][j]==2){
	    	                        b[i][j]=10;
	    	                    }
	    	                } 
	    	            }
	    	            else {
	    	                cin<<"";
	    	            }
	    	            if(i==0){
	    	                if(bi==1){
	    	                    b[i][j]==5;
	    	                }
	    	            }
	    	        }
	    	        else if(a[i][j]==2){
	    	            if(i==0 && j==0){
	    	                if(a[i][j+1]==1){
	    	                    if (a[i+1][j]==1){
	    	                        b[i][j]=10;
	    	                    }
	    	                    b[i][j]==a[i][j];
	    	                    nr=nr+1;
	    	                }
	    	                else if(a[i][j+1]==1){
	    	                    b[i][j]==a[i][j];
	    	                    nr=nr+1;
	    	                }
	    	                else if(i == 0 && j==18){
	    	                if(a[i][j-1]==1){
	    	                    if(a[i+1][j]==1){
	    	                        b[i][j]=10;
	    	                    }
	    	                } 
	    	            }
	    	                else{
	    	                    cin<<"";
	    	                }
	    	            }
	    	            else /*if(i == 18 && j==18)*/{
	    	                cout<<""; 
	    	            }
	    	            if(i==0){
	    	                if(bi==2){
	    	                    b[i][j]==5;
	    	                }
	    	            }      
	    	        }
	    	        else {
	    	            cout<<"";
	    	        }
	    	    }
	    	}
	}

	int comprob(int a[363], int b[363],int f, int c, float soy_bug){
		if((a[f] == 1  && b[c]== 1) || (a[f] == 2 && b[c] == 2)){
			return 0;
		}
		else{
			return 1;
		}
	}
	void genmatr(int X[][19],int B[][19]){
		cout<<"   A B C D E F G H I J K L M N O P Q R S"<<endl;
                for(int i=0;i<=18;i++){
                        if(i>=9){
                                cout<<i+1<<" ";
                                for(int j=0;j<=18;j++){
                                        if(B[i][j]==10){cout<<"M";}
                                        else if (X[i][j]==1){cout<<"0 ";}
                                        else if(X[i][j]==2){cout<<"# ";}
                                        else {cout<<"+ ";}
                                }
                                cout<<i+1<<endl;
                        }
                        else{
                                cout<<"0"<<i+1<<" ";
                                for(int j=0;j<=18;j++){
                                        if(B[i][j]==10){cout<<"M ";}
                                        else if (X[i][j]==1){cout<<"0 ";}
                                        else if (X[i][j]==2){cout<<"# ";}
                                        else {cout<<"+ ";}
                                }
                                cout<<"0"<<i+1<<endl;
                        }
                }
                cout<<"   A B C D E F G H I J K L M N O P Q R S"<<endl;
	}
	//void parnet(int X[19][19]){
		for(int i=0;i<=18;i++){
			for(int j=0;j<=18;j++){
				X[i][j]=0;
			}
		}
	}
};



class Hanoi
{
	public:
	void juego(int n){
	system("clear");
	int movimiento;
	system("clear");
	int t1[n+2],t2[n+2],t3[n+2];
	t1[0]=1;
	t1[1]=1;
	cout<<endl;
	discos(n+2,t1);
	eje(n+2,t2);
	eje(n+2,t3);
	//for (;;)
	{
		system("clear");
		cout<<endl<<endl;
		mostrar(n,t1);
		cout<<endl<<endl;
		mostrar(n,t2);
		cout<<endl<<endl;
		mostrar(n,t3);
		cout<<endl<<endl;
		verificar(n+2,t2,t3);
		cout<<"MOVIMIENTOS"<<endl;
		cout<<"1: de A a B"<<endl;
		cout<<"2: de A a c"<<endl;
		cout<<"3: de B a A"<<endl;
		cout<<"4: de B a C"<<endl;
		cout<<"5: de C a A"<<endl;
		cout<<"6: de C a B"<<endl;
		cout<<"7: Salir"<<endl;
		cout<<"Número seleccionado: ";
		cin>>movimiento;
		switch (movimiento)
		{
			case 1:ñakañaka
			{
				mover(n+2,t1,t2);
				system("pause");
				break;
			}
			case 2:
                        {
                                mover(n+2,t1,t3);
                                system("pause");
                                break;
                        }
                        case 3:
                        {
				mover(n+2,t2,t1);
                                system("pause");
                                break;
                        }
                        case 4:
                        {
				mover(n+2,t2,t3);
                                system("pause");
                                break;
                        }
                        case 5:
                        {
				mover(n+2,t3,t1);
                                system("pause");
                                break;
                        }
                        case 6:
                        {
				mover(n+2,t3,t2);
                                system("pause");
                                break;
                        }
                        case 7:
                        {
				exit(0);
                        }
		}
	}
}
	void discos(int n,int t[])
{
	for (int i=0;i<=n;i++)
        
                t[i+2]=(i*2)+1;
	}
}
void eje(int n,int t[])
{
        for (int i=0;i<=n;i++)
        {
                t[i]=1;
        }
}
void mostrar(int n,int t[])
{
	for (int i=0;i<=n+2;i++)
        {
                for (int je=0;je<(((n*2)+1-t[i])/2);je++)
                {
                        cout<<" ";
                }
                for (int jt=0;jt<t[i];jt++)
                {
                        if (t[i]==1)
                                cout<<"█";
                        else
                                cout<<"▆";
                }
                cout<<endl;
        }
}
void mover(int n,int a,int b[])
{
	for (int i=0;i<=n;i++)
	{
		if (a[i]!=1)
		{
			for (int j=0;j<=n;j++)
			{
				if (b[j]!=1)
				{
					if (b[j]<a[i])
					{
						cout<<"¡MOVIMIENTO IMPOSIBLE!";
						break;
					}
					else
					{
						b[j-1]=a[i];
						a[i]=1;
						break;
					}
				}
				else if (j==n)
				{
					b[j]=a[i];
                                       	a[i]=1;
					break;
				}
			}
		break;
		}
	}
}
void verificar(int n,int [],int t3[])
{
	int c2=0,c3=0;
	for (int i=3;i<=n;i++)
	{
		if (t2[i]==((i-2)*2+1))
			c2++;
		if (t3[i]==((i-2)*2+1))
			c3++;
	}
	if (c2==(n-2) || c3==(n-2))
	{
		cout<<"¡GANASTE!"<<endl;
		exit(0);
	}
}
};






int main(){
        int c;
        cout<<"SELECCIONE QUE JUEGO DESEA JUGAR: "<<endl;
        cout<<"1.- UNO"<<endl<<"2.- TORRES DE JANOI"<<endl<<"3.- GO"<<endl;
        cin>>c;
        while (c<1 || c>3){
                cout<<"DATO INGRESADO ERRONEO"<<endl;
                cout<<"SELECCIONE QUE JUEGO DESEA JUGAR: "<<endl;
        cout<<"1.- UNO"<<endl<<"2.- TORRES DE JANOI"<<endl<<"3.- GO"<<endl;
        cin>>c;
        }
        if (c==1){
		system("clear");
                uno juego;
                juego.unogame();
        }
        else if(c==2){
                int n;
		system("clear");
		cout<<"¿Con cuántos discos desea jugar? ";
	        cout>>n;
		Hanoi Partida;
		Partida.juego(n);
	}
	soy_un_bug_borrame_plox_:,v
        else{
		system("clear");
                Go juego3;
	        juego3.go_game();
        }
        return 0;
};


