import TodoForm from './todoForm'
import Todo from './todo'
import React, { Component } from 'react'

export default class todoList extends Component {
    constructor(props) {
        super(props)
    
        this.state = {
            todos: [],
            todoToShow: "all",
            toggleAllComplete: true
        }
    }
    
    addTodo = todo => {
        this.setState({
            todos: [todo, ...this.state.todos]
        })
    }
    toggleComplete = id => {
        this.setState({
            todos: this.state.todos.map(todo => {
                if (todo.id === id) {
                    return {
                        ...todo,
                        complete: !todo.complete
                    }
                }
                else {
                    return todo;
                }
            })
        })
    }
    showoff(s) {
        this.setState({
            todoToShow: s
        })
    }
    deleteTodo = (id) => {
        this.setState({
            todos: this.state.todos.filter(todo => todo.id !== id)
        })
    }
    removeCompleted = () => {
        this.setState({
            todos: this.state.todos.filter(todo => !todo.complete)
        })
    }
    render() {
        let todos = [];
        if (this.state.todoToShow === "all") {
            todos = this.state.todos;
        }
        else if (this.state.todoToShow === "active") {
            todos = this.state.todos.filter(todo => !todo.complete);
        }
        else if (this.state.todoToShow === "completed") {
            todos = this.state.todos.filter(todo => todo.complete);
        }
        return (
            <div>
                <div><TodoForm onSubmit={this.addTodo} /></div>
                <div>
                    Items left: {this.state.todos.filter(todo => !todo.complete).length}
                </div>
                <div>{todos.map((todo, i) => (<Todo
                    key={todo.id}
                    deleteTodo={() => this.deleteTodo(todo.id)}
                    toggleComplete={() => this.toggleComplete(todo.id)}
                    todo={todo}
                    counter={i}
                />))}</div>
                <div>
                    <button onClick={() => this.showoff("all")}>Show All</button>
                </div>
                <div>
                    <button onClick={() => this.showoff("active")}>Remaining</button>
                </div>
                <div>
                    <button onClick={() => this.showoff("completed")}>Done</button>
                </div>
                <div>
                    <button onClick={this.removeCompleted}>Remove done</button>
                </div>
                <div>
                    <button onClick={() => {
                        this.setState({
                            todos: this.state.todos.map(todo => ({
                                ...todo,
                                complete: this.state.toggleAllComplete
                            })),
                            toggleAllComplete: !this.state.toggleAllComplete
                        })
                    }}>Set all to done {this.state.toggleAllComplete}</button>
                </div>
            </div>)
    }
}