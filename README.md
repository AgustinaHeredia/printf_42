# ft_printf

El proyecto `ft_printf` es una implementación personalizada de la función `printf` en C. La función `printf` es una función estándar de la biblioteca C que realiza la impresión de datos formateados en la consola.

## Contenido

1. [Introducción](#introducción)
2. [Uso](#uso)
3. [Compilación](#compilación)
4. [Formato admitido](#formato-admitido)
5. [Calificación](#calificación)


## Introducción

El objetivo de `ft_printf` es implementar una versión simplificada de la función `printf`, permitiendo al usuario formatear y mostrar texto en la consola.

## Uso

Para utilizar `ft_printf` en tu proyecto, incluye la función en tus archivos fuente y compílalos junto con la librería estándar de C. Puedes utilizarlo de la siguiente manera:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hola, %s! El número es %d\n", "mundo", 42);
    return 0;
}
```
#Compilación
Este proyecto lo he incluido en mi libft tras aprovarlo y para la compilación utilizo el Makefile de la Libft incluyendo los archivos necesarios. 
Se puede compilar el programa ejecutando:

bash
Copy code
gcc -Wall -Wextra -Werror -I./includes -c *.c
gcc -o programa *.o -L. -lftprintf

Asegurando de vincular con la implementación de ft_printf.


#formato-admitido
El proyecto admite un conjunto básico de especificadores de formato, como %s, %d, %c, etc. Consulta el archivo ft_printf.h para obtener más detalles sobre los formatos admitidos.

#calificación

<img width="882" alt="Captura de pantalla 2024-01-22 a las 20 18 42" src="https://github.com/AgustinaHeredia/printf_42/assets/119814051/38a805af-0499-4af2-975a-104eb977e085">

Puedes seguir mi progreso en 42 en https://profile.intra.42.fr/users/agheredi
