import os

filenames = os.listdir("/Users/bcharman/cadet/libft/tests/")
for filename in filenames:
    s = open(filename).read()
    s = s.replace('../bcharman3/libft.h', '../bcharman3/libft.h')
    f = open(filename, 'w');
    f.write(s)
    f.close()
