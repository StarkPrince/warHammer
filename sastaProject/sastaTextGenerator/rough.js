var z = document.querySelector('p')
for (var i = 0; i < 26; i++) {
    var butt = document.createElement('button');
    butt.innerText = String.fromCharCode(i + 65);
    butt.classList.add("button")
    butt.classList.add("is-normal")
    butt.classList.add("is-light")
    z.append(butt)
}
var txt = document.querySelector("#text")
for (var i = 0; i < 300; i++) {
    var g = String.fromCharCode(Math.floor(Math.random() * 26 + 97))
    var ids = document.createElement("span")
    if (i % 100 == 99) {
        txt.innerText += "\n";
    }
    else {
        ids.innerText = g;
        ids.setAttribute("id", `#${i}`)
        txt.innerText += ids.innerText
    }
}
// var key = document.addEventListener('keydown', (e) => e.key);
// for (var i = 0; i < 300; i++) {
//     var f = document.querySelector(`#${i}`)
//     console.log(f.innerText)
// }

var f = document.getElementsById('2')
console.log(f)