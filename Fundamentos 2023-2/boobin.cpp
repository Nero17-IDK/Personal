#include <iostream>
#include <random>

using namespace std;

// Crea un arreglo con números aleatorios
int whoops(int n)
{
    int i;
    int mentos[n];
    for(i = 0; i < n; i++)
    {
        mentos[i] = std::uniform_int_distribution<int> distribucion(1, 99);
    }
    return mentos[i];
}

// Ordena el arreglo de mayor a menor
int lego(int n)
{
    int i, j, aux;
    int mentos[n];
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (mentos[i] > mentos[j]) 
            {
                aux = mentos[j];
                mentos[j] = mentos[i];
                mentos[i] = aux;
            }
        }
    }
    return mentos[i];
}

int main()
{
    int n, i;
    int mentos[n];
    i = 0;
    cout << "Mire, gran pendejo, meta un número: ";
    cin >> n;
    whoops(n);
    lego(mentos[i]);
    for(i = 0; i < n; i++)
    {
        cout << mentos[i] << " ";
    }
}