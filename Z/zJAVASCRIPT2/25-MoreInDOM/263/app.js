const form = document.querySelector("form");
const input = document.querySelector("#catName");
const ul = document.querySelector("#ulist");

form.addEventListener("submit", function (e) {
  e.preventDefault();
  const list = document.createElement("li");
  //   console.log(input.value);
  list.innerText = input.value;
  //   console.log(list);
  input.value = "";
  ul.appendChild(list);
  console.log("Submitted");
});
