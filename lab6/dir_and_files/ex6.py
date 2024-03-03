import os

path = r'D:\Desktop\pp2\lab6\dir_and_files\ex6_A-Z_files'

if not os.path.exists(path):
   os.makedirs(path)

A = ord('A')
base = 'ex6_A-Z_files\\{}.txt'
for i in range(A, A+26):
    f = open(base.format(chr(i)), 'w')