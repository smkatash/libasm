NAME		:= libasm.a

VPATH		:= srcs
AR 			:= ar
ARFLAGS 	:= rcs

CC 			:= cc
CFLAGS 		:= -Wall -Wextra -Werror
NASM		:= nasm -dCOMPILER=gcc
NASMFLAGS	:= -f elf64
INCFL		:=	-I./include
SRC			:= ft_strlen.s ft_strcmp.s ft_strcpy.s ft_strdup.s ft_read.s ft_write.s
OBJ			:= $(addprefix obj/,$(notdir $(SRC:.s=.o)))

.SILENT:

all			: $(NAME)

$(NAME)		: $(OBJ)
			$(AR) $(ARFLAGS) $(NAME) $(OBJ)

obj/%.o		: %.s | obj
			$(NASM) $(NASMFLAGS) $< -o $@ 

obj			:
			mkdir obj

clean		:
			rm -rf obj
			@echo "deleting object files..."

fclean		: clean
			rm $(NAME)

re			: fclean all

test		:
			$(CC) $(CFLAGS) $(INCFL) -o main main.c $(NAME) && ./main
