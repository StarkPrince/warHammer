import React, { Component } from 'react'
import LifeCycleB from './LifecycleB'

class LifecycleA extends Component {
    constructor(props) {
        super(props)
    
        this.state = {
             name:'Prince'
        }
        console.log('LifecycleA constructor')
    }
    
    static getDerivedStateFromProps(props, state) {
        console.log('LifeCycleA getderivedstateFromProps')
        return null
    }

    componentDidMount() {
        console.log('LifecycleA Didmount')
    }

    shouldComponentUpdate() {
        console.log('LifecycleA shouldComponentUpdate')
        return true
    }

    getSnapshotBeforeUpdate() {
        console.log('LifecycleA getSnapShotBeforeUpdate')
        return null
    }

    componentDidUpdate() {
        console.log('LifecycleA componentDidUpdate')
    }
    
    changeState = () => {
        this.setState({
            name: 'prince raj'
        })
    }

    render() {
        console.log('LifecycleA render')
        return (
            <div>
                <button onClick={this.changeState}>Change the state</button>
                LifeCycleA
                <LifeCycleB/>
            </div>
        )
    }
}

export default LifecycleA
