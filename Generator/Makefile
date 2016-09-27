# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antricht <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/04 12:20:04 by antricht          #+#    #+#              #
#    Updated: 2016/06/04 12:42:03 by antricht         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = gen
SRCS = main.c write.c

$(NAME):
	@echo Compiling...
	@gcc -o $(NAME) $(SRCS)
	@echo Compiled!

clean:
	@rm $(NAME)
	@echo Application $(NAME) Removed!

re: clean $(NAME)
