const heading = document.querySelector("h1");

const username = document.querySelector("#username");

username.addEventListener("input", function () {
  heading.innerText = "Welcome, " + username.value;

  if (username.value === "") {
    heading.innerText = "Enter Your Username";
  }
});

// input.addEventListener("input", function (e) {
//   if (!this.value) {
//     heading.innerText = `Enter Your Username`;
//   } else {
//     heading.innerText = `Welcome, ${this.value}`;
//   }
// });
