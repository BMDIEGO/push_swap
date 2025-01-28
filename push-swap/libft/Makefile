# Nombre del proyecto
NAME = libft.a

# Compilador y flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Archivos fuente y objetos
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
      ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
      ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
      ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
      ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
      ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
      ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)

# Para la parte bonus
BONUS_SRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
            ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
BONUS_OBJ = $(BONUS_SRC:.c=.o)

# Reglas
# La regla 'all' es el objetivo principal, y depende de $(NAME), 
# que normalmente es el nombre del archivo de salida (ejecutable o biblioteca).
all: $(NAME)

# Regla para generar $(NAME), que normalmente es una biblioteca estática.
# Depende de $(OBJ), los archivos objeto (.o) generados previamente.
$(NAME): $(OBJ)
	# 'ar rcs' crea o actualiza una biblioteca estática (.a).
	# 'r' inserta archivos, 'c' crea la biblioteca si no existe,
	# y 's' escribe el índice de la biblioteca.
	ar rcs $(NAME) $(OBJ)

# Regla para generar la versión "bonus" del proyecto.
# Esta versión incluye tanto $(OBJ) como $(BONUS_OBJ) en la biblioteca.
bonus: $(OBJ) $(BONUS_OBJ)
	# Similar a la regla anterior, pero incluye los archivos bonus.
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

# Regla para eliminar archivos intermedios (.o).
clean:
	# Elimina los archivos objeto (.o) normales y los de bonus.
	rm -f $(OBJ) $(BONUS_OBJ)

# Regla para limpiar completamente el proyecto.
# Primero llama a 'clean' y luego elimina el archivo final $(NAME).
fclean: clean
	# Elimina el archivo resultante (ejecutable o biblioteca).
	rm -f $(NAME)

# Regla para reconstruir el proyecto desde cero.
# Primero limpia todo (fclean) y luego ejecuta la regla 'all' para recompilar.
re: fclean all

# Declara que estos objetivos no son archivos reales.
# Esto asegura que make no se confunda si existen archivos con estos nombres.
.PHONY: all clean fclean re bonus