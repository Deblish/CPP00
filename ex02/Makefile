C++ = c++
STD = -std=c++98
C++_FLAGS = -Wall -Wextra -Werror
INFILES =	Account.cpp \
			tests.cpp \

OBJFILES = $(INFILES:.cpp=.o)

NAME = globalBanksters

all: $(NAME)

$(NAME):$(OBJFILES)
	$(C++) $(STD) $(C++_FLAGS) $(OBJFILES) -o $(NAME) 

%.o: %.cpp
	$(C++) $(STD) $(C++_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
