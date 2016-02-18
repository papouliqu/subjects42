# ************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mouaret <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/07 16:38:36 by mouaret           #+#    #+#              #
#    Updated: 2015/12/22 18:32:44 by mouaret          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = foobar
DEBUG = "__DEBUG__MODE__"

SRC = ft_putchar.c ft_putnbr.c ft_putstr.c main_06.c
SRC00 = main_00.c libft.a
SRC01 = main_01.c

CFILES = $(addsuffix .c, $(SRC))
OFILES = $(addsuffix .o, $(SRC))

HEADERS = ft_putchar.h ft_putnbr.h ft_putstr.h

OPTIONS = -Wall -Werror -Wextra

%.o: %.c
	gcc $(OPTIONS) -c $(CFILES)

all:	libft.a ex00 ex01 ex02 ex03 ex04 ex05

$(NAME): $(SRC) $(HEADERS)
	gcc $(OPTIONS) -o $(NAME) $(SRC)

clean:
	/bin/rm -f *.o

fclean:	clean
	/bin/rm -f ex*
	/bin/rm -f libft.a

re:	fclean	all

test0: ex00
	echo "-- ex00 test"
	./ex00
	echo "------------"

test1: ex01
	echo "-- ex01 test"
	./ex01 un deux trois
	echo "------------"

test2: ex02
	echo "-- ex02 test"
	./ex02 -12
	./ex02 0
	echo "------------"

test3: ex03
	echo "-- ex03 test"
	./ex03
	echo "------------"

test4: ex04
	echo "-- ex04 test4"
	./ex04 "" " 123  " " un deux trois" "JAN FEB MAR APR MAY JUN"
	echo "------------"

test41: ex04
	echo "-- ex04 test41"
	./ex04 "" " 123  " " un deux trois" "" "JAN FEB MAR APR MAY JUN"
	echo "------------"

test4d: ex04d
	echo "-- ex04d test"
	./ex04d "un deux trois"
	echo "------------"

test5: ex05
	echo "-- ex05 test5"
	./ex05 "" " 123  " " un deux trois" "JAN FEB MAR APR MAY JUN"
	echo "------------"

norm:
	cd ../libft; 	norminette *.c *.h      | more
	cd ../ex00; 	norminette ft.h         | more
	cd ../ex01; 	norminette ft_boolean.h | more
	cd ../ex02; 	norminette ft_abs.h     | more
	cd ../ex03; 	norminette ft_point.h   | more
	cd ../ex04; 	norminette ft_param_to_tab.c ft_stock_par.h | more
	cd ../ex05; 	norminette ft_show_tab.c ft_stock_par.h | more

libft.a: 
	(cd ../libft; sh libft_creator.sh)
	ln -sf ../libft/libft.a

ex00: $(SRC00)
	gcc $(OPTIONS) -o ex00 $(SRC00)

ex01: $(SRC01) ft_boolean.h
	gcc $(OPTIONS) -o ex01 $(SRC01)

ex02: main_02.c ft_abs.h
	gcc $(OPTIONS) -o ex02 main_02.c

ex03: main_03.c ft_point.h
	gcc $(OPTIONS) -o ex03 main_03.c

ex04: ../ex04/ft_param_to_tab.c libft.a main_04.c ft_stock_par.h ft_split_whitespaces.c ft_show_tab.c
	rm ft_stock_par.h
	ln -f ../ex04/ft_stock_par.h .
	gcc $(OPTIONS) -o ex04 ../ex04/ft_param_to_tab.c main_04.c ft_split_whitespaces.c ft_show_tab.c libft.a 

ex04d: libft.a main_04.c ft_param_to_tab.c ft_split_whitespaces.c ft_show_tab.c ft_stock_par.h 
	rm ft_stock_par.h
	ln -f ../ex04/ft_stock_par.h .
	gcc $(OPTIONS) -D $(DEBUG) -o ex04d libft.a main_04.c ft_param_to_tab.c ft_split_whitespaces.c ft_show_tab.c

ex05: ../ex05/ft_show_tab.c libft.a main_05.c ft_param_to_tab.c ft_stock_par.h ft_split_whitespaces.c 
	rm ft_stock_par.h
	ln -f ../ex05/ft_stock_par.h .
	gcc $(OPTIONS) -o ex05 ../ex05/ft_show_tab.c libft.a main_05.c ft_param_to_tab.c ft_split_whitespaces.c
