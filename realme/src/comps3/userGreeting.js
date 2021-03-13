import React, { Component } from 'react'

class userGreeting extends Component {
    constructor(props) {
        super(props)
    
        this.state = {
            isLoggedIn: true
        }
    }
    render() {
        return this.state.isLoggedIn ? <h1>Hello Prince <hr/></h1> : <h1>Welcome Guest <hr /> </h1>
    }
}
    
export default userGreeting