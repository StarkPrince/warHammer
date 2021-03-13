import React from 'react'

function column() {
    const items = [{
        name: 'Rajesh',
        age: 14,
        score: 'A'
    },
    {
        name: 'Rakesh',
        age: 15,
        score: 'B'
    },
    {
        name: 'Ramesh',
        age: 16,
        score: 'C'
    }]
    return (
        <>
            {items.map(item => (
                <div key={item.id}>
                    <b>{item.name}</b>
                    <span>{item.age}</span>
                    <span>{item.score}</span>
                </div>
            ))}
        </>
    )
}

export default column
