// const getDadJoke = async () => {
//   try {
//     const config = { headers: { Accept: "application/json" } };
//     const req = await axios.get("https://icanhazdadjoke.com", config);
//     console.log(req);
//     console.log(req.data);
//     console.log(req.data.joke);
//   } catch (e) {
//     crossOriginIsolated.log("ERROR", e);
//   }
// };
// getDadJoke();

const getDadJoke = async () => {
  try {
    const config = { headers: { Accept: "application/json" } };
    const req = await axios.get("https://icnhazdadjoke.com", config);
  } catch (e) {
    return "SORRY NO JOKES AVAILABLE RIGHT NOW :)";
  }
  return req.data.joke;
};

const list = document.querySelector("#jokes");
const btn = document.querySelector("button");

const addNewJoke = async () => {
  const li = document.createElement("li");
  li.innerText = await getDadJoke();
  list.appendChild(li);
};

btn.addEventListener("click", addNewJoke);
