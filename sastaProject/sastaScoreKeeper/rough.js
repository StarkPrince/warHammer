// buttons
const p1b = document.querySelector('#p1b')
const p2b = document.querySelector('#p2b')
const rst = document.querySelector('#reset')
const slct = document.querySelector('#pnt')
const vdct = document.querySelector('#verdict')

// score
const p1s = document.querySelector('#p1s')
const p2s = document.querySelector('#p2s')

var p1sc = parseInt(p1s.innerText)
var p2sc = parseInt(p2s.innerText)

// functions
function reset() {
    p1sc = 0
    p2sc = 0
    p1s.innerText = p1sc
    p2s.innerText = p2sc
    verdict();
}

// adding events
p1b.addEventListener('click', () => {
    if ((p1sc < parseInt(slct.value) && p2sc < parseInt(slct.value))) {
        p1sc += 1
        p1s.innerText = p1sc
        verdict()
    }
})
p2b.addEventListener('click', () => {
    if ((p1sc < parseInt(slct.value) && p2sc < parseInt(slct.value))) {
        p2sc += 1
        p2s.innerText = p2sc
        verdict()
    }
})
rst.addEventListener('click', reset)
slct.addEventListener('change', reset)

function verdict() {
    if (p1sc == parseInt(slct.value)) {
        vdct.innerText = "RW"
        vdct.style.color = 'red';
    }
    else if (p2sc == parseInt(slct.value)) {
        vdct.innerText = "BW"
        vdct.style.color = 'blue';
    }
    else if (p1sc > p2sc) {
        vdct.innerText = "RIL"
        vdct.style.color = 'orange';
    }
    else if (p1sc < p2sc) {
        vdct.innerText = "BIL"
        vdct.style.color = 'aquamarine';
    }
    else {
        vdct.innerText = 'Tied'
        vdct.style.color = 'black';
    }
}