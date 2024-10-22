# Parte 1 - Funciones de libc

## Descripción de funciones

- **`atoi`**: Convierte una cadena de caracteres en un número entero.
- **`bzero`**: Establece los primeros `n` bytes de una zona de memoria a cero.
- **`isalnum`**: Verifica si un carácter es una letra o un número.
- **`isalpha`**: Verifica si un carácter es una letra (a-z o A-Z).
- **`isascii`**: Verifica si un carácter pertenece al conjunto ASCII (0-127).
- **`isdigit`**: Verifica si un carácter es un dígito (0-9).
- **`isprint`**: Verifica si un carácter es imprimible (incluye espacio).
- **`memchr`**: Busca un valor específico dentro de un bloque de memoria.
- **`memcmp`**: Compara dos bloques de memoria byte a byte.
- **`memcpy`**: Copia un bloque de memoria de origen a destino (no seguro para solapamiento).
- **`memmove`**: Copia un bloque de memoria, asegurando seguridad en caso de solapamiento.
- **`memset`**: Rellena un bloque de memoria con un valor específico.
- **`strchr`**: Busca la primera aparición de un carácter en una cadena.
- **`strlcat`**: Concatena una cadena a otra, asegurando no sobrescribir el tamaño del destino.
- **`strlcpy`**: Copia una cadena a otra, asegurando no sobrescribir el tamaño del destino.
- **`strlen`**: Calcula la longitud de una cadena (sin incluir el carácter nulo).
- **`strnstr`**: Busca la primera aparición de una subcadena en otra cadena, dentro de un límite de longitud.
- **`strncmp`**: Compara dos cadenas hasta los primeros `n` caracteres.
- **`strrchr`**: Busca la última aparición de un carácter en una cadena.
- **`tolower`**: Convierte un carácter a minúscula (si es una letra mayúscula).

Para implementar estas otras dos funciones, tendrás que utilizar `malloc()`:
- **`calloc`**: Reserva memoria para un array de elementos y los inicializa a cero.
- **`strdup`**: Crea una copia de una cadena, reservando la memoria necesaria para ella.




# Parte 2 - Funciones adicionales

| Nombre de función | Prototipo | Parámetros | Valor devuelto | Funciones autorizadas | Descripción |
|-------------------|-----------|------------|----------------|----------------------|-------------|
| `calloc`          | `void *calloc(size_t num, size_t size);` | num: Número de elementos. <br> size: Tamaño de cada elemento. | Un puntero a la memoria reservada, inicializada a cero. <br> NULL si falla la reserva de memoria. | malloc | Reserva memoria para un array de `num` elementos de `size` bytes cada uno y los inicializa a cero. |
| `ft_substr`       | `char *ft_substr(char const *s, unsigned int start, size_t len);` | s: La string desde la que crear la substring. <br> start: El índice del caracter en ’s’ desde el que empezar la substring. <br> len: La longitud máxima de la substring. | La substring resultante. <br> NULL si falla la reserva de memoria. | malloc | Reserva (con malloc(3)) y devuelve una substring de la string ’s’. La substring empieza desde el índice ’start’ y tiene una longitud máxima ’len’. |
| `ft_strjoin`      | `char *ft_strjoin(char const *s1, char const *s2);` | s1: La primera string. <br> s2: La string a añadir a ’s1’. | La nueva string. <br> NULL si falla la reserva de memoria. | malloc | Reserva (con malloc(3)) y devuelve una nueva string, formada por la concatenación de ’s1’ y ’s2’. |
| `ft_strtrim`      | `char *ft_strtrim(char const *s1, char const *set);` | s1: La string que debe ser recortada. <br> set: Los caracteres a eliminar de la string. | La string recortada. <br> NULL si falla la reserva de memoria. | malloc | Elimina todos los caracteres de la string ’set’ desde el principio y desde el final de ’s1’, hasta encontrar un caracter no perteneciente a ’set’. La string resultante se devuelve con una reserva de malloc(3). |
| `ft_split`        | `char **ft_split(char const *s, char c);` | s: La string a separar. <br> c: El carácter delimitador. | El array de nuevas strings resultante de la separación. <br> NULL si falla la reserva de memoria. | malloc, free | Reserva (utilizando malloc(3)) un array de strings resultante de separar la string ’s’ en substrings utilizando el carácter ’c’ como delimitador. El array debe terminar con un puntero NULL. |
| `ft_itoa`         | `char *ft_itoa(int n);` | n: el entero a convertir. | La string que represente el número. <br> NULL si falla la reserva de memoria. | malloc | Utilizando malloc(3), genera una string que represente el valor entero recibido como argumento. Los números negativos tienen que gestionarse. |
| `ft_strmapi`      | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));` | s: La string que iterar. <br> f: La función a aplicar sobre cada carácter. | La string creada tras el correcto uso de ’f’ sobre cada carácter. <br> NULL si falla la reserva de memoria. | malloc | Aplica la función ’f’ a cada carácter de la cadena ’s’, pasando su índice como primer argumento y el propio carácter como segundo argumento. Se crea una nueva cadena (utilizando malloc(3)) para recoger los resultados de las sucesivas aplicaciones de ’f’. |
| `ft_striteri`     | `void ft_striteri(char *s, void (*f)(unsigned int, char*));` | s: La string que iterar. <br> f: La función a aplicar sobre cada carácter. | Nada | Ninguna | A cada carácter de la string ’s’, aplica la función ’f’ dando como parámetros el índice de cada carácter dentro de ’s’ y la dirección del propio carácter, que podrá modificarse si es necesario. |
| `ft_putchar_fd`   | `void ft_putchar_fd(char c, int fd);` | c: El carácter a enviar. <br> fd: El file descriptor sobre el que escribir. | Nada | write | Envía el carácter ’c’ al file descriptor especificado. |
| `ft_putstr_fd`    | `void ft_putstr_fd(char *s, int fd);` | s: La string a enviar. <br> fd: El file descriptor sobre el que escribir. | Nada | write | Envía la string ’s’ al file descriptor especificado. |
| `ft_putendl_fd`   | `void ft_putendl_fd(char *s, int fd);` | s: La string a enviar. <br> fd: El file descriptor sobre el que escribir. | Nada | write | Envía la string ’s’ al file descriptor dado, seguido de un salto de línea. |
| `ft_putnbr_fd`    | `void ft_putnbr_fd(int n, int fd);` | n: El número que enviar. <br> fd: El file descriptor sobre el que escribir. | Nada | write | Envía el número ’n’ al file descriptor dado. |

