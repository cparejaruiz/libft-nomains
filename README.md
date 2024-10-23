# Libft

Este proyecto contiene una colección de funciones de la biblioteca estándar de C, así como algunas funciones adicionales útiles. A continuación se describe cada función implementada en este proyecto.

## Funciones de Manipulación de Memoria

### `ft_memchr.c`
Busca la primera aparición de un carácter en un bloque de memoria.

### `ft_memcmp.c`
Compara dos bloques de memoria byte por byte.

### `ft_memcpy.c`
Copia un bloque de memoria a otro.

### `ft_memmove.c`
Copia un bloque de memoria a otro, manejando correctamente la superposición de bloques.

### `ft_memset.c`
Establece un bloque de memoria con un valor específico.

## Funciones de Conversión

### `ft_atoi.c`
Convierte una cadena de caracteres en un número entero.

### `ft_itoa.c`
Convierte un número entero en una cadena de caracteres.

### `ft_calloc.c`
Asigna memoria para un número específico de elementos e inicializa todos los bytes a cero.

## Funciones de Comprobación de Caracteres

### `ft_isalnum.c`
Comprueba si un carácter es alfanumérico.

### `ft_isalpha.c`
Comprueba si un carácter es una letra.

### `ft_isascii.c`
Comprueba si un carácter es un carácter ASCII.

### `ft_isdigit.c`
Comprueba si un carácter es un dígito.

### `ft_isprint.c`
Comprueba si un carácter es imprimible.

### `ft_tolower.c`
Convierte un carácter a minúscula.

### `ft_toupper.c`
Convierte un carácter a mayúscula.

## Funciones de Entrada/Salida

### `ft_putchar_fd.c`
Escribe un carácter en un archivo descriptor.

### `ft_putendl_fd.c`
Escribe una cadena de caracteres seguida de un salto de línea en un archivo descriptor.

### `ft_putnbr_fd.c`
Escribe un número entero en un archivo descriptor.

### `ft_putstr_fd.c`
Escribe una cadena de caracteres en un archivo descriptor.

## Funciones de Manipulación de Cadenas

### `ft_split.c`
Divide una cadena de caracteres en una matriz de cadenas utilizando un delimitador.

### `ft_strchr.c`
Busca la primera aparición de un carácter en una cadena de caracteres.

### `ft_strdup.c`
Duplica una cadena de caracteres.

### `ft_striteri.c`
Aplica una función a cada carácter de una cadena de caracteres.

### `ft_strjoin.c`
Concatena dos cadenas de caracteres en una nueva cadena.

### `ft_strlcat.c`
Concatena dos cadenas de caracteres, asegurando que el resultado se ajuste a un tamaño específico.

### `ft_strlcpy.c`
Copia una cadena de caracteres a otra, asegurando que el resultado se ajuste a un tamaño específico.

### `ft_strlen.c`
Calcula la longitud de una cadena de caracteres.

### `ft_strmapi.c`
Aplica una función a cada carácter de una cadena de caracteres para crear una nueva cadena.

### `ft_strncmp.c`
Compara dos cadenas de caracteres hasta un número específico de caracteres.

### `ft_strnstr.c`
Busca una subcadena en una cadena de caracteres hasta un número específico de caracteres.

### `ft_strrchr.c`
Busca la última aparición de un carácter en una cadena de caracteres.

### `ft_strtrim.c`
Elimina caracteres específicos del principio y el final de una cadena de caracteres.

### `ft_substr.c`
Extrae una subcadena de una cadena de caracteres.

## Archivos Adicionales

### `libft.h`
Archivo de cabecera que contiene las declaraciones de todas las funciones y las definiciones de tipos necesarios.

### `Makefile`
Archivo de configuración para compilar el proyecto utilizando `make`.