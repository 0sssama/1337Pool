cat /etc/passwd | grep -v '#' | awk 'NR%2==0' | cut -d':' -f1 | rev | sort -r | sed -n $(echo $FT_LINE1)', '$(echo $FT_LINE2)' p' | sed 's/$/,/' | tr '\n' ' ' | sed 's/..$//' | sed 's/$/./'
