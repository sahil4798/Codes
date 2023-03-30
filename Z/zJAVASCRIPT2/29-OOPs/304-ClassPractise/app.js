class Color {
  constructor(r, g, b, name) {
    this.r = r;
    this.g = g;
    this.b = b;
    this.name = name;
    this.calcHSL();
  }
  innerRGb() {
    const { r, g, b } = this;
    return `${r} , ${g} , ${b}`;
  }
  rgb() {
    const { r, g, b } = this;
    return ` rgb(${r}, ${g}, ${this.b} )`;
  }

  rgba(a = 0.3) {
    return `rgba(${this.innerRGb()} , ${a})`;
  }
  hex() {
    const { r, g, b } = this;
    return "#" + ((1 << 24) | (r << 16) | (g << 8) | b).toString(16).slice(1);
  }

  calcHSL() {
    let { r, g, b } = this;
    r /= 255;
    g /= 255;
    b /= 255;
    const l = Math.max(r, g, b);
    const s = l - Math.min(r, g, b);
    const h = s
      ? l === r
        ? (g - b) / s
        : l === g
        ? 2 + (b - r) / s
        : 4 + (r - g) / s
      : 0;

    this.h = 60 * h < 0 ? 60 * h + 360 : 60 * h;
    this.s =
      100 * (s ? (l <= 0.5 ? s / (2 * l - s) : s / (2 - (2 * l - s))) : 0);
    this.l = (100 * (2 * l - s)) / 2;

    // return [h, s, l];
  }

  hsl() {
    const { h, s, l } = this;
    return `hsl(${h} , ${s}% , ${l}% )`;
  }
  opposite() {
    const { h, s, l } = this;
    const newh = (h + 180) % 360;
    return `hsl(${newh} , ${s}% , ${l}% )`;
  }
  fullySaturated() {
    const { h, s, l } = this;
    return `hsl(${h} , ${100}% , ${l}% )`;
  }
}

const red = new Color(255, 69, 89, "tomto");
// console.log(red);
console.log("red.hsl() : ", red.hsl());

const white = new Color(255, 255, 255, "white");
console.log("white.hsl() : ", white.hsl());

document.body.style.backgroundColor = red.hsl();
console.log("red.oppsite() : ", red.opposite());
document.body.style.backgroundColor = red.opposite();

console.log("white.fullySaturated() : ", white.fullySaturated());

const orange = new Color(230, 126, 34, "carrot");
console.log(orange.rgb());
console.log(orange.hsl());
document.body.style.backgroundColor = orange.hsl();
document.body.style.backgroundColor = orange.fullySaturated();
document.body.style.backgroundColor = orange.opposite();
