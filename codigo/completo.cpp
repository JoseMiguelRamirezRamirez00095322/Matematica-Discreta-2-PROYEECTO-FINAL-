#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void SimularExtracciones(int N)
{
    int opcion;

    do
    {
        int contBola2Blanca = 0;
        int contBola3Blanca = 0;

        for (int i = 0; i < N; i++)
        {
            int bola1 = rand() % 5;
            int bola2, bola3;

            if (bola1 < 3)
            {
                bola2 = 3 + rand() % 2;
            }
            else
            {
                bola2 = rand() % 4;
            }

            if (bola2 == 3 || bola2 == 4)
            {
                contBola3Blanca++; // cuento tercera bola blanca
            }

            bola3 = 5 + rand() % 2;
            if (bola3 == 5)
            {
                contBola2Blanca++; // cuento segunda bola blanca
            }
        }

        system("cls");
        cout << "\n\n--- MENU DE BOLAS ---: " << endl;
        cout << "1. Segunda bola blanca" << endl;
        cout << "2. Tercera bola blanca" << endl;
        cout << "0. Volver al Menu Principal" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        double probabilidad = 0.0;
        switch (opcion)
        {

            // CODIGO DE: SI LA SEGUNDA BOLA ES BLANCA
        case 1:
            probabilidad = (double)contBola2Blanca / N;
            system("cls");
            cout << "\nArbol de probabilidad:\n";

            cout << "- Bola 1 (3/5 negra, 2/5 blanca)" << endl;
            cout << "   |" << endl;
            cout << "   |-- Bola 1 negra (3/5):" << endl;
            cout << "   |   |" << endl;
            cout << "   |   |-- Bola 2 (2/4 blanca, 2/4 negra)" << endl;
            cout << "   |       |" << endl;
            cout << "   |       |-- Bola 2 negra (2/4): No cuenta" << endl;
            cout << "   |       |" << endl;
            cout << "   |       \\-- Bola 2 blanca (2/4): Cuenta como bola 2 blanca" << endl;
            cout << "   |            " << endl;
            cout << "   |" << endl;
            cout << "   \\-- Bola 1 blanca (2/5):" << endl;
            cout << "        |" << endl;
            cout << "        |-- Bola 2 (1/4 blanca, 3/4 negra)" << endl;
            cout << "        |   |" << endl;
            cout << "        |   |-- Bola 2 negra (3/4): No cuenta" << endl;
            cout << "        |   |" << endl;
            cout << "        |   \\-- Bola 2 blanca (1/4): Cuenta como bola 2 blanca" << endl;
            cout << "        |" << endl;
            cout << "\n\n";
            cout << "Probabilidad: \n\n";

            cout << "       *" << endl;
            cout << "      ***" << endl;
            cout << "     *****" << endl;
            cout << "    *******" << endl;
            cout << "    " << probabilidad << "%" << endl;
            cout << "   *********" << endl;
            cout << "  ***********" << endl;
            cout << " *************" << endl;
            cout << "       |" << endl;

            system("pause");
            break;
        case 2:
            // CODIGO DE: SI LA TERCERA BOLA ES BLANCA
            probabilidad = (double)contBola3Blanca / N;
            system("cls");
            cout << "\nArbol de probabilidad:\n";

            cout << "- Bola 1 (3/5 negra, 2/5 blanca)" << endl;
            cout << "   |" << endl;
            cout << "   |-- Bola 1 negra (3/5):" << endl;
            cout << "   |   |" << endl;
            cout << "   |   |-- Bola 2 (2/4 blanca, 2/4 negra)" << endl;
            cout << "   |       |" << endl;
            cout << "   |       |-- Bola 2 negra (2/4): No cuenta" << endl;
            cout << "   |       |" << endl;
            cout << "   |       \\-- Bola 2 blanca (2/4): Cuenta como bola 3 blanca" << endl;
            cout << "   |          " << endl;
            cout << "   |" << endl;
            cout << "   \\-- Bola 1 blanca (2/5):" << endl;
            cout << "        |" << endl;
            cout << "        |-- Bola 2 (1/4 blanca, 3/4 negra)" << endl;
            cout << "        |   |" << endl;
            cout << "        |   |-- Bola 2 negra (3/4): No cuenta" << endl;
            cout << "        |   |" << endl;
            cout << "        |   \\-- Bola 2 blanca (1/4): Cuenta como bola 3 blanca" << endl;
            cout << "        |" << endl;
            cout << "        \\-- Bola 3 (1/1 blanca): Cuenta como bola 3 blanca" << endl;

            cout << "\n\n";
            cout << "Probabilidad: \n\n";

            cout << "       *" << endl;
            cout << "      ***" << endl;
            cout << "     *****" << endl;
            cout << "    *******" << endl;
            cout << "    " << probabilidad << "%" << endl;
            cout << "   *********" << endl;
            cout << "  ***********" << endl;
            cout << " *************" << endl;
            cout << "       |" << endl;
            system("pause");
            break;
        case 0:
            return;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
        }
    } while (true);
}

double ProbabilidadSuma9()
{
    double probabilidad, numero;

    numero = 5; // Considerando que hay 5 formas de obtener una suma mayor o igual a 9

    probabilidad = (numero / 36.0) * 100.0; // Calculo de la probabilidad

    return probabilidad; // Retornara la probabilidad en porcentaje
}

double ProbabilidadCara6()
{
    double probabilidad, numero;

    numero = 11; // Considerando que hay 11 formas de obtener la cara 6 en dos dados

    probabilidad = (numero / 36.0) * 100.0; // Calculo de la probabilidad

    return probabilidad; // Retornara la probabilidad en porcentaje
}

void MenuDados()
{
    int opcion;

    do
    {
        system("cls");

        cout << "\n\t    ----- MENU DADOS -----\n";
        cout << "1. Probabilidad de obtener una suma mayor o igual a 9\n";
        cout << "2. Probabilidad de que la cara 6 aparezca\n";
        cout << "0. Volver al Menu Principal\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1: // Invocando la funcion de probabilidad de suma mayor o igual a 9
            cout << "\nArbol de probabilidad:\n";

            cout << "- Dado 1 (6 caras posibles)" << endl;
            cout << "- Dado 2 (6 caras posibles)" << endl;
            cout << "   |" << endl;
            cout << "   |-- Dado 1 cara 1 (1/6)" << endl;
            cout << "   |-- Dado 1 cara 2 (1/6)" << endl;
            cout << "   |-- Dado 1 cara 3 (1/6)" << endl;
            cout << "   |-- Dado 1 cara 4 (1/6)" << endl;
            cout << "   |-- Dado 1 cara 5 (1/6)" << endl;
            cout << "   |-- Dado 1 cara 6 (1/6)" << endl;
            cout << "   |" << endl;
            cout << "   |-- Dado 2 cara 1 (1/6)" << endl;
            cout << "   |-- Dado 2 cara 2 (1/6)" << endl;
            cout << "   |-- Dado 2 cara 3 (1/6)" << endl;
            cout << "   |-- Dado 2 cara 4 (1/6)" << endl;
            cout << "   |-- Dado 2 cara 5 (1/6)" << endl;
            cout << "   |-- Dado 2 cara 6 (1/6)" << endl;
            cout << "   |" << endl;
            cout << "   \\-- 36 combinaciones, 5 suman >= 9" << endl;
            cout << "\n\n";
            cout << "Probabilidad: \n\n";

            cout << "       *" << endl;
            cout << "      ***" << endl;
            cout << "     *****" << endl;
            cout << "    *******" << endl;
            cout << "    " << ProbabilidadSuma9() << "%" << endl;
            cout << "   *********" << endl;
            cout << "  ***********" << endl;
            cout << " *************" << endl;
            cout << "       |" << endl;

            system("pause");
            break;
        case 2: // Invocando la funcion de probabilidad de que la cara 6 aparezca
            cout << "\nArbol de probabilidad:\n";

            cout << "- Dado 1 (6 caras posibles)" << endl;
            cout << "- Dado 2 (6 caras posibles)" << endl;
            cout << "   |" << endl;
            cout << "   |-- Dado 1 cara 1 (1/6)" << endl;
            cout << "   |-- Dado 1 cara 2 (1/6)" << endl;
            cout << "   |-- Dado 1 cara 3 (1/6)" << endl;
            cout << "   |-- Dado 1 cara 4 (1/6)" << endl;
            cout << "   |-- Dado 1 cara 5 (1/6)" << endl;
            cout << "   |-- Dado 1 cara 6 (1/6) -> Cuenta" << endl;
            cout << "   |" << endl;
            cout << "   |-- Dado 2 cara 1 (1/6)" << endl;
            cout << "   |-- Dado 2 cara 2 (1/6)" << endl;
            cout << "   |-- Dado 2 cara 3 (1/6)" << endl;
            cout << "   |-- Dado 2 cara 4 (1/6)" << endl;
            cout << "   |-- Dado 2 cara 5 (1/6)" << endl;
            cout << "   |-- Dado 2 cara 6 (1/6) -> Cuenta" << endl;
            cout << "   |" << endl;
            cout << "   \\-- 36 combinaciones, 11 con cara 6" << endl;
            cout << "\n\n";
            cout << "Probabilidad: \n\n";

            cout << "       *" << endl;
            cout << "      ***" << endl;
            cout << "     *****" << endl;
            cout << "    *******" << endl;
            cout << "    " << ProbabilidadCara6() << "%" << endl;
            cout << "   *********" << endl;
            cout << "  ***********" << endl;
            cout << " *************" << endl;
            cout << "       |" << endl;

            system("pause");
            break;
        case 0:
            return; // Regresar al menu principal
        default:
            cout << "Opcion no valida\n";
            system("pause");
            break;
        }
    } while (opcion != 0); // Condicion del bucle
}

int main()
{
    srand(time(0));

    int opcion;

    do
    {
        system("cls");
        cout << "----- MENU PRINCIPAL -----\n";
        cout << "Ingrese la opcion que desea realizar:\n";
        cout << "1. Problema de las Bolas\n";
        cout << "2. Problema de los Dados\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            SimularExtracciones(10000);
            break;
        case 2:
            MenuDados();
            break;
        case 0:
            cout << "Saliendo del programa. Hasta luego!\n";
            break;
        default:
            cout << "Opcion no valida. Intente de nuevo.\n";
            break;
        }

    } while (opcion != 0);

    return 0;
}