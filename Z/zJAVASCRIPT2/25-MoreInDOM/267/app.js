const form = document.querySelector("form");
const username = document.querySelector("#username");
const tweet = document.querySelector("#tweet");
const btn = document.querySelector("#btn");
const ul = document.querySelector("#tweetlist");

form.addEventListener("submit", function (e) {
  e.preventDefault();
  const li = document.createElement("li");
  li.innerHTML = `<b>${username.value}</b> - ${tweet.value}`;
  console.log(li.innerText);
  ul.appendChild(li);
  username.value = "";
  tweet.value = "";
});

// const lis = document.querySelectorAll("li");
// for (let li of lis) {
//   li.addEventListener("click", function () {
//     li.remove();
//   });
// }

ul.addEventListener("click", function (e) {
  // console.log(e);//for target property
  // console.dir(e.target);
  // e.target.remove();
  e.target.nodeName === "LI" && e.target.remove();
});
