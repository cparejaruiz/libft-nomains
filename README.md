# Libft

This project contains a collection of functions from the C standard library, as well as some additional useful functions. Below is a description of each function implemented in this project, along with the parameters passed to each of them.

## Memory Manipulation Functions

### `ft_memchr.c`
Searches for the first occurrence of a character in a block of memory.
- **Parameters**:
	- `const void *s`: Pointer to the memory block.
	- `int c`: Character to search for.
	- `size_t n`: Number of bytes to examine.

### `ft_memcmp.c`
Compares two blocks of memory byte by byte.
- **Parameters**:
	- `const void *s1`: Pointer to the first memory block.
	- `const void *s2`: Pointer to the second memory block.
	- `size_t n`: Number of bytes to compare.

### `ft_memcpy.c`
Copies a block of memory to another.
- **Parameters**:
	- `void *dest`: Pointer to the destination block.
	- `const void *src`: Pointer to the source block.
	- `size_t n`: Number of bytes to copy.

### `ft_memmove.c`
Copies a block of memory to another, correctly handling overlapping blocks.
- **Parameters**:
	- `void *dest`: Pointer to the destination block.
	- `const void *src`: Pointer to the source block.
	- `size_t n`: Number of bytes to copy.

### `ft_memset.c`
Sets a block of memory with a specific value.
- **Parameters**:
	- `void *s`: Pointer to the memory block.
	- `int c`: Value to set.
	- `size_t n`: Number of bytes to set.

## Conversion Functions

### `ft_atoi.c`
Converts a string to an integer.
- **Parameters**:
	- `const char *str`: String to convert.

### `ft_itoa.c`
Converts an integer to a string.
- **Parameters**:
	- `int n`: Integer to convert.

### `ft_calloc.c`
Allocates memory for a specific number of elements and initializes all bytes to zero.
- **Parameters**:
	- `size_t count`: Number of elements.
	- `size_t size`: Size of each element.

## Character Checking Functions

### `ft_isalnum.c`
Checks if a character is alphanumeric.
- **Parameters**:
	- `int c`: Character to check.

### `ft_isalpha.c`
Checks if a character is a letter.
- **Parameters**:
	- `int c`: Character to check.

### `ft_isascii.c`
Checks if a character is an ASCII character.
- **Parameters**:
	- `int c`: Character to check.

### `ft_isdigit.c`
Checks if a character is a digit.
- **Parameters**:
	- `int c`: Character to check.

### `ft_isprint.c`
Checks if a character is printable.
- **Parameters**:
	- `int c`: Character to check.

### `ft_tolower.c`
Converts a character to lowercase.
- **Parameters**:
	- `int c`: Character to convert.

### `ft_toupper.c`
Converts a character to uppercase.
- **Parameters**:
	- `int c`: Character to convert.

## Input/Output Functions

### `ft_putchar_fd.c`
Writes a character to a file descriptor.
- **Parameters**:
	- `char c`: Character to write.
	- `int fd`: File descriptor.

### `ft_putendl_fd.c`
Writes a string followed by a newline to a file descriptor.
- **Parameters**:
	- `char *s`: String to write.
	- `int fd`: File descriptor.

### `ft_putnbr_fd.c`
Writes an integer to a file descriptor.
- **Parameters**:
	- `int n`: Integer to write.
	- `int fd`: File descriptor.

### `ft_putstr_fd.c`
Writes a string to a file descriptor.
- **Parameters**:
	- `char *s`: String to write.
	- `int fd`: File descriptor.

## String Manipulation Functions

### `ft_split.c`
Splits a string into an array of strings using a delimiter.
- **Parameters**:
	- `char const *s`: String to split.
	- `char c`: Delimiter.

### `ft_strchr.c`
Searches for the first occurrence of a character in a string.
- **Parameters**:
	- `const char *s`: String.
	- `int c`: Character to search for.

### `ft_strdup.c`
Duplicates a string.
- **Parameters**:
	- `const char *s1`: String to duplicate.

### `ft_striteri.c`
Applies a function to each character of a string.
- **Parameters**:
	- `char *s`: String.
	- `void (*f)(unsigned int, char*)`: Function to apply.

### `ft_strjoin.c`
Concatenates two strings into a new string.
- **Parameters**:
	- `char const *s1`: First string.
	- `char const *s2`: Second string.

### `ft_strlcat.c`
Concatenates two strings, ensuring the result fits a specific size.
- **Parameters**:
	- `char *dst`: Destination string.
	- `const char *src`: Source string.
	- `size_t dstsize`: Size of the destination buffer.

### `ft_strlcpy.c`
Copies a string to another, ensuring the result fits a specific size.
- **Parameters**:
	- `char *dst`: Destination string.
	- `const char *src`: Source string.
	- `size_t dstsize`: Size of the destination buffer.

### `ft_strlen.c`
Calculates the length of a string.
- **Parameters**:
	- `const char *s`: String.

### `ft_strmapi.c`
Applies a function to each character of a string to create a new string.
- **Parameters**:
	- `char const *s`: String.
	- `char (*f)(unsigned int, char)`: Function to apply.

### `ft_strncmp.c`
Compares two strings up to a specific number of characters.
- **Parameters**:
	- `const char *s1`: First string.
	- `const char *s2`: Second string.
	- `size_t n`: Number of characters to compare.

### `ft_strnstr.c`
Searches for a substring in a string up to a specific number of characters.
- **Parameters**:
	- `const char *haystack`: String to search in.
	- `const char *needle`: Substring to search for.
	- `size_t len`: Maximum number of characters to examine.

### `ft_strrchr.c`
Searches for the last occurrence of a character in a string.
- **Parameters**:
	- `const char *s`: String.
	- `int c`: Character to search for.

### `ft_strtrim.c`
Trims specific characters from the beginning and end of a string.
- **Parameters**:
	- `char const *s1`: String to trim.
	- `char const *set`: Set of characters to remove.

### `ft_substr.c`
Extracts a substring from a string.
- **Parameters**:
	- `char const *s`: String.
	- `unsigned int start`: Starting index of the substring.
	- `size_t len`: Length of the substring.

## Additional Files

### `libft.h`
Header file containing the declarations of all functions and necessary type definitions.

### `Makefile`
Configuration file to compile the project using `make`.

# Libft

Este proyecto contiene una colección de funciones de la biblioteca estándar de C, así como algunas funciones adicionales útiles. A continuación se describe cada función implementada en este proyecto, junto con los parámetros que se pasan a cada una de ellas.

## Funciones de Manipulación de Memoria

### `ft_memchr.c`
Busca la primera aparición de un carácter en un bloque de memoria.
- **Parámetros**:
	- `const void *s`: Puntero al bloque de memoria.
	- `int c`: Carácter a buscar.
	- `size_t n`: Número de bytes a examinar.

### `ft_memcmp.c`
Compara dos bloques de memoria byte por byte.
- **Parámetros**:
	- `const void *s1`: Puntero al primer bloque de memoria.
	- `const void *s2`: Puntero al segundo bloque de memoria.
	- `size_t n`: Número de bytes a comparar.

### `ft_memcpy.c`
Copia un bloque de memoria a otro.
- **Parámetros**:
	- `void *dest`: Puntero al bloque de destino.
	- `const void *src`: Puntero al bloque de origen.
	- `size_t n`: Número de bytes a copiar.

### `ft_memmove.c`
Copia un bloque de memoria a otro, manejando correctamente la superposición de bloques.
- **Parámetros**:
	- `void *dest`: Puntero al bloque de destino.
	- `const void *src`: Puntero al bloque de origen.
	- `size_t n`: Número de bytes a copiar.

### `ft_memset.c`
Establece un bloque de memoria con un valor específico.
- **Parámetros**:
	- `void *s`: Puntero al bloque de memoria.
	- `int c`: Valor a establecer.
	- `size_t n`: Número de bytes a establecer.

## Funciones de Conversión

### `ft_atoi.c`
Convierte una cadena de caracteres en un número entero.
- **Parámetros**:
	- `const char *str`: Cadena de caracteres a convertir.

### `ft_itoa.c`
Convierte un número entero en una cadena de caracteres.
- **Parámetros**:
	- `int n`: Número entero a convertir.

### `ft_calloc.c`
Asigna memoria para un número específico de elementos e inicializa todos los bytes a cero.
- **Parámetros**:
	- `size_t count`: Número de elementos.
	- `size_t size`: Tamaño de cada elemento.

## Funciones de Comprobación de Caracteres

### `ft_isalnum.c`
Comprueba si un carácter es alfanumérico.
- **Parámetros**:
	- `int c`: Carácter a comprobar.

### `ft_isalpha.c`
Comprueba si un carácter es una letra.
- **Parámetros**:
	- `int c`: Carácter a comprobar.

### `ft_isascii.c`
Comprueba si un carácter es un carácter ASCII.
- **Parámetros**:
	- `int c`: Carácter a comprobar.

### `ft_isdigit.c`
Comprueba si un carácter es un dígito.
- **Parámetros**:
	- `int c`: Carácter a comprobar.

### `ft_isprint.c`
Comprueba si un carácter es imprimible.
- **Parámetros**:
	- `int c`: Carácter a comprobar.

### `ft_tolower.c`
Convierte un carácter a minúscula.
- **Parámetros**:
	- `int c`: Carácter a convertir.

### `ft_toupper.c`
Convierte un carácter a mayúscula.
- **Parámetros**:
	- `int c`: Carácter a convertir.

## Funciones de Entrada/Salida

### `ft_putchar_fd.c`
Escribe un carácter en un archivo descriptor.
- **Parámetros**:
	- `char c`: Carácter a escribir.
	- `int fd`: Descriptor de archivo.

### `ft_putendl_fd.c`
Escribe una cadena de caracteres seguida de un salto de línea en un archivo descriptor.
- **Parámetros**:
	- `char *s`: Cadena de caracteres a escribir.
	- `int fd`: Descriptor de archivo.

### `ft_putnbr_fd.c`
Escribe un número entero en un archivo descriptor.
- **Parámetros**:
	- `int n`: Número entero a escribir.
	- `int fd`: Descriptor de archivo.

### `ft_putstr_fd.c`
Escribe una cadena de caracteres en un archivo descriptor.
- **Parámetros**:
	- `char *s`: Cadena de caracteres a escribir.
	- `int fd`: Descriptor de archivo.

## Funciones de Manipulación de Cadenas

### `ft_split.c`
Divide una cadena de caracteres en una matriz de cadenas utilizando un delimitador.
- **Parámetros**:
	- `char const *s`: Cadena de caracteres a dividir.
	- `char c`: Delimitador.

### `ft_strchr.c`
Busca la primera aparición de un carácter en una cadena de caracteres.
- **Parámetros**:
	- `const char *s`: Cadena de caracteres.
	- `int c`: Carácter a buscar.

### `ft_strdup.c`
Duplica una cadena de caracteres.
- **Parámetros**:
	- `const char *s1`: Cadena de caracteres a duplicar.

### `ft_striteri.c`
Aplica una función a cada carácter de una cadena de caracteres.
- **Parámetros**:
	- `char *s`: Cadena de caracteres.
	- `void (*f)(unsigned int, char*)`: Función a aplicar.

### `ft_strjoin.c`
Concatena dos cadenas de caracteres en una nueva cadena.
- **Parámetros**:
	- `char const *s1`: Primera cadena de caracteres.
	- `char const *s2`: Segunda cadena de caracteres.

### `ft_strlcat.c`
Concatena dos cadenas de caracteres, asegurando que el resultado se ajuste a un tamaño específico.
- **Parámetros**:
	- `char *dst`: Cadena de destino.
	- `const char *src`: Cadena de origen.
	- `size_t dstsize`: Tamaño del buffer de destino.

### `ft_strlcpy.c`
Copia una cadena de caracteres a otra, asegurando que el resultado se ajuste a un tamaño específico.
- **Parámetros**:
	- `char *dst`: Cadena de destino.
	- `const char *src`: Cadena de origen.
	- `size_t dstsize`: Tamaño del buffer de destino.

### `ft_strlen.c`
Calcula la longitud de una cadena de caracteres.
- **Parámetros**:
	- `const char *s`: Cadena de caracteres.

### `ft_strmapi.c`
Aplica una función a cada carácter de una cadena de caracteres para crear una nueva cadena.
- **Parámetros**:
	- `char const *s`: Cadena de caracteres.
	- `char (*f)(unsigned int, char)`: Función a aplicar.

### `ft_strncmp.c`
Compara dos cadenas de caracteres hasta un número específico de caracteres.
- **Parámetros**:
	- `const char *s1`: Primera cadena de caracteres.
	- `const char *s2`: Segunda cadena de caracteres.
	- `size_t n`: Número de caracteres a comparar.

### `ft_strnstr.c`
Busca una subcadena en una cadena de caracteres hasta un número específico de caracteres.
- **Parámetros**:
	- `const char *haystack`: Cadena de caracteres en la que buscar.
	- `const char *needle`: Subcadena a buscar.
	- `size_t len`: Número máximo de caracteres a examinar.

### `ft_strrchr.c`
Busca la última aparición de un carácter en una cadena de caracteres.
- **Parámetros**:
	- `const char *s`: Cadena de caracteres.
	- `int c`: Carácter a buscar.

### `ft_strtrim.c`
Elimina caracteres específicos del principio y el final de una cadena de caracteres.
- **Parámetros**:
	- `char const *s1`: Cadena de caracteres a recortar.
	- `char const *set`: Conjunto de caracteres a eliminar.

### `ft_substr.c`
Extrae una subcadena de una cadena de caracteres.
- **Parámetros**:
	- `char const *s`: Cadena de caracteres.
	- `unsigned int start`: Índice de inicio de la subcadena.
	- `size_t len`: Longitud de la subcadena.

## Archivos Adicionales

### `libft.h`
Archivo de cabecera que contiene las declaraciones de todas las funciones y las definiciones de tipos necesarios.

### `Makefile`
Archivo de configuración para compilar el proyecto utilizando `make`.