package grains

import "fmt"

func Square(number int) (uint64, error) {
    if number <= 0 || number > 64 {
        return 0, fmt.Errorf("error")
    }
	return uint64(1) << (number - 1), nil
}

func Total() uint64 {
	var sum uint64

    for i := range 64 + 1 {
        tmp, _ := Square(i)
        sum += tmp
    }

    return sum
}
