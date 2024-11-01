const rightDiv = document.getElementById('right');
const leftDiv = document.getElementById('left');

// function addP(side){
//     let n = document.getElementById('nInput').value;
//     if(side === 'right'){
//         rightDiv.innerHTML = '';
//         for(let i = 0; i < n; i++){
//             let p = document.createElement('p');
//             p.textContent = `Parágrafo à direita ${i + 1}`;
//             rightDiv.appendChild(p);
//         }
//     }else if(side === 'left'){
//         leftDiv.innerHTML = '';
//         for(let i = 0; i < n; i++){
//             let p = document.createElement('p');
//             p.textContent = `Parágrafo à esquerda ${i + 1}`;
//             leftDiv.appendChild(p);
//         }
//     }
// }

function addSide(side, div){
    let n = document.getElementById('nInput').value;
        div.innerHTML = '';
        for(let i = 0; i < n; i++){
            let p = document.createElement('p');
            p.textContent = `Parágrafo à ${side} ${i + 1}`;
            div.appendChild(p);
        }
}

const add = {
    right: () => addSide('direita', rightDiv),
    left: () => addSide('esquerda', leftDiv)
}
