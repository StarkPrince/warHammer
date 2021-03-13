const form = document.querySelector('#searchForm')
form.addEventListener('submit', async function (e) {

    e.preventDefault();
    const searchTerm = form.elements.query.value;
    const res = await axios.get(`http://api.tvmaze.com/search/shows?q=${searchTerm}`);
    // data.forEach(e => console.log(e.show.medium))
    const newImg = document.createElement('img')
    res.data.forEach(e => {
        if (e.show.image) {
            var newImg = document.createElement('img');
            newImg.src = e.show.image.medium;
            document.body.append(newImg);
        }
    })
})
