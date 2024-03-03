import os

path = r'D:\Desktop\pp2\lab5'

with open(path, 'r') as f:
    lines = f.readlines()
    print('Number of lines in {}: {}'.format(os.path.basename(path), len(lines)))