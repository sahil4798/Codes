class Color {
  constructor(r, g, b, name) {
    this.r = r;
    this.g = g;
    this.b = b;
    this.name = name;
  }
  innerRGb() {
    const { r, g, b } = this;
    return `${r} , ${g} , ${b}`;
  }
  rgb() {
    const { r, g, b } = this;
    return ` rgb(${r}, ${g}, ${this.b} )`;
  }

  hex() {
    const { r, g, b } = this;
    return "#" + ((1 << 24) | (r << 16) | (g << 8) | b).toString(16).slice(1);
  }

  rgba(a = 0.3) {
    return `rgba(${this.innerRGb()} , ${a})`;
  }
}

const c1 = new Color(10, 20, 30, "skyblue");
console.log(c1);
console.log(c1.rgb());
console.log(c1.hex());
console.log(c1.innerRGb());
console.log(c1.rgba(0.4));

const whitecolor = new Color(253, 253, 253, "white");
console.log(c1.hex === whitecolor.hex);
