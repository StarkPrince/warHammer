var tform = document.querySelector('#tform');

function addToBody(e) {
    const lis = document.createElement('li')
    const bld = document.createElement('b')
    const spn = document.createElement('span')

    bld.append(tform.elements.username.value)
    spn.append(tform.elements.tweet.value)
    lis.append(bld, "\t", spn)

    tform.elements.username.value = ""
    tform.elements.tweet.value = ""
    return lis
}

function addtweet(e) {
    e.preventDefault()
    var s = addToBody(e);
    document.body.append(s);
}

tform.addEventListener('submit', addtweet)