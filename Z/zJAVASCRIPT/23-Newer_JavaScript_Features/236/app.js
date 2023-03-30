////********************argunment*********************
// function show() {
//   for (let i = 0; i < arguments.length; i++) {
//     console.log(arguments[i]);
//   }
// }
// show(10, 20, 30, 40, 50);

////****Does't work in Arrow function*********
////****It does't means that argunment is an array******
// console.log(sum(19));
// function sum() {
//   return arguments.reduce((total, el) => total + el);
// }
// console.log(sum(19));

////********************Rest*********************
// function sum(...num) {
//   return num.reduce((total, el) => total + el);
// }
// console.log(sum(19, 2, 9));

// function raceResult(gold, silver, ...everyoneelse) {
//   console.log(`GOLD MEDAL GOES TO :${gold} `);
//   console.log(`SILVER MEDAL GOES TO :${silver} `);
//   console.log(`EVERYONE ELSE THANKYOU TO :${everyoneelse} `);
// }

// raceResult("tuna", "denki", "ronald", "rocky", "Racer32");

////****************Destructuring Array******************
// const list = [1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000];

// // const first = list[0];
// // const second = list[1];
// // const third = list[3];

// const [first, second, ...everyoneelse] = list;
// console.log(first);
// console.log(second);
// console.log(everyoneelse);

////****************Destructuring Objects******************
// const info = {
//   firstName: "sahil",
//   lastName: "Verma",
//   rollNo: "1633",
//   college: "Amity",
//   city: "Meerut",
//   haki: "conquers",
// };

// // const firstName = info.firstName;
// // const lastName = info.lastName;
// // console.log(firstName, lastName)

// const { firstName, lastName, ...otherInfo } = info;
// console.log(firstName, lastName, otherInfo);

// // const { collegeName } = info;
// const { college: collegeName } = info;
// console.log(collegeName);
// // const { haki, devilFruit } = info;
// const { haki, devilFruit = "none" } = info;
// console.log(haki, devilFruit);

////************Destructuring Parameters*************

const info = {
  firstName: "sahil",
  lastName: "Verma",
  rollNo: "1633",
  college: "Amity",
  city: "Meerut",
  haki: "conquers",
};

// function fullName(info) {
//   return `${info.firstName} ${info.lastName}`;
// }
// console.log(fullName(info));

// function fullName(info) {
//     const {firstName , lastName}= info;
//   return `${firstName} ${lastName}`;
// }
// console.log(fullName(info));

// function fullName({ firstName, lastName = "Ucihiya" }) {
//   return `${firstName} ${lastName}`;
// }
// console.log(fullName(info));

const animes = [
  {
    title: "OnePeice",
    score: "100",
    year: "1998",
  },
  {
    title: "Naruto",
    score: "98",
    year: "2001",
  },
  {
    title: "AttckOnTitans",
    score: "95",
    year: "2007",
  },
  {
    title: "Bleach",
    score: "92",
    year: "2003",
  },
  {
    title: "DemonSlayer",
    score: "89",
    year: "2018",
  },
];

// animes.filter((anime) => anime.score > 90);
// animes.filter(({ score }) => score > 90);

// animes.map((anime) => {
//   return `${anime.title} (${anime.year}) is rated ${anime.score}`;
// });
animes.map(({ title, score, year }) => {
  return `${title} (${year}) is rated ${score}`;
});
