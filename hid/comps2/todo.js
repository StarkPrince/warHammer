import React from 'react'

export default props =>{
    return (
        <div style={{display:"flex", justifyContent:"center",padding:"12px"}}>
            <b style={{ textDecoration: props.todo.complete ? "line-through" : "" ,color:props.todo.complete ? "green":"red"}}
                onClick={props.toggleComplete}>
                {props.counter+1} {props.todo.text}
            </b>
            <button onClick={props.deleteTodo}>X</button>
        </div>
    )
}






















// http://www.tube2017.com/en/movies/cute/