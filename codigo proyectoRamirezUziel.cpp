#include<iostream>
#include<string>

using namespace std;

int main()
{
    int moral = 50 ;
    string nombreJugador;
    int balas = 30 ;
    int granadas = 3;
    int desicion;

    cout<< "D-Day"<< endl<<endl;
    cout<< "introduce tu nombre de jugador"<<endl<<endl<<endl;

    getline(cin, nombreJugador);
    system("clear");
    cout<< nombreJugador <<", eres un general estadounidense que dirige su propio peloton en una de las batallas mas recordadas por la humanidad, el desembarco de normandia o tambien conocido como D-Day, tu mision, liberar el puert/playa de normandia de el ejercito nazi, llevas luchando contra los alemanes por lo menos 4 años, pero hoy podria ser el dia que marque la diferencia."<<endl<<endl;

    cout<< "Despiertas luego de una noche muy fria, pero nisiquiera fue noche y nisiquiera despertaste, solo abriste lo ojos luego cerrarlos un rato ya que nisiquiera has podido dormir estos ultimos dias, como sea vas en un barco que se dirige a la costa de normandia notas como tu peloton tienen una expresion algo desanimada, lo normal en esta situacion piensas, pero ahora eso ya no importa porque empiezas a escuchar los disparos a lo lejos… estas llegando, te preparas para sobrevivir en ese campo lleno de muerte y sufrimiento. Y se acerca la primera decisión, eres un general, las vidas de estos hombre dependen de que tan bueno seas tomando desiciones. Asi que preparate." <<endl<<endl;
                                 //primera DECISION//
    cout<< "tu primera eleccion:"<<endl<<endl;
    cout<<" Elección de Desembarco: aquí es donde normalmente se pierden mas hombre, asi qu piensalo bien, un desembarque lento puede hacerte perder un tiempo muy valioso o quizas hasta mas, pero uno apresurado los puede hacer un blanco facil para el enemigo que no despega la vista de ustedes y solo espera el momento para abatirlos"<<endl<<endl;
    cout<<"tienes 3 opciones, cual eliges, recuerda que con cada desicion ganas o pierdes moral, actualmente tienes: "<< moral <<" de moral, elige bien soldado"<<endl;
    cout<<"1.	Lugar de Desembarco Seguro"<<endl;
    cout<<"2.	Desembarco Directo"<<endl;
    cout<<"3.	Cobertura Naval"<<endl;
    cout<<"4.      salir del juego"<<endl<<endl;
    do
    {
        cin>>desicion;
        switch (desicion)
    {
    case 1: 
        cout<<"Elijes un área aparentemente menos defendida para minimizar el riesgo inicial, esto puede ser lo mejor en un futuro (no afecta la moral)"<<endl<<endl;
        break;
    case 2:
        cout<<"Decides lanzarte directamente en el punto caliente, buscando rápidamente neutralizar las amenazas si bien fue arriesgado no podemos decir que te acobardas… por ahora.(baja la moral -15)"<<endl<<endl;
        moral=moral-15;
        break;   
    case 3:
        cout<<"Solicitas apoyo de los barcos para obtener cobertura mientras te diriges a la costa, pensar frio es una virtud en situaciones de alto riesgo y esta vez tuviste la mente mas fria. (sube la moral +10)"<<endl<<endl;
        moral=moral+10;
        break; 
    case 4:
        cout<<"elegiste salir del juego"<<endl<<endl;
        return 0;
        break;
    default:
        cout<<"respuesta no valida, eliga una respuestas valida"<<endl;
        cout<<"que opcion eliges: "<<endl<<endl;
        break;
    }
    system("clear");
    } while (desicion>4);
                            //segunda DECISION//
    cout<<"despues de esa llegada con prisa ya estan en el campo de batlla, pero algo peligroso se acerca.. "<<endl;
    cout<<"Enfrentamiento con Nidos de Ametralladoras: los alemanes eran conocidos en esa epoca sobre todo por su inovacion en el campo de batalla, cosas como el gaz mostaza o las ametralladoras a las que estas a punto de enfrentarte los hacia simplemente aterradores. Si bien eso no los hace intocables, intimidan hasta al mas valiente, pero ustedes ya no tienen la opcion de huir asi que piensa como hacerles frente ahora "<<endl<<endl;
    cout<<"tienes 3 opciones, cual eliges, recuerda que con cada desicion ganas o pierdes moral, actualmente tienes: "<< moral <<" de moral, elige bien soldado"<<endl;
    cout<<"1.	Asalto Frontal (-5 balas)"<<endl;
    cout<<"2.	Flanqueo Marítimo"<<endl;
    cout<<"3.	Distraer con Humo (-2 granada)"<<endl;
    cout<<"4.      salir del juego"<<endl<<endl;
    do
    {
        cin>>desicion;
        switch (desicion)
    {
    case 1: 
        cout<<"Optas por un asalto frontal directo, confiando en la superioridad numérica y el fuego de apoyo, pero parece que la superioridad numerica no es suficiente contra la superioridad armamentistica. (tus soldados no creian que era la mejor idea, baja la moral -10)"<<endl<<endl;
        moral=moral-10;
        balas=balas-5;
        break;
    case 2:
        cout<<"Utilizas barcas abandonadas para flanquear los nidos de ametralladoras desde el agua esto les da mas tiempo para pensar que hacer. (sube la moral +20)"<<endl<<endl;
        moral=moral+20;
        break;   
    case 3:
        cout<<"Arrojas granadas de humo para confundir al enemigo, ahora tienen 2 opciones (tus soldados no saben que esperar asi que la moral se mantienen igual)"<<endl<<endl;
        granadas=granadas-2;
        cout<<"3.1      quedarse esperando dentro del humo"<<endl;
        cout<<"3.2      salir del humo de forma sorpresiva"<<endl<<endl;
        do
        {
            cin>>desicion;
            switch (desicion)
            {
            case 1:
                cout<<"con esto confunde al enemigo y al momento de disiparse el humo pueden atacarlos ya que dentro del humo pensaron en un plan (sube la moral +5)"<<endl<<endl;
                moral=moral+5;
                break;
            case 2:
                cout<<"lamentablemente al momento de salir un enemigo reacciono rapidamente y logro herir a un compañero (baja la moral -5)"<<endl<<endl;
                moral=moral-5;
                break;
            default:
            cout<<"respuesta no valida, eliga una respuestas valida"<<endl;
            cout<<"que opcion eliges: "<<endl<<endl;
                break;
            }
        } while (desicion>2);
        break; 
    case 4:
        cout<<"elegiste salir del juego"<<endl<<endl;
        return 0;
        break;
    default:
        cout<<"respuesta no valida, eliga una respuestas valida"<<endl;
        cout<<"que opcion eliges: "<<endl<<endl;
        break;
    }
    system("clear");
    } while (desicion>4);

                                 //tercera DECISION//
    cout<<"afortunada mente logaron evadir por el momento al resto de enemigos pero algo paso, piensa rapido... "<<endl<<endl;
    cout<<"Socorro a Compañero Herido en la Playa: parece ser que tomar una decisión apresurada no fue lo mejor para tu peloton y algunos compañeros fueron heridos por las ametralladoras, incluso te diste cuenta que algunos no lo lograron (baja la moral -20) pero aun asi hay compañeros que aun puedes salvar, pero date prisa no tienes mucho tiempo, la vida de esos hombre esta en juego"<<endl<<endl;
    moral=moral-20;
    cout<<"tienes 3 opciones, cual eliges, recuerda que con cada desicion ganas o pierdes moral, actualmente tienes: "<< moral <<" de moral, elige bien soldado"<<endl;
    cout<<"1.	Atención Rápida "<<endl;
    cout<<"2.	Solicitar Evacuación Médica "<<endl;
    cout<<"3.	Dejar los Compañeros "<<endl;
    cout<<"4.      salir del juego"<<endl<<endl;

    do
    {
        cin>>desicion;
        switch (desicion)
        {
            case 1: 
        cout<<"Proporcionas atención médica rápidamente y te incorporas para seguir avanzando, no sabiamos que conocias sobre medicina aunque claro eres general por algo. (mantiene la moral)"<<endl<<endl;
                break;
            case 2:
        cout<<"Llamas a un equipo médico para evacuar al compañero herido, sacrificando tiempo, pero ahora tus soldados saben que los tomas en cuenta. (sube la moral +25)"<<endl<<endl;
        moral=moral+25;
                break;   
            case 3:
        cout<<"Decides dejar temporalmente al compañero herido bajo cobertura mientras avanzas para cumplir la misión, aunque sabes que no va a sobrevivir lo suficiente . (baja la moral -30)"<<endl<<endl;
        moral=moral-30;
                break; 
            case 4:
        cout<<"elegiste salir del juego"<<endl<<endl;
        return 0;
                break;
            default:
        cout<<"respuesta no valida, eliga una respuestas valida"<<endl;
        cout<<"que opcion eliges: "<<endl<<endl;
                break;
        }
        system("clear");
    }while(desicion>4);
                            //cuarta DECISION//
    cout<<"tras ese golpe duro contra tu peloton deciden seguir avanzando ya que al fin y al cabo estan en un campo de batalla, y no puedne quedarse mucho tiempo en lugar, pero estamos a punto de ver que puede que esa pudo ser una mejor decision. De forma repentina una emboscada los tiene en la mira, pero logran reaccionar a tiempo ¿que haces como respuesta?"<<endl<<endl;
    cout<<"tienes 3 opciones, cual eliges, recuerda que con cada desicion ganas o pierdes moral, actualmente tienes: "<< moral <<" de moral, elige bien soldado"<<endl;
    cout<<"1.	Lanzar Granadas (-1 granada) "<<endl;
    cout<<"2.	Suprimir con Fuego (-10 balas) "<<endl;
    cout<<"3.	Retirada Estratégica "<<endl;
    cout<<"4.      salir del juego"<<endl<<endl;
    do
    {
        cin>>desicion;
        switch (desicion)
        {
            case 1: 
        cout<<"Respondes con granadas para romper la emboscada y avanzar, al ver que reaccionaste a tiempo tus soldados confian en que tienen un lider nato. (sube la moral +15)"<<endl<<endl;
                moral=moral+15;
                granadas=granadas-1;
                break;
            case 2:
        cout<<"Utilizas fuego sostenido para mantener a raya al enemigo mientras tu escuadrón se reorganiza, bajo tu autoridad segura saben que no puede salir nada mal ¿verdad? (sube la moral +10)"<<endl<<endl;
                moral=moral+10;
                break;   
            case 3:
                cout<<"Decides retirarte temporalmente para encontrar una posición más ventajosa antes de contraatacar, sin embargo un soldado salio herido durante la retirada, lo mejor era responder en ese momento afortunadamente no murio nadie. (baja la moral -15)"<<endl<<endl;
                moral=moral-15;
                break; 
            case 4:
                cout<<"elegiste salir del juego"<<endl<<endl;
                return 0;
                break;
            default:
                cout<<"respuesta no valida, eliga una respuestas valida"<<endl;
                cout<<"que opcion eliges: "<<endl<<endl;
                break;
        }
        system("clear");
    }while(desicion>4);
                                //quinta DECISION//
    cout<<"Asalto a una Batería de Cañones en la Costa: estan a punto de llegar al final y ya pasaron lo suficiente para saber que aun no termina asi que aun estan con la guardia alta, llegados a este punto no se pueden confiar, de pronto escuchan el esruendo de los cañones enemigos y los deja descubiertos tienen que actuar rapido:"<<endl<<endl;
    cout<<"tienes 3 opciones, cual eliges, recuerda que con cada desicion ganas o pierdes moral, actualmente tienes: "<< moral <<" de moral, elige bien soldado"<<endl;
    cout<<"1.	Asalto Frontal (-10 balas) "<<endl;
    cout<<"2.	Utilizar Cobertura Natural"<<endl;
    cout<<"3.	Pedir Apoyo Aéreo"<<endl;
    cout<<"4.      salir"<<endl<<endl;
    do
    {
        cin>>desicion;
        switch (desicion)
        {
            case 1: 
                cout<<"Decides asaltar directamente la batería, arriesgándote a un enfrentamiento intenso, tus soldados te ven como alguien impulsivo pero los convence para seguirte. (sube la moral +5)"<<endl<<endl;
                moral=moral+5;
                balas=balas-10;
                break;
            case 2:
                cout<<"uscas refugio en rocas y terreno natural para avanzar sin ser detectado asi pueden pensar en un plan efectivo para acabar con el enemigo, ademas que los inspiraste a seguir vivos. (sube la moral +10)"<<endl<<endl;
                moral=moral+10;
                break;   
            case 3:
                cout<<"Utilizas una radio portátil para solicitar un bombardeo aéreo sobre la batería con esto creen que tiene asegurada la victoria. (sube la moral +15)"<<endl<<endl;
                moral=moral+15;
                break; 
            case 4:
                cout<<"elegiste salir del juego"<<endl<<endl;
                return 0;
                break;
            default:
                cout<<"respuesta no valida, eliga una respuestas valida"<<endl;
                cout<<"que opcion eliges: "<<endl<<endl;
                break;
        }
        system("clear");
    }while(desicion>4);

                                //sexta DECISION//
    cout<<"Descubrimiento de Inteligencia Enemiga: despues de ese enfrentamiento en la costa logran campurar a un enemigo y lo obligan a llevarlos a uno de sus fuertes, en este mismo descubren inteligencia enemiga y los toman como rehenes, sin embargo no tienen muchi tiempo asi que solo pueden hacer una cosa ¿que sera?"<<endl<<endl;
    cout<<"tienes 3 opciones, cual eliges, recuerda que con cada desicion ganas o pierdes moral, actualmente tienes: "<< moral <<" de moral, elige bien soldado"<<endl;
    cout<<"1.	Descifrar Mensajes"<<endl;
    cout<<"2.	Interrogatorio Rápido"<<endl;
    cout<<"3.	Enviar a la Resistencia"<<endl;
    cout<<"4.      salir"<<endl<<endl;
    do
    {
        cin>>desicion;
        switch (desicion)
        {
            case 1: 
                cout<<"Dedicas ese tiempo a descifrar mensajes enemigos para obtener información estratégica, tras un rato aburrido consiguen lo que quieren sin embargo perdieron un poco las ganas de seguir al por fin tener algo de paz (baja la moral -2)."<<endl<<endl;
                moral=moral-2;
                break;
            case 2:
                cout<<"Optas por un enfoque más agresivo a tal punto donde disparaste al techo del fuerte para imponer miedo en los enemigos (-2 balas), interrogando a prisioneros de guerra en busca de datos cruciales. (sube la moral +3)"<<endl<<endl;
                moral=moral+3;
                balas=balas -2;
                break;   
            case 3:
                cout<<"Transmites la inteligencia descubierta a través de varios canales y asi apoyar a la resistencia, pero ahora los alemanes saben que tienen enemigos infiltrados (mantiene la moral)."<<endl<<endl;
                break; 
            case 4:
                cout<<"elegiste salir del juego"<<endl<<endl;
                return 0;
                break;
            default:
                cout<<"respuesta no valida, eliga una respuestas valida"<<endl;
                cout<<"que opcion eliges: "<<endl<<endl;
                break;
        }
        system("clear");
    }while(desicion>4);
                            //septima DECISION//
    cout<<"Elección de Ruta hacia el Punto de Control: despues de casi ser descubiertos en un fuerte enemigo tienen que huir rapidamente y aprovecharon para tomar una radio enemiga, con esta se comican con el cuartel general informando que se difiren al punto de encuntro con informacion crucial para el combate, pero no tienen un mapa asi que tienen que guiarse por sus instintos "<<endl<<endl;
    cout<<"tienes 3 opciones, cual eliges, recuerda que con cada desicion ganas o pierdes moral, actualmente tienes: "<< moral <<" de moral, elige bien soldado"<<endl;
    cout<<"1.	Atajo Peligroso"<<endl;
    cout<<"2.	Ruta Convencional"<<endl;
    cout<<"3.	Incursión Nocturna"<<endl;
    cout<<"4.      salir"<<endl;
    do
    {
        cin>>desicion;
        switch (desicion)
        {
            case 1: 
                cout<<"Eliges un atajo peligroso que podría llevarte más rápido al punto de control, pero con mayores riesgos, esto provoca que uno de tus hombres caiga en una trampa mortal (baja la moral -30)."<<endl<<endl;
                moral=moral-30;
                break;
            case 2:
                cout<<"Optas por la ruta convencional, más segura pero potencialmente más lenta, durante el camino comparte historias de su pasado y eso sube la camaraderia del grupo (sube la moral +20)."<<endl<<endl;
                moral=moral+20;
                break;   
            case 3:
                cout<<"Decides avanzar durante la noche, los enemigos saben que tienen informacion y no van a permitir que llegen a entregarla asi que, aprovechando la oscuridad evadiran patrullas enemigas (mantiene la moral)"<<endl<<endl;
                break; 
            case 4:
                cout<<"elegiste salir del juego"<<endl<<endl;
                return 0;
                break;
            default:
                cout<<"respuesta no valida, eliga una respuestas valida"<<endl;
                cout<<"que opcion eliges: "<<endl<<endl;
                break;
        }
        system("clear");
    }while(desicion>4);
                            //fin de las DECISIONES//
    cout<<"Una vez llegaron al cuartel general entregan la informacion, tus hombre y tu fueron de gran utilidad ya que revelaron informacion crucial para tomar ventaja de los alemanes y por este hecho les permiten retirarse del campo de batalla por lo menos por ahora. "<<endl<<endl;
    cout<<"Estando en los barcos de regreso lo que quedo de tu peloton te agradecen por giarlos de tan buena manera y aunque hayan tenido bajas, en una guerra no salen todos vivos, prometes que iras personalemnte a dar el pesame a las familias de tus compañeros caidos. "<<endl<<endl;
    if (moral<=0)
    {
        cout<<"Tus soldados responden que no creen que sean lo mejor puesto que por tu culpa no queda casi nadie del peloton. "<<endl<<endl;
        cout<<"                 FIN                 "<<endl<<endl;
    }else{
        if(moral<=20 && moral>1){
            cout<<"Aceptan tu propuesta pero no tienen ganas de hablar ahora mismo. "<<endl<<endl;
            cout<<"                 FIN                 "<<endl<<endl; 
        }else{
            if(moral<=50 && moral>21){
                cout<<"Tus soldados agradecen por tu interes por esas familias, ademas dicen que hiciste lo necesario para salir de ese infierno. "<<endl<<endl;
                cout<<"                 FIN                 "<<endl<<endl;
            }else{
                if(moral<=80 && moral>51){
                    cout<<"Tus soldados estan muy agradecidos contigo por guiarlos tan bien puesto que casi todos salieron vivos ademas dicen que iran contigo a dar el pesame a esas familias. "<<endl<<endl;
                    cout<<"                 FIN                 "<<endl<<endl;
                }else{
                    if(moral<200 && moral>81){
                        cout<<"Tus soldados estan tan agradecidos contigo que no pueden expresarlo, solo lo notas en su cara, ya que tanto ellos como tu saben que tipo de compañero eres, uno que se procupa por su equipo, ademas de ser de confianza. "<<endl<<endl;
                        cout<<"                 FIN                 "<<endl<<endl;
                    }
                }
            }
        }
    }
                                 //puntuaciones finales//
    cout<<"conseguiste un total de: "<<moral<<" moral"<<endl<<endl;;
    cout<<"te quedasste un toral de: "<<granadas<<" granadas"<<endl<<endl;
    cout<<"en tu arma quedaron un total de: "<<balas<<" balas"<<endl<<endl;
    
    return 0;
}