"""

Ao iniciar gera um valor aleatório de 1 a 10 e permite que o usuário chute um número até
o valor aleatório gerado no início do programa seja chutado corretamente

O programa deve informar se o chute foi acima, abaixo ou igual ao valor aleatório gerado no início do programa

#* Método 5Q's para montar o algorítimo:

Analise criticamente o problema e descubra:
(Tente explicar este problema para você mesmo em voz alta e peça mais informações/investigue mais até você compreender completamente o problema.
Tbm se pode Ir atraz e pesquisar com pessoas ou google)


1. Quais são os dados de entrada necessários?  
(valor aleatório de 1 a 10)
(chute do usuário)

2. O que devo fazer com estes dados? 
(Comparar o chute do usuário com o valor aleatório que foi gerado no início do programa e dizer se o chute foi >, < ou == ao valor que foi gerado no inicio do programa)

3. Quais são as restrições deste problema?
(Valor aleatorio de 1 a 10 apenas)

4. Qual é o resultado esperado?
(O programa deve informar se o chute foi acima, abaixo ou igual ao valor aleatório gerado no início do programa)

5. Qual é sequência de passos a ser feitas para chegar ao resultado esperado? -> (Faça essa parte em pseudocódigo)
(algoritmo)


input valor_aleatorio de 1 a 10
input chute

if chute > valor_aleatorio
    print('Chute foi maior que o valor gerado')
if chute < valor_aleatorio
    print('Chute foi menor que o valor gerado')
if chute == valor_aleatorio
    print('Você acertou!') 
"""

import random


# Por estar fora do while, sempre tera um valor fixo
valor_aleatorio = random.randint(1, 10)

acertou = False
while acertou == False:
    chute = int(input('Chute um valor de 1 a 10: '))

    if chute > valor_aleatorio:
        print('Chute foi maior que o valor gerado')
    elif chute < valor_aleatorio:
        print('Chute foi menor que o valor gerado')
    elif chute == valor_aleatorio:
        acertou = True
        print('Você acertou!')
