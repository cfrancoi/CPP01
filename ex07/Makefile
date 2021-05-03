NAME		= 	sed
SRCS_DIR	= 	source/
SRCS		=	main.cpp
SRCS		+=	Sed.cpp
CC			= 	clang++
CFLAGS		= 	-Wall -Werror -Wextra -std=c++98
OBJS_DIR	= 	$(SRCS_DIR)objs/
OBJS		= 	 $(addprefix $(OBJS_DIR), $(SRCS:.cpp=.o))
INC_DIR 	=	include

all: $(NAME)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.cpp
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re