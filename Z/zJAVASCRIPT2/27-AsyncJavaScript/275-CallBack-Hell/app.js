// setTimeout(() => (document.body.style.backgroundColor = "red"), 2000);
// setTimeout(() => (document.body.style.backgroundColor = "orange"), 4000);
// setTimeout(() => (document.body.style.backgroundColor = "yellow"), 6000);
// setTimeout(() => (document.body.style.backgroundColor = "green"), 8000);
// setTimeout(() => (document.body.style.backgroundColor = "blue"), 10000);

// setTimeout(() => {
//   document.body.style.backgroundColor = "red";
//   setTimeout(() => {
//     document.body.style.backgroundColor = "orange";
//     setTimeout(() => {
//       document.body.style.backgroundColor = "yellow";
//       setTimeout(() => {
//         document.body.style.backgroundColor = "green";
//         setTimeout(() => {
//           document.body.style.backgroundColor = "blue";
//         }, 2000);
//       }, 2000);
//     }, 2000);
//   }, 2000);
// }, 2000);

// const delayedColorChange = (newcolor, delay) => {
//   setTimeout(() => {
//     document.body.style.backgroundColor = newcolor;
//   }, delay);
// };

// delayedColorChange("red", 1000);
// delayedColorChange("orange", 2000);
// delayedColorChange("yellow", 3000);
// delayedColorChange("green", 4000);
// delayedColorChange("blue", 5000);

const delayedColorChange = (newcolor, delay, doNext) => {
  setTimeout(() => {
    document.body.style.backgroundColor = newcolor;
    doNext && doNext();
  }, delay);
};

delayedColorChange("red", 1000, () => {
  delayedColorChange("orange", 1000, () => {
    delayedColorChange("yellow", 1000, () => {
      delayedColorChange("green", 1000, () => {
        //   delayedColorChange("blue", 1000, () => {});
        delayedColorChange("blue", 1000);
      });
    });
  });
});

searchMoiveAPI(
  "3Idiots",
  () => {
    saveToMyDB(
      moives,
      () => {
        //if it work run this
      },
      () => {
        //if it does't work run this
      }
    );
  },
  () => {
    //if API down or request fail
  }
);
