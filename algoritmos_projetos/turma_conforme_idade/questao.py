faixa_etaria_aluno = int(input('Digite a faixa etaria do aluno: '))


if 4 <= faixa_etaria_aluno <= 5:
    print('Turma A')
elif 6 <= faixa_etaria_aluno <= 8:
    print('Turma B')
elif 9 <= faixa_etaria_aluno <= 10:
    print('Turma C')
else:
    print('Não há turmas para criaça abaixo de 4 anos ou acima de 11 anos')


# Há uma turma adequada conforme a idade da criança
