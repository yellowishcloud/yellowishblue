import shutil 

shutil.copy('ex4.py', 'ex7.py')

with open('ex4.py', 'r') as f1:
    with open('ex7.py', 'w') as f2:
        f2.write(f1.read())
        for i in f1: f2.write(i)