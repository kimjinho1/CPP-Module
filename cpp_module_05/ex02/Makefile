NAME	=	ex02
CC		=	c++
CFLAGS	=	-std=c++98 -Wall -Wextra -Werror

INC_DIR = 	includes
SRC_DIR = 	srcs

INCS 	=	$(addprefix $(INC_DIR)/, \
			main.hpp \
			Bureaucrat.hpp \
			Form.hpp \
			ShrubberyCreationForm.hpp \
			RobotomyRequestForm.hpp \
			PresidentialPardonForm.hpp \
)

SRCS 	=	$(addprefix $(SRC_DIR)/, \
			main.cpp \
			Bureaucrat.cpp \
			Form.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp \
)

all		:	$(NAME)

$(NAME)	:	$(SRCS)
				$(CC) $(CFLAGS) -I $(INC_DIR) $(SRCS) -o $(NAME)

clean	:
			@ rm -f $(NAME)

fclean 	:	clean

re 		: 	fclean all

.PHONY	:	all clean fclean re
