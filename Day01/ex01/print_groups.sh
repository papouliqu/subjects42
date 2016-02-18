#!/bin/sh
# Auteur : Patricia Pouliquen
# Day_01 : 18 Novembre 
#echo "variable user" $FT_USER
#groups $FT_USER | sed 's/ /,/g' | cat -e |tr -d '\n' |sed "s/$//" |tr -d '\n'
groups $FT_USER | sed 's/ /,/g' | cat -e |tr -d '\n' |sed "s/$//" |tr -d '$\n'
