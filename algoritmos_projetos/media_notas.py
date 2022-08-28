
#* DESAFIO - Media do aluno

def valida_input(descri):
    while True:
        try:
            valor = float(input(descri).replace(',', '.'))
            return valor
        except Exception as ex:
            print(f'erro ao converter valor informado: {ex}')


while True:
    nota_1 = valida_input('Digite sua nota 1: ')
    nota_2 = valida_input('Digite sua nota 2: ')
    nota_3 = valida_input('Digite sua nota 3: ')
    
    media = (nota_1 + nota_2 + nota_3) / 3
    
    if media > 10:
        print('Digite apenas numeros até 10')
        break
    
    if 6 <= media <= 10:
        print('\nAPROVADO')
    else:
        print('\nREPROVADO')

    print(f'Média final: {media:.2f}\n')

    if input('Digite (s) para sair ou (c) para continuar: ') == 's':
        print('Saindo')
        break