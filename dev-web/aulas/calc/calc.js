function calcular(operacao) {
    const n1 = parseFloat(document.getElementById('n1').value);
    const n2 = parseFloat(document.getElementById('n2').value);
    let resultado;

    switch(operacao){
        case '+': resultado = n1 + n2; break;
        case '-': resultado = n1 - n2; break;
        case '*': resultado = n1 * n2; break;
        case '/': resultado = n2 !== 0 ? n1 / n2 : 'Erro: Divisão por zero'; break;
        default: resultado = 'Operação inválida';
    }

    document.getElementById('resultado').innerText = `Resultado: ${resultado}`;
}