#include<iostream>
#include<string>

using namespace std ;

int main()
{
    int moral = 50 ;
    string nombreJugador;
    int balas = 30 ;
    int granadas = 3;
    int desicion;

    cout<< "D-Day"<< endl<<endl;
    cout<< "introduce tu nombre de jugador"<<endl<<endl;

    getline(cin, nombreJugador);

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
    } while (desicion>4);
                            //segunda DESICION//
    cout<<"despues de esa llegada con prisa ya estan en el campo de batlla, pero algo peligroso se acerca.. "<<endl;
    cout<<"Enfrentamiento con Nidos de Ametralladoras: los alemanes eran conocidos en esa epoca sobre todo por su inovacion en el campo de batalla, cosas como el gaz mostaza o las ametralladoras a las que estas a punto de enfrentarte los hacia simplemente aterradores. Si bien eso no los hace intocables, intimidan hasta al mas valiente, pero ustedes ya no tienen la opcion de huir asi que piensa como hacerles frente ahora "<<endl<<endl;
    cout<<"tienes 3 opciones, cual eliges, recuerda que con cada desicion ganas o pierdes moral, actualmente tienes: "<< moral <<" de moral, elige bien soldado"<<endl;
    cout<<"1.	Asalto Frontal (-5 balas)"<<endl;
    cout<<"2.	Flanqueo Marítimo"<<endl;
    cout<<"3.	Distraer con Humo (-2 granada)"<<endl;
    cout<<"4.     salir del juego"<<endl<<endl;
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
    } while (desicion>4);
//HEAD

                                 //tercera DESICION//
    cout<<"afortunada mente logaron evadir por el momento al resto de enemigos pero algo paso, piensa rapido... "<<endl<<endl;
    cout<<"Socorro a Compañero Herido en la Playa: parece ser que tomar una decisión apresurada no fue lo mejor para tu peloton y algunos compañeros fueron heridos por las ametralladoras, incluso te diste cuenta que algunos no lo lograron (baja la moral -20) pero aun asi hay compañeros que aun puedes salvar, pero date prisa no tienes mucho tiempo, la vida de esos hombre esta en juego"<<endl<<endl;
    moral=moral-20;
    cout<<"tienes 3 opciones, cual eliges, recuerda que con cada desicion ganas o pierdes moral, actualmente tienes: "<< moral <<" de moral, elige bien soldado"<<endl;
    cout<<"1.	Atención Rápida "<<endl;
    cout<<"2.	Solicitar Evacuación Médica "<<endl;
    cout<<"3.	Dejar los Compañeros "<<endl;
    do
    {
        cin>>desicion;
        switch (desicion)
        {
            case 1: 
        cout<<"Elijes un área aparentemente menos defendida para minimizar el riesgo inicial, esto puede ser lo mejor en un futuro (no afecta la moral)"<<endl<<endl;
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
    }while(desicion>4);
                            //cuarta desicion//

   


//>>>>>>> 04b0d63dfe4cdefb2c1b31d4bc0f1750de845523












    return 0;
}
