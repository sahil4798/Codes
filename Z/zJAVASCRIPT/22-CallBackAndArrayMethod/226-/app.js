////*************************setTimeout*****************************************
// console.log("Hello");
// setTimeout(() => console.log("Are you still There.."), 3000);
// console.log("Bye");

////*************************setInterval*****************************************
// setInterval(() => console.log(Math.floor(Math.random() * 6) + 1), 2000);

// //setting breakPoint
// const id = setInterval(
//   () => console.log(Math.floor(Math.random() * 6) + 1),
//   2000
// );
// setTimeout(() => clearInterval(id), 11000);

////**************************Filter**********************************************

// let numbers = [
//   1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
// ];

// // const natural = numbers.filter((num) => num < 10);
// const natural = numbers.filter((num) => num % 3 === 0);
// for (n of natural) {
//   console.log(n);
// }

// let animes = [
//   { tittle: "Naruto", rating: 91, year: 2000 },
//   { tittle: "DeathNote", rating: 85, year: 2005 },
//   { tittle: "OnePeice", rating: 95, year: 1999 },
//   { tittle: "Demonslayer", rating: 75, year: 2020 },
//   { tittle: "Attack on Titans", rating: 80, year: 2015 },
//   { tittle: "Tokyo Revengers", rating: 70, year: 2017 },
//   { tittle: "Bleach", rating: 90, year: 2003 },
// ];

// const bestAnime = animes.filter((anime) => anime.rating >= 90);
// for (b of bestAnime) {
//   console.log(b);
// }

// const oldAnime = animes.filter((anime) => anime.year < 2015);
// for (o of oldAnime) {
//   console.log(o);
// }

// let newAnime = animes.filter((anime) => anime.year >= 2015);
// for (e of newAnime) {
//   console.log(e);
// }
// let newAnimeTittle = newAnime.map((anime) => anime.tittle);
// for (e of newAnimeTittle) {
//   console.log(e);
// }

// let together = animes
//   .filter((anime) => anime.year >= 2015)
//   .map((anime) => anime.tittle);
// for (e of together) {
//   console.log(e);
// }

////*****************************Every *******************************************
// let marks = [80, 85, 76, 98, 95];
// console.log(marks.every((mark) => mark > 75));
// console.log(marks.every((mark) => mark > 76));

////*****************************Some*******************************************
// let animes = [
//   { tittle: "Naruto", rating: 91, year: 2000 },
//   { tittle: "DeathNote", rating: 85, year: 2005 },
//   { tittle: "OnePeice", rating: 95, year: 1999 },
//   { tittle: "Demonslayer", rating: 75, year: 2020 },
//   { tittle: "Attack on Titans", rating: 80, year: 2015 },
//   { tittle: "Tokyo Revengers", rating: 70, year: 2017 },
//   { tittle: "Bleach", rating: 90, year: 2003 },
// ];
// console.log(animes.some((anime) => anime.year >= 2020));
// console.log(animes.some((anime) => anime.year >= 2021));

////*****************************Reduce****************************************

// const numbers = [9.99, 1.5, 19.99, 49.99, 30.5];

// let total = 0;
// for (let ele of numbers) {
//   total += ele;
// }
// console.log(total);

// let tot = numbers.reduce(function (total, num) {
//   return total + num;
// });

// let highest = numbers.reduce((max, num) => {
//   if (max < num) {
//     return num;
//   } else {
//     return max;
//   }
// });
// console.log(highest);

// let tot = numbers.reduce((total, num) => (total += num), 10);
// console.log(tot);
//here we also intiallize the value of the total=10

// let animes = [
//   { tittle: "Naruto", rating: 91, year: 2000 },
//   { tittle: "DeathNote", rating: 85, year: 2005 },
//   { tittle: "OnePeice", rating: 99, year: 1999 },
//   { tittle: "Demonslayer", rating: 75, year: 2020 },
//   { tittle: "Attack on Titans", rating: 80, year: 2015 },
//   { tittle: "Tokyo Revengers", rating: 70, year: 2017 },
//   { tittle: "Bleach", rating: 90, year: 2003 },
// ];

// let bestAnime = animes.reduce(function (bestAnime, current) {
//   if (bestAnime.rating < current.rating) {
//     return current;
//   } else {
//     return bestAnime;
//   }
// });
// console.log(bestAnime);

////*******************Arrow Function and This-keyword *********************

// const person = {
//   firstName: "Monkey",
//   lastName: "D Luffy",
//   fullName: function () {
//     return `${this.firstName} ${this.lastName}`;
//   },
// };
// console.log(person.fullName());

const person = {
  firstName: "Monkey",
  lastName: "D Luffy",
  fullName: function () {
    // console.log(this);
    return `${this.firstName} ${this.lastName}`;
  },
  shoutName: function () {
    setTimeout(() => {
      //   console.log(this);
      console.log(this.fullName());
    }, 4000);
  },
};
console.log(person.shoutName());
