#!/usr/bin/env ruby
# types...whatever

for i in 1..100
    if (i % 15) == 0
        print 'FizzBuzz'
    elsif (i % 5) == 0
        print 'Buzz'
    elsif (i % 3) == 0
        print 'Fizz'
    else
        print i
    end
	if (i < 100)
		print ", "
	end
end
puts ''
