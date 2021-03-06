#ifndef PANTALLA_H_INCLUDED
#define PANTALLA_H_INCLUDED

#define LCD 1
#define LED 2

typedef struct
{
    char nombre[50];
    char direccion[200];
    float precio;
    int tipo;
    int id;
    int isEmpty;
}Pantalla;

static int getNextId();
static int getLugarLibre(Pantalla* array, int len);

int pantalla_init(Pantalla* array, int len);
int pantalla_alta(Pantalla* array, int len);
int pantalla_getById(Pantalla* array, int len, int id);
int pantalla_modificar(Pantalla* array, int len);
int pantalla_baja(Pantalla* array, int len);
int pantalla_mostrar(Pantalla* array, int len);
int pantalla_ordenar(Pantalla* array, int len);

#endif // PANTALLA_H_INCLUDED
