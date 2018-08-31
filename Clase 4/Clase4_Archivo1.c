



void calcular (int*);

int main()
{
    int x = 5;

    calcular(&x);

    printf("X = %d", x);

    return 0;
}
//int* puntero * : se llama operador de inacceso o operador de direccion
void calcular (int* p)
{
    *p = 10; //*p : pasaje por referencia
}
