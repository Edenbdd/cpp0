# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/02 15:29:44 by aubertra          #+#    #+#              #
#    Updated: 2025/03/04 16:53:56 by aubertra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CPP = c++
FLAGS = -Wall -Wextra -Werror -g3 -std=c++98

NAME = awesomephonebook

SRCS =  main.cpp\
		Contact.cpp\
		PhoneBook.cpp\

OBJS = $(addprefix objs/,$(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

objs/%.o: srcs/%.cpp
	@mkdir -p objs/
	$(CPP) $(FLAGS) -c $< -o $@ -I includes/

clean:
	rm -rf objs/

fclean: clean
	rm -f $(NAME)

re: fclean all


.PHONY:				all clean fclean re