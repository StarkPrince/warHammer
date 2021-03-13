import React, { Component } from 'react'
import shortid from "shortid"

export class todos extends Component {
    state = {
        text: ""
    }

    handleChange = event => {
        this.setState({
            [event.target.name]: event.target.value
        })
    }
    handleSubmit = event => {
        event.preventDefault()
        this.props.onSubmit({
            id: shortid.generate(),
            text: this.state.text,
            complete: false
        })
        this.setState({
            text: ""
        })
    }
    render() {

        return (
            <div>
                <form onSubmit={this.handleSubmit}>
                    <input
                        type="text"
                        name="text"
                        value={this.state.text}
                        onChange={this.handleChange}
                        placeholder="to do...." />
                    <button onSubmit={this.handleSubmit}>Add</button>
                </form>
            </div>
        )
    }
}

export default todos
