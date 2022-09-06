// Criar uma função que exibe a qtd de * que aquela linha possui

exibirAsteriscos(10);

function exibirAsteriscos(linhas) {
    //* Maneira 1:

    // let padrao = '';

    // for(let linha = 1; linha <= linhas; linha++) {
    //     padrao += '*';
    //     console.log(padrao);
    // }

    //* Maneira 2:

    for(let linha = 1; linha <= linhas; linha++) {
        let padrao = '';
        for(let i = 0; i < linha; i++) {  // loop nested ou loop interior 
            padrao += '*';
        }
        console.log(padrao);
    }
}