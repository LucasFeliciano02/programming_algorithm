// Velocidade máxima de até 70
// a cada 5km acima do limite você ganha 1 ponto
// caso pontos maior que 12 -> 'carteira Suspensa'

// math.Floor()  =  Arredonda valores para o decimal mais próximo


verificarVelocidade(120);

function verificarVelocidade(velocidade) {
    const velocidadeMaxima = 70;
    const KmPorPonto = 5;

    if (velocidade <= velocidadeMaxima)
        console.log("está na velocidade permitida");
    else {
        const pontos = Math.floor(((velocidade - velocidadeMaxima) / KmPorPonto));  // Passou de 70 km/h, a cada 5 km a mais são 1 ponto na carteira
        
        if (pontos >= 12)  // 12 pts na carteira  =   130 km/h
            console.log('carteira Suspensa');
        else
            console.log('Pontos:', pontos);
    }
}
