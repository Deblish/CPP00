# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/18 11:08:11 by aapadill          #+#    #+#              #
#    Updated: 2025/03/18 11:34:32 by aapadill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++
C++_FLAGS = -Wall -Wextra -Werror
INFILES =	PhoneBook.cpp \
			Contact.cpp \
			Main.cpp

OBJFILES = $(INFILES:.cpp=.o)

NAME = phonebook

all: $(NAME)

$(NAME):$(OBJFILES)
	$(C++) $(C++_FLAGS) $(OBJFILES) -o $(NAME) 

%.o: %.cpp
	$(C++) $(C++_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
