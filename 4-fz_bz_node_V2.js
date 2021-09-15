#!/usr/bin/node

/**
 * script fizzbuzz in node, js language
 */

for (let i = 1; i <= 100; i++) {
  const f = i % 3 === 0; const b = i % 5 === 0;
  console.log(f ? b ? 'FizzBuzz' : 'Fizz' : b ? 'Buzz' : i);
}
