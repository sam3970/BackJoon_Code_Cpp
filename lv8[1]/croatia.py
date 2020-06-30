import os;

croatia = input()
 
croatia_voca = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']
 
for i in range(len(croatia_voca)):
    croatia = croatia.replace(croatia_voca[i],str(i))
 
print(len(croatia))
