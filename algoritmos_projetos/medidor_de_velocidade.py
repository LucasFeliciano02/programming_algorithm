"""

#* Método 5Q's para montar o algorítimo:

Analise criticamente o problema e descubra:
(Tente explicar este problema para você mesmo em voz alta e peça mais informações/investigue mais até você compreender completamente o problema.
Tbm se pode Ir atraz e pesquisar com pessoas ou google)


1. Quais são os dados de entrada necessários?  
(velocidade maxima == 80km)
(usuário input velocidade dele)

2. O que devo fazer com estes dados? 
(Comparar se o input do usuário com o velocidade maxima os tipos de muta conforme a velocidade enviada pelo usuario)

3. Quais são as restrições deste problema?
(velocidade maxima == 80km)
(se velocidade input <= velocidade maxima, exiba Não houve multa)

4. Qual é o resultado esperado?
(Os tipos de multa conforme a velocidade ultrapassada)

5. Qual é sequência de passos a ser feitas para chegar ao resultado esperado? -> (Faça essa parte em pseudocódigo)
(algoritmo) 


velocidade_maxima = 80
velocidade_usuario = input('Digite sua velocidade: ')

if velocidade_usuario <= velocidade_maxima
    print 'Não houve multa'
elif 81 <= velocidade_usuario <= 90
    print 'Levou multa leve'
elif 91 <= velocidade_usuario <= 100
    print 'Levou multa gravíssima'
"""


while True:
    try:
        velocidade_maxima = 80

        velocidade_usuario = int(input('Digite sua velocidade: '))

        if velocidade_usuario <= velocidade_maxima:
            print('Não houve multa')
        elif velocidade_usuario > velocidade_maxima and velocidade_usuario <= velocidade_maxima + 10:  # 81 <= velocidade_usuario <= 90:
            print('Levou multa leve')
        elif velocidade_usuario >= velocidade_maxima + 11 and velocidade_usuario <= velocidade_maxima + 20:  # 91 <= velocidade_usuario <= 100:
            print('Levou multa grave')
        else:
            print('Levou multa gravíssima')
            
        if input('\nDigite (s) para sair ou (c) para continuar: ') == 's':
            print('Saindo')
            break
    except Exception as ex:
        print(f'Erro ao converter valor: {ex}')