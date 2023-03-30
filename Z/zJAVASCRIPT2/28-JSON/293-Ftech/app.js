// fetch("https://swapi.dev/api/people/1")
//   .then((res) => {
//     console.log(" Response Resolved", res);
//     return res.json();
//   })
//   .then((data) => {
//     console.log("JSON Done", data);
//     return fetch("https://swapi.dev/api/people/3");
//   })
//   .catch((err) => {
//     console.log("Error!!" + err);
//   });

// fetch("https://swapi.dev/api/people/1")
//   .then((res) => {
//     console.log(" Response Resolved", res);
//     return res.json();
//   })
//   .then((data) => {
//     console.log("JSON Done", data);
//     return fetch("https://swapi.dev/api/people/3");
//   })
//   .then((res) => {
//     console.log("Response Ressolved -2", res);
//     return res.json();
//   })
//   .then((data) => {
//     console.log("JSON Data ", data);
//   })
//   .catch((err) => {
//     console.log("Error!!" + err);
//   });

const starwarsperson = async () => {
  try {
    const req = await fetch("https://swapi.dev/api/people/1");
    const data = await req.json();
    console.log(data);

    const req2 = await fetch("https://swapi.dev/api/people/1");
    const data2 = await req2.json();
    console.log(data2);
  } catch (e) {
    console.log("Error :", e);
  }
};

starwarsperson();
