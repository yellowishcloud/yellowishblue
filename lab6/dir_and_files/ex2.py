import os 

path = 'D:\Desktop\pp2\lab5'

print('Exists:', os.access(path, os.F_OK))
print('Access to read:', os.access(path, os.R_OK))
print('Access to write:', os.access(path, os.W_OK))
print('Can be executed:', os.access(path, os.X_OK))