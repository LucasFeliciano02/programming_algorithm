// Escreva uma função que usa 2 números e retorna o maior entre eles


let valorMaior = max(10, 5);
console.log(valorMaior);

function max(var_1, var_2) {
    // if(var_1 > var_2)
    //     return var_1;
    // return var_2;

    return var_1 > var_2 ? var_1: var_2 ;  // Se valor 1 for maior que valor 2, retorna valor 1, se nao retorna o valor 2 apenas
}