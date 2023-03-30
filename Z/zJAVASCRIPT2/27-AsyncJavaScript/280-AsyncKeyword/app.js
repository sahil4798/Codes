// function Hello() {}
// console.log(Hello());

// async function Greet() {}
// console.log(Greet());

// async function Sing() {
//   return "La LA LA LA ALA";
// }
// Sing().then((data) => {
//   console.log("Oh my my Promise Fuilfield", data);
// });

// async function Sing2() {
//   throw new Error("Geezs Error here");
//   //   throw "Geezs Error here";
//   return "This is me sucessfully here";
// }

// Sing2()
//   .then((data) => {
//     console.log("Sucessfully", data);
//   })
//   .catch((err) => {
//     console.log("OH NO , Promise Rejected ");
//     console.log(err);
//   });

const login = async function (username, password) {
  if (!username || !password) throw "Incomplete Cretidentials";
  else if (password == "luckypasswordtohack") {
    return "Welcome";
  } else {
    throw "Invalid password";
  }
};

login("kijaru", "luckypasswordtohack")
  .then((data) => {
    console.log(" you logged in");
    console.log(data);
  })
  .catch((message) => {
    console.log("Error");
    console.log(message);
  });
