# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/03 10:39:34 by aubertra          #+#    #+#              #
#    Updated: 2025/03/03 10:42:36 by aubertra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/29 15:29:44 by aubertra          #+#    #+#              #
#    Updated: 2025/02/05 14:55:01 by aubertra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CPP = c++
FLAGS = -Wall -Wextra -Werror -g3 -std=c++98

NAME = megaphone
SRCS =  megaphone.cpp

OBJS = $(addprefix objs/,$(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

objs/%.o: %.cpp
	@mkdir -p objs/
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -rf objs/

fclean: clean
	rm -f $(NAME)

re: fclean all


.PHONY:				all clean fclean re