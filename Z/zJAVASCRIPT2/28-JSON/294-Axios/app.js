// axios
//   .get("https://swapi.dev/api/people/1")
//   .then((res) => {
//     console.log("RESPONSE", res);
//   })
//   .catch((e) => {
//     console.log("EROOR!", e);
//   });

const starWarPerson = async (id) => {
  try {
    const req = await axios.get(`https://swapi.dev/api/people/${id}`);
    console.log(req);
    console.log(req.data);
  } catch (e) {
    console.log("ERROR!!!", e);
  }
};

starWarPerson(1);
starWarPerson(2);
