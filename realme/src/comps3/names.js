import React from 'react'

function Person({person}) {
    return (
        <div>
            <h4>Hey,prince, I am {person.name}, Landed {person.age} years ago on this sphere and I am expert in {person.skill}.</h4>
        </div>
    )
}

export default Person
