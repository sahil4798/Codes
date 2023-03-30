// const searchTVMaze = async (name) => {
//   try {
//     const req = await axios.get(
//       `https://api.tvmaze.com/search/shows?q=${name}`
//     );
//     console.log(req.data);
// console.log(req.data[0].show.name);
//     return req.data;
//   } catch (e) {
//     return `Error ${e}`;
//   }
// };
// searchTVMaze("naruto");

const searchTVMaze = async (name) => {
  try {
    // const req = await axios.get(
    //   `https://api.tvmaze.com/search/shows?q=${name}`
    // );
    const config = { params: { q: name }, headers: {} };
    const req = await axios.get(`https://api.tvmaze.com/search/shows`, config);
    return req.data;
  } catch (e) {
    return `Error ${e}`;
  }
};

const input = document.querySelector("#input");
const searchform = document.querySelector("#searchform");

searchform.addEventListener("submit", async (e) => {
  e.preventDefault();
  if (!input.value) {
    alert("Enter the input");
  } else {
    const lists = await searchTVMaze(input.value);
    makeImage(lists);
    input.value = "";
  }
});

const makeImage = (lists) => {
  for (l of lists) {
    // const li = document.createElement("li");
    // li.innerText = l.show.name;
    // document.body.appendChild(li);

    if (l.show.image) {
      const img = document.createElement("img");
      img.src = l.show.image.medium;
      document.body.appendChild(img);
    }
  }
};
