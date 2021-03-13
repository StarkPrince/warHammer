const jokes = document.querySelector('#jokes')
const button = document.querySelector('button')

const fetchJoke = async () => {
    const config = { headers: { Accept: 'application/json' } }
    const res = await axios.get('https://icanhazdadjoke.com/', config)
    return res.data.joke;
}

const addJoke = async () => {
    const joke = await fetchJoke();
    const newLi = document.createElement('li')
    newLi.append(joke)
    jokes.append(newLi)
}

button.addEventListener('click', addJoke)