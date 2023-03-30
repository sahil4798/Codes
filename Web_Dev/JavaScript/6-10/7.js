let a = prompt("Hey whats you age?");
console.log(typeof a );
a =Number.parseInt(a);
console.log(typeof a );

if(a<0){
    alert("Entered age is not a valid age");
}
else if(a>0 && a<18){
    alert("you are just akid you can't drive a car ")

}
else{
    alert("thats perfect you can drive car")
}

//ternaryOperator
console.log("You cam" , age<18? "not derive." : "derive.")

