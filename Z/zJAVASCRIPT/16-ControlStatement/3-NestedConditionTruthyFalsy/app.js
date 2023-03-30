// //Nested-Loop
// //Password must contain 6 digit or more and had no sapce

// let password = prompt("Enter your Password");
// if (password.length >= 6) {
//   if (password.indexOf(" ") === -1) {
//     console.log("Valid Password");
//   } else {
//     console.log("Password must not contain space");
//   }
// } else {
//   console.log("Password must contain 6 or more character");
// }

// // falsy: false  0  ""   null   undefined   NaN

// let s = prompt("Enter here!");
// if (s) {
//   console.log("Truthy");
// } else console.log("Falsey");

// if (0) {
//   console.log("Truthy");
// } else {
//   console.log("Falsy");
// }
// if ("") {
//   console.log("Truthy");
// } else {
//   console.log("Falsy");
// }
// if (null) {
//   console.log("Truthy");
// } else {
//   console.log("Falsy");
// }

// //AND Operator
// let password = prompt("Enter your Password");
// if (password.length >= 6 && password.indexOf(" ") == -1) {
//   console.log("Password is Valid");
// } else {
//   console.log("Password is Invalid");
// }

//OR Operator
// 0-5 --> $0
// 5-10 --> $10
// 10-65 --> $20
// 65+ --> $0

// let age = 10;

// if ((age >= 0 && age < 5) || age >= 65) {
//   console.log("$0");
// } else if (age >= 5 && age < 10) {
//   console.log("$10");
// } else if (age >= 10 && age < 65) {
//   console.log("$20");
// }

// //NOT Operator
// let firstName = prompt("Enter your name");
// if (!firstName) {
//   console.log("Enter a Valid FirstName");
// }

// let age = 40;
// if (!(age >= 0 && age < 5) || age >= 65) {
//   console.log("You are not  either baby or old");
// }

//Switch-Statement
let day = 5;
switch (day) {
  case 1:
    console.log("Monday");
    break;
  case 2:
    console.log("Tuesday");
    break;
  case 3:
    console.log("Wednsday");
    break;
  case 4:
    console.log("Thusday");
    break;
  case 5:
    console.log("Friday");
    break;
  case 6:
    console.log("Satarday");
    break;
  case 6:
    console.log("Sudday");
    break;
  default:
    console.log("Invalid day");
    break;
}
