const multiply = (x, y) => {
  return x * y;
};

const square = (x) => multiply(x, x);

const isRightTriangle = function (a, b, c) {
  return square(a) + square(b) === square(c);
};

console.log(isRightTriangle(3, 4, 5));
