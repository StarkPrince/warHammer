import React, { Component } from 'react'

class counter extends Component {
    constructor(props) {
        super(props)

        this.state = {
            count: 0
        }
    }

    incrementCount = () => {
        this.setState({
            count : this.state.count+1 
        })
    } 
    decrementCount = () => {
        this.setState({
            count : this.state.count-1 
        })
    }
    componentWillUnmount() {
        console.log('unmounted')
    }
    componentDidMount() {
        console.log('mounted')
    }

    render() {
        return (
            <div>
                <h3>Counter : {this.state.count}</h3>
                <button onClick={this.incrementCount}>Increment</button>
                <button onClick={this.decrementCount}>Decrement</button>
            </div>
        )
    }
}

export default counter
