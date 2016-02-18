#!/bin/sh
#   script Skip.sh
#   Auteur : Patricia pouliquen
#   Date de creation : Day 01 - 19 novembre 2015
#----------------------------------------------------
ls -l | awk 'NR%2 {print $0}'
