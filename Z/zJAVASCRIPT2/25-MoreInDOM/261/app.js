////********************Event Objects*************************
const btn = document.querySelector("#button1");

btn.addEventListener("click", function (evt) {
  console.log(evt);
});

////********************Keyboard-Event*************************
const inp = document.querySelector("#input1");
// inp.addEventListener("keyup", function () {
//   console.log("KEYUP");
// });

inp.addEventListener("keydown", function (e) {
  //   console.log(e);
  console.log(e.key);
  console.log(e.code);
});

window.addEventListener("keydown", function (e) {
  switch (e.code) {
    case "ArrowUp":
      console.log("UP!");
      break;
    case "ArrowDown":
      console.log("Down!");
      break;
    case "ArrowLeft":
      console.log("Left!");
      break;
    case "ArrowRight":
      console.log("Right!");
      break;
    default:
      console.log("ignored");
  }
});
