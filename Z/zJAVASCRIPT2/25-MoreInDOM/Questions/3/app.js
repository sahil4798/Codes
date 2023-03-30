const form = document.querySelector("form");
const item = document.querySelector("#product");
const qty = document.querySelector("#qty");
const ul = document.querySelector("#list");

form.addEventListener("submit", function (e) {
  e.preventDefault();
  const li = document.createElement("li");
  li.innerText = qty.value + " " + item.value;
  ul.appendChild(li);
  qty.value = "";
  item.value = "";
});
