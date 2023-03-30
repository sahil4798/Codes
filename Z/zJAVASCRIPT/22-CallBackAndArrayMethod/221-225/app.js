////*********************forEach() Method***********************************
let numbers = [
  1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
];

// for (num of numbers) {
//   console.log(num);
// }

// numbers.forEach(function (num) {
//   console.log(num);
// });
// numbers.forEach(function (num) {
//   if (num % 2 === 0) {
//     console.log(num);
//   }
// });

// let animes = [
//   { tittle: "Naruto", rating: 99 },
//   { tittle: "DeathNote", rating: 99 },
//   { tittle: "OnePeice", rating: 100 },
//   { tittle: "Demonslayer", rating: 95 },
// ];

// animes.forEach(function (anime) {
//   console.log(`${anime.tittle} - ${anime.rating}/100`);
// });

////********************* map() Method***********************************

// const double = numbers.map(function (num) {
//   return num * 2;
// });

// for (num of double) {
//   console.log(num);
// }

// const tittles = animes.map(function (t) {
//   return t.tittle;
// });

// for (t of tittles) {
//   console.log(t);
// }

////******************************Arrow Function*********************************
// const sum = function (x, y) {
//   return x + y;
// };
// console.log(sum(12, 4));

// const add = (x, y) => {
//   return x + y;
// };

// const add = (x, y) => x + y; //Implicit return of arrow function

// console.log(add(10, 5));

// const square = (num) => {
//   return num * num;
// };
// console.log(square(5));

// const rollDice = () => {
//   return Math.floor(Math.random() * 6) + 1;
// };

// const rollDice = () => Math.floor(Math.random() * 6) + 1; //Implicit return of arrow function

// console.log(rollDice());

let animes = [
  { tittle: "Naruto", rating: 99 },
  { tittle: "DeathNote", rating: 99 },
  { tittle: "OnePeice", rating: 100 },
  { tittle: "Demonslayer", rating: 95 },
];

// const a = animes.map(function (anime) {
//   return ` ${anime.tittle} - ${anime.rating / 10} `;
// });

const a = animes.map((anime) => {
  return ` ${anime.tittle} - ${anime.rating / 10} `;
});

// const a = animes.map((anime) => ` ${anime.tittle} - ${anime.rating / 10} `);

for (let anime of a) {
  console.log(anime);
}
