class Pet {
  constructor(name, age) {
    this.name = name;
    this.age = age;
  }
  eat() {
    return `${this.name} is eating`;
  }
}

class Cat extends Pet {
  constructor(name, age, livesLeft) {
    super(name, age);
    this.livesLeft = livesLeft;
  }
  meow() {
    return `${this.name} is Meooooou`;
  }
}
class Dog extends Pet {
  eat() {
    return `${this.name} is Crunching `;
  }
  bark() {
    return `${this.name} is Whooof`;
  }
}

const loacy = new Cat("loacy", 4, 9);
console.log(loacy);
console.log(loacy.eat());

const Brownn = new Dog("Bwownn", 6);
console.log(Brownn);
console.log(Brownn.eat());
