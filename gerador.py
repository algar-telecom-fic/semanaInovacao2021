#To use this script, run this command on linux or something like this on others OSs: python3 generateRandomInt.py > numeros.txt

from random import uniform

limite = 0.5
valores = ""

file = open("numeros.txt", "w")

qtdValores = int(input("Digite a quantidade de valores a serem gerados: "))

valMax = int(input("Digite o valor máximo da sequencia: "))
valMin = int(input("Digite o valor mínimo da sequencia: "))


for i in range(qtdValores-1):
    value = uniform(valMax, valMin)
    valores = (valores + str(value) + "\n")

file.write(valores)
file.close()