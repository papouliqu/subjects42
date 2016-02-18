#!/bin/sh
#
#
cat /etc/passwd |sed "s/^#.*$//g" |sed "s/\:\*.*$//g" |sed "s/:/ /g" |awk 'NR%2 ==0' |awk -F: '!/#/ {print $1 }' |rev |sort -r |sed -n "$FT_LINE1,$FT_LINE2 p" |tr "\n" ", " |awk 'NF' |cat -e |sed "s/,/, /g" |sed "s/...$/./" |tr -d '\n'
