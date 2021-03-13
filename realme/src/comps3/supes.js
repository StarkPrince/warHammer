import React from 'react'
import Name from './names'

function supes() {
    const superheros = [
        { name: 'Bruce', id: 1, skill: 'martial art', age:40 },
        { name: 'Clark', id: 2, skill: 'lazervision', age:35 },
        { name: 'Diana', id: 3, skill: 'not showing', age:115 },
        { name: 'Tony', id: 4, skill: 'flirting', age:45 }
    ]
    const Personlist = superheros.map(sup => <Name key={sup.id} person={sup}/>)
    return <div>{Personlist}</div>
}

export default supes
