cat /etc/passwd | grep -v '^#' | sed -n 'n;p' | cut -d ':' -f 1 | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr '\n' '&' | sed -e 's/&/, /g' | rev | sed -e 's/ ,/./1' | rev | tr -d '\n'
