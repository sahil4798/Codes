////***********************for-loop**********************************
// for (let i = 0; i < 10; i++) {
//   console.log(i + 1);
// }

////*******************Nested for-loop*******************************
// for (let i = 1; i <= 10; i++) {
//   //   console.log("i is: " + i);
//   console.log(`i is: ${i}`); //String template literal
//   for (let j = 1; j < 4; j++) {
//     console.log(`j is: ${j}`);
//   }
// }

// let seatingChart = [
//   ["Tom", "Thomas", "William"],
//   ["Rorger", "Rayligh", "Odin", "Kikaku"],
//   ["luffy", "Zoro", "Sanji", "Jimbie"],
// ];

// for (let i = 0; i < seatingChart.length; i++) {
//   console.log(`#Row-${i + 1}`);
//   for (let j = 0; j < seatingChart[i].length; j++) {
//     console.log(seatingChart[i][j]);
//   }
// }

////***************************While-loop*****************************
// let secretCode = "HippoHops";
// let input = prompt("Enter the Secret Code...");

// while (input !== secretCode) {
//   input = prompt("Enter the Secret Code...");
// }
// console.log("You got SecretCode");

////**********************************Guesing-Game********************

let maxNumber = parseInt(prompt("Enter a Maximum Number ..."));
while (!maxNumber) {
  maxNumber = parseInt(prompt("Enter a Valid Number ..."));
}
const targetNum = Math.floor(Math.random() * maxNumber) + 1;
console.log(targetNum);

let guess = parseInt(prompt("Enter a Number.."));
let attempt = 1;

while (parseInt(guess) !== targetNum) {
  if (guess === "q") {
    break;
  }
  if (guess > targetNum) {
    guess = prompt("Enter a smaller number ");
  } else {
    guess = prompt("Enter a larger number ");
  }
  attempt++;
}

if (guess === "q") {
  console.log(` OOps You Quit `);
} else {
  console.log(`Congrats  You got it in ${attempt} `);
}
