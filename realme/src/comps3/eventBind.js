import React, { Component } from 'react'

export class eventBind extends Component {

    constructor(props) {
        super(props)

        this.state = {
            message: 'hello'
        }

        this.clickHandler = this.clickHandler.bind(this)
    }

    clickHandler() {
        this.setState({
            message: 'nice butt'
        })
        // console.log(this)
    }

    render() {
        return (
            <div>
                <div>{this.state.message}</div>
                <button onClick={this.clickHandler}>clicked in event binder</button>
            </div>
        )
    }
}

export default eventBind
