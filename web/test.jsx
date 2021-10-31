import React from 'react'
import { useState,useEffect } from 'react';

export default function App() {
    // Write a React component that will display a random integer between 1 and 256 whenever the component is loaded. Whenever this component is clicked, add 4 to its current value.
    const [number, setNumber] = useState(Math.floor(Math.random() * 2);          
    
    return (
        <div>
            <p onClick={()=>setNumber(number+4)}>{number}</p>
        </div>
    );
}
