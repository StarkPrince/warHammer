import React, { Component } from 'react'
class form extends Component {
    constructor(props) {
        super(props)
    
        this.state = {
            username: '',
            comment: '',
            topic:'react'
        }
    }
    handleUsernameChange = (event) => {
        this.setState({
            username:event.target.value
        })
    }
    handleCommentChange = (event) => {
        this.setState({
            comment:event.target.value
        })
    }
    handleTopicChange = (event) => {
        this.setState({
            topic:event.target.value
        })
    }
    handleSubmit = (event) => {
        alert(`${this.state.username} ${this.state.topic}  ${this.state.comment}`)
        event.preventDefault();
    }
    render() {
        return (
            <div>
                <form onSubmit={this.handleSubmit}>
                    <div>
                        <label>Username</label>
                        <input type='text' onChange={this.handleUsernameChange} value={this.state.username}/>
                    </div>
                    <div>
                        <label>Comments</label>
                        <textarea value={this.state.comment} onChange={this.handleCommentChange}></textarea>
                    </div>
                    <div>
                        <label>Topic</label>
                        <select value={this.state.topic} onChange={this.handleTopicChange}>
                            <option value='react'>React</option>
                            <option value='angular'>Angular</option>
                            <option value='vue'>Vue</option>
                        </select>
                    </div>
                    <div>
                        <button type='submit'>Submit</button>
                    </div>
                </form>
            </div>
        )
    }
}

export default form
