let arr = [2, 1, 3];
console.log(arr);

function ordena(x){
    for(i in x){
        let atual = x[i];
        let prox = x[i+1];
        if(atual > prox){
            x[i] = prox;
            x[i+1] = atual;
        }
    }
}

console.log(ordena(arr));

