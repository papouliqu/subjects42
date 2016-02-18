#!/bin/sh
#  script : count_files.sh
#  Auteur : Patricia Pouliquen
#  Date de creation : day01 - 18 Novembre 2015
#------------------------------------------------
find  . \( -type f -or -type d \) -print |wc -l |sed "s/ //g"
