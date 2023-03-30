let arr = [ 1, 2, 3, 4 ,5] ;

// //array map methord
// let a = arr.map((value , index , arr)=>{
//     console.log(value , index , arr);
//     return value*value;
// })
// console.log(a);
// console.log(typeof a );


// //array filter methord
// let arr2 = [10 , 2, 4, 78, 94, 50 , 100];

// let a2 = arr2.filter((a) => {
//     return a>10;
// })
// console.log(a2 );

//array Reduce methord
let arr3 = [1 ,2 , 3 , 4 , 5 , 6, 7, 8];
let a3 = arr3.reduce((h1, h2) => {
    return h1+ h2 ;
}) 
console.log(a3);