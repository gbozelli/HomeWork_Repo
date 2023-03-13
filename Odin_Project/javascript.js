//so i just wanna 

function capitalize(p){
    p = p.slice(0,0).toUpperCase();
    p = p.slice(1,-1).toLowerCase();
    return p
}

function getComputerChoice(){
    let rand = Math.floor(Math.random() * 3);
    if(rand===0){
        return "Rock"
    }if(rand===1){
        return "Papers"
    }if(rand===2){
        return "Scissors"
    }
}

function playRound(playerSelection, computerSelection){
    if(playerSelection === computerSelection){
        return '${playerSelection} with ${playerSelection}! Tie!'
    }else if(playerSelection === "Rock" && computerSelection === "Scissors"){
        return "You Win! ${playerSelection} beats ${computerSelection}"
    }else if(playerSelection === "Rock" && computerSelection === "Papers"){
        return "You Lose! ${playerSelection} beats ${computerSelection}"
    }else if(playerSelection === "Papers" && computerSelection === "Scissors"){
        return "You Lose! ${playerSelection} beats ${computerSelection}"
    }else if(playerSelection === "Papers" && computerSelection === "Rock"){
        return "You Win! ${playerSelection} beats ${computerSelection}"
    }else if(playerSelection === "Scissors" && computerSelection === "Papers"){
        return "You Win! ${playerSelection} beats ${computerSelection}"
    }else if(playerSelection === "Scissors" && computerSelection === "Rock"){
        return "You Lose! ${playerSelection} beats ${computerSelection}"
    }
}

function game(){
    for(let i=0;i<5;i++){
        console.log("Play!");
        let playerSelection = prompt();
        playerSelection = capitalize(playerSelection);
        let computerSelection = getComputerChoice();
        console.log(computerSelection);
        console.log(playerSelection);
        let print = playRound(playerSelection, computerSelection);
        console.log(print);
    }
}

game();