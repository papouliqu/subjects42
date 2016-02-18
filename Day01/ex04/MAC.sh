#!/bin/sh
#   script : MAC.sh
#   Auteur : Patricia Pouliquen
#   Date de creation : Day01 - 18 Novembre 2015
#--------------------------------------------------
#netstat -Anr -p tcp |grep UHLWI
ifconfig -a |grep ether |sed "s/ether //g" |sed "s/	//g" |sed "s/ //g"
