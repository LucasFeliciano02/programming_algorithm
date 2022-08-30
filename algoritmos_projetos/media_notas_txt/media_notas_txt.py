
#* DESAFIO - Media do aluno com exportação de dados

def valida_input(descri):
    while True:
        try:
            valor = float(input(descri).replace(',', '.'))
            return valor
        except Exception as ex:
            print(f'erro ao converter valor informado: {ex}')


while True:
    aluno = input('\nNome do aluno: ')
    nota_1 = valida_input('Digite sua nota 1: ')
    nota_2 = valida_input('Digite sua nota 2: ')
    nota_3 = valida_input('Digite sua nota 3: ')
    
    media = (nota_1 + nota_2 + nota_3) / 3
    
    if media > 10:
        print('Digite apenas numeros até 10')
        break
    
    elif 6 <= media <= 10:
        print('\nAPROVADO')
    else:
        print('\nREPROVADO')

    print(f'Média final: {media:.2f}\n')
    
    with open('logica_de_programacao/projetos/media_notas_txt/media_notas.txt', 'w+') as file:  # apaga o que ta no arquivo (abc.txt) e coloca isso no lugar
        file.write(f'Aluno: {aluno}\n')
        file.write(f'Media Final: {media:.2f}\n')
        if 6 <= media <= 10:
            file.write(f'\nAPROVADO')
        else:
            file.write(f'\nREPROVADO')
 

        file.seek(0)
        # print(file.read())


    if input('Digite (s) para sair ou (c) para continuar: ') == 's':
        print('Saindo')
        break