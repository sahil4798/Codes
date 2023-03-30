// //#First
// function Capitalise(word) {
//   return word.replace(word[0], word[0].toUpperCase());
// }

// console.log(Capitalise("sahil"));

// //#Seccond

// function returnDay(num) {
//   switch (num) {
//     case 1:
//       return "Monday";
//       break;
//     case 2:
//       return "Tuesday";
//       break;
//     case 3:
//       return "Wednesday";
//       break;
//     case 4:
//       return "Thusday";
//       break;
//     case 5:
//       return "Friday";
//       break;
//     case 6:
//       return "Satarday";
//       break;
//     case 7:
//       return "Sunday";
//       break;
//     default:
//       return null;
//       break;
//   }
// }
// console.log(returnDay(4));

// //#Third

// function shortsWeather(tempreature) {
//   if (typeof tempreature !== "number") {
//     console.log("Unknown temprature");
//     return null;
//   } else if (tempreature >= 75) {
//     return true;
//   } else {
//     return false;
//   }
// }
// console.log(shortsWeather(74));

// //#Forth

// function lastElement(Arr) {
//   return Arr[Arr.length - 1];
// }
// console.log(lastElement([1, 2, 3, 4, 5]));

// //#Fifth

// function multiply(num1, num2) {
//   if (typeof num1 != "number" || typeof num2 != "number") {
//     return null;
//   }
//   return num1 * num2;
// }

// console.log(multiply(828, 10));

//#Sixth

function sumArray(coll) {
  let sum = 0;
  for (element of coll) {
    sum += element;
  }
  return sum;
}

console.log(sumArray([1, 2, 3, 4, 5]));
