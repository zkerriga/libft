# ******************************************************************************* #
#                                                                             	  #
#     Makefile                                                   ♥           	  #
#                                                                 ¨/\_/\ ♥    	  #
#     By: zkerriga                                                 >^,^<     	  #
#                                                                   / \     	  #
#     Created: 2020-05-08 13:22:30 by zkerriga                     (___)__  	  #
#     Updated: 2020-05-08 13:22:30 by zkerriga                              	  #
#                                                                             	  #
# ******************************************************************************* #

NAME = libft.a
HEAD = libft.h

SRC_DIR = src/
OBJ_DIR = bin/
HDR_DIR = ./

CC = gcc
FLAGS = -I$(HDR_DIR) -Wall -Wextra -Werror 

IS_DIR = is/
IS_FILES = $(addprefix $(IS_DIR)ft_, isalnum isalpha isascii isdigit isprint tolower toupper)

MEM_DIR = mem/
MEM_FILES = $(addprefix $(MEM_DIR)ft_, memccpy memchr memcmp memcpy memmove memset bzero calloc)

NBR_DIR = nbr/
NBR_FILES = $(addprefix $(NBR_DIR)ft_, atoi itoa)

PUT_DIR = put/
PUT_FILES = $(addprefix $(PUT_DIR)ft_, putchar_fd putendl_fd putnbr_fd putstr_fd)

STR_DIR = str/
STR_FILES = $(addprefix $(STR_DIR)ft_, strchr strlcat strlcpy strlen strnstr strrchr strncmp strjoin strmapi strtrim substr split strdup)

LST_DIR = lst/
LST_FILES = $(addprefix $(LST_DIR)ft_, lstadd_back lstadd_front lstclear lstdelone lstiter lstlast lstmap lstnew lstsize)

FILES = $(IS_FILES) $(MEM_FILES) $(NBR_FILES) $(PUT_FILES) $(STR_FILES) $(LST_FILES)
FILES.O = $(addprefix $(OBJ_DIR), $(FILES:=.o))

.PHONY: all
all: $(NAME)
	@echo -e "\n\033[32m[+] Make completed!\033[0m"

$(NAME): $(OBJ_DIR) $(FILES.O)
	ar rc $(NAME) $(FILES.O)
	ranlib $(NAME)

$(OBJ_DIR):
	mkdir $(OBJ_DIR)
	mkdir $(addprefix $(OBJ_DIR), $(IS_DIR) $(MEM_DIR) $(NBR_DIR) $(PUT_DIR) $(STR_DIR) $(LST_DIR))

$(FILES.O): $(OBJ_DIR)%.o: $(SRC_DIR)%.c $(HEAD)
	$(CC) $(FLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf $(OBJ_DIR)

.PHONY: fclean
fclean: clean
	rm -rf $(NAME)

.PHONY: re
re: fclean all