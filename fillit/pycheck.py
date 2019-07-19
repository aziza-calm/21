import os

f = []
for (dirpath, dirnames, files) in os.walk("./tests"):
    f.extend(files)
    break
i = 0;
for file in files:
    print "########### " + file + " ######################"
    os.system("./fillit ./tests/" + file)
    print "\n"

