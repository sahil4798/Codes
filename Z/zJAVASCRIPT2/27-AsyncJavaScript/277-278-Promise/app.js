const fakeRequestPromise = (url) => {
  return new Promise((resolve, reject) => {
    const delay = Math.floor(Math.random() * 4500) + 500;
    setTimeout(() => {
      if (delay > 4000) {
        reject("Conection Timeout :(");
      } else {
        resolve(`Here is your fake request  ${url}`);
      }
    }, delay);
  });
};

// const request = fakeRequestPromise("zoro.to");
// request
//   .then(() => {
//     console.log("Fullfield");
// })
// .catch(() => {
//     console.log("Broke");
// });

// fakeRequestPromise("zoro.to/page1")
//   .then((response) => {
//     console.log("Fullfield - 1", response);
//     fakeRequestPromise("zoro.to/page2")
//       .then((response) => {
//         console.log("Fullfield - 2", response);
//         fakeRequestPromise("zoro.to/page3")
//           .then((response) => {
//             console.log("Fullfield - 3", response);
//           })
//           .catch(() => {
//             console.log("Broke-3", err);
//           });
//       })
//       .catch((err) => {
//         console.log("Broke-2", err);
//       });
//   })
//   .catch((err) => {
//     console.log("Broke-1", err);
//   });

fakeRequestPromise("zoro.to/page1")
  .then((response) => {
    console.log("Fullfield - 1", response);
    return fakeRequestPromise("zoro.to/page2");
  })
  .then((response) => {
    console.log("Fullfield - 2", response);
    return fakeRequestPromise("zoro.to/page3");
  })
  .then((response) => {
    console.log("Fullfield - 3", response);
  })
  .catch((err) => {
    console.log("Broke", err);
  });
