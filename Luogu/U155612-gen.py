with open('U155612-gen.txt','w') as file:
    for i in range(5000):
        file.write('B {:d})P\n'.format(i))