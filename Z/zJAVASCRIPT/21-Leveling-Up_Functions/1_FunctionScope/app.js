////************Function -Scope*********************
// let a = 1;
// function doThat() {
//   a = 4;
//   console.log(a);
// }

// console.log(a);
// doThat();
// console.log(a);

// let b = 3;
// function doAgain() {
//   let b = 10;
//   console.log(b);
// }
// doAgain();

////*********************Block-Scope******************************

// let num = 8;

// if (num > 0) {
//   const k = 10;
//   let mak = 30;
//   var lake = 50;
// }
// // console.log(k);  //will Thorw an error
// // console.log(mak);  //will Thorw an error
// // console.log(lake);   //this exception due to keyword var

// for (let i = 0; i < 3; i++) {
//   let pond = 87;
// }
// // console.log(pond); //Will throw an error

////***********************Lexical Scope*****************************
// function bankRobbery() {
//   const heroes = ["Superman", "Ironman", "Spiderman", "CaptainAmerica"];
//   function cryForHelp() {
//     function inner() {
//       for (let hero of heroes) {
//         console.log(`PLEASE HELP US :${hero.toUpperCase()}`);
//       }
//     }
//     inner();
//   }
//   cryForHelp();
// }
// bankRobbery();

////********************function Expression***************************
// function sum(num1, num2) {
//   return num1 + num2;
// }

// let product = function pro(num1, num2) {
//   return num1 * num2;
// };

// // pro(2, 5); //will throw an error
// // product(2, 4);//will not throw wn error
// console.log(product(3, 8));

////********************Higher Order Function**************************
// function rollDice() {
//   // const roll = Math.random();                   // (0-1)
//   // const roll = Math.random() * 6;              // [0 -5]
//   // const roll = Math.floor(Math.random() * 6); //{0 , 1 ,2, 3 , 4, 5}
//   const roll = Math.floor(Math.random() * 6) + 1; //{1 , 2, 3, 4, 5, 6}
//   console.log(roll);
// }

// function twoTimes(func) {
//   func();
//   func();
// }
// function tenTimes(f) {
//   for (let i = 0; i < 10; i++) {
//     f();
//   }
// }
// twoTimes(rollDice);
// tenTimes(rollDice);

////*********************Function as return vakue*********************

////#1Make a MystryFunction
// function makeMysteryFunc() {
//   const rand = Math.random();
//   if (rand > 0.5) {
//     return function () {
//       console.log("Contrats you Win");
//     };
//   } else {
//     return function () {
//       alert("You Losse");
//       alert("You Losse");
//       alert("You Losse");
//     };
//   }
// }
// const result = makeMysteryFunc();
// // console.log(result);
// result();

////#2-Example
// function isBetween(n) {
//   return n >= 0 && n <= 18;
// }
// console.log(isBetween(5));

////#3-Example
function isBetween(min, max) {
  return function (num) {
    return num >= min && num < max;
  };
}

let isChild = isBetween(0, 18);
// let isChild =function (num) {
//     return num >= 0 && num < 100;   //meaning of above line
//   };
console.log(isChild(6));
console.log(isChild(60));
let isAdult = isBetween(18, 45);
console.log(isAdult(44));
