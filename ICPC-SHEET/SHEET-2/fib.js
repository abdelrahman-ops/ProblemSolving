let n = prompt("Number")

function fib() {
    if (n === 0) {
        console.log(0)
    } else if (n === 1) {
        console.log(1);
    } else if (n === 2) {
        console.log(1)
    } else if (n > 2) {
        console.log(((n - 2) - 1) + ((n - 2) - 2))
    }
}

fib()