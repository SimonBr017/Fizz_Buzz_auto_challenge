#!/usr/bin/node

/**
 * script fizzbuzz in node, js language
 */
const fs = require('fs');
const array = [];

for (let i = 1; i <= 100; i++) {
  if (i % 15 === 0) {
    array.push('FizzBuzz');
  } else if (i % 3 === 0) {
    array.push('Fizz');
  } else if (i % 5 === 0) {
    array.push('Buzz');
  } else {
    array.push(i);
  }
} fs.appendFileSync('3.txt', array, function (err) {
  if (err) {
    console.error(err);
  }
}); const data = fs.readFileSync('3.txt', 'utf-8', function (err) {
  if (err) {
    console.error(err);
  }
});	console.log(data);
fs.unlinkSync('3.txt', function (err) {
  if (err) {
    console.error(err);
  }
});
