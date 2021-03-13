import React, { Component, PureComponent } from 'react'
import RegComp from './RegComp'
import PureComp from './pureComp'

class ParentComp extends PureComponent {
    constructor(props) {
        super(props)
    
        this.state = {
            name: 'Prince'
            
        }
    }
    componentDidMount() {
        setInterval(() => {
            this.setState({
                name:'Prince'
            })
        },2000)
    }
    
    render() {
        console.log('**********Parent Component Rendered********')
        return (
            <div>
                Parent Component
                <RegComp name={this.state.name}></RegComp>
                <PureComp name={this.state.name}></PureComp>
            </div>
        )
    }
}

export default ParentComp
