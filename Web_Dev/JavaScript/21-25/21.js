// CHAPTER-5 practise set

// ques.1
let arr = [] ;
// by push
// arr.push(1);
// arr.push(2);
// arr.push(3);
// arr.push(4);
// arr.push(5);
// console.log(arr);

// // by loop
// for(let i= 0 ; i<6 ; i++){
//     arr[i] = prompt("Enter " +(i+1)+ " element of array");
// }


// // ques.2
// let  arr2 = [1, 2, 3, 4, 5, 6];

// let a;
// do{
//      a = prompt("Enter a number")
//     a = Number.parseInt(a);
//     arr2.push(a);
//     console.log(arr2);
// }while(a!=0);



// // ques.3
// let arr3 = [20, 2, 40, 30, 4, 5, 60, 90, 79, 56, 80];

// let a3 = arr3.filter((n) => {
//     return n%10==0
// })

// console.log(a3);

// // ques.4
// let arr4 = [ 2, 3, 5 ,7 ,8 ,9];

// let a4 = arr4.map((n)=>{
//     return n*n;
// })
// console.log(a4);

// ques.5
let arr5 = [ 1, 2, 3,4, 5 ,6,7 ,8 ,9];

let a5 = arr5.reduce(( x, y)=>{
    return x+y;
})
console.log(a5);