#!/usr/bin/env python3

def pair(arr):

	new_arr = [ ]
	count = 0
	
	for i in arr:
		count = 0
		
		for j in i:

			if '1' in j:
				count = count + 1
		if (count % 2 == 0):
			new_arr.append("1"+i)
		else:
			new_arr.append("0"+i)
	return new_arr


number = int(input("Inserrez une valeur : "))

num = "{0:b}".format(number)
print ("Valeur en binaire = ", num)

array=[num]
print("Valeur avec un bit de parite pair : ", pair(array))
