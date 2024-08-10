let pattern = "";
let n = 6;
for (let i = 1; i <= n; i++) {
  for (let j = i; j <= n; j++) {
    pattern += "* ";
  }
  pattern += "\n";
}
console.log(pattern);
