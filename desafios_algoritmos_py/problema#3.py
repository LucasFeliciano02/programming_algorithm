"""
* DESAFIO: 

Escreva um programa que, ao iniciar gera um 
valor aleatório de 1 a 10 e permite que o usuário 
chute um número até que o valor aleatório gerado 
no início do programa seja chutado corretamente.

"""


import random


while True:
    try:
        aleatorio = random.randint(0, 10)  # Por estar dentro do while, sempre tera um valor diferente a cada rodada
        print(f'numero gerado: {aleatorio}\n')
        
        
        tentativas = int(input('Adivinha qual foi o numero gerado: '))
        
        if tentativas < aleatorio:
            print('Deveria ter chutado mais alto')  
        if tentativas > aleatorio:
            print('Deveria ter chutado mais baixo')
        if tentativas == aleatorio:
            print(f'\nACERTOUUU!!!, o numero era: {aleatorio}')
        else:
            print(f'\nTente novamente')
    except Exception as ex:
        print(f'Erro ao converter valor informado: {ex}')
        