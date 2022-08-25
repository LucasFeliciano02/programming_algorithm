"""

* PROBLEMA:

Crie um programa que recebe dois 
valores e exibe qual é o maior entre eles

"""


while True:
    try:
        valor_1 = int(input('Digite um valor: '))
        valor_2 = int(input('Digite um outro valor: '))


        if valor_1 > valor_2:
            print('o primeiro valor é maior')
        else:
            print('o segundo valor é maior')  
    except Exception as ex:
        print(f'Erro ao converter valor informado: {ex}')