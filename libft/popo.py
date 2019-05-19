import re

s = open('Makefile').read()
s = re.sub(' ft_', '.c ft_', s)
f = open('Makefile', 'w');
f.write(s)
f.close()
