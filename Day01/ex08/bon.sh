ldapsearch |grep memberUid |grep bon |wc |awk 'NR {print $1}'
