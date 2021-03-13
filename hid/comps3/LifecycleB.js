import React, { Component } from 'react'

class LifecycleB extends Component {
    constructor(props) {
        super(props)

        this.state = {
            name: 'Prince'
        }
        console.log('LifecycleB constructor')
    }

    static getDerivedStateFromProps(props, state) {
        console.log('LifeCycleB getderivedstateFromProps')
        return null
    }

    componentDidMount() {
        console.log('LifecycleB Didmount')
    }

    shouldComponentUpdate() {
        console.log('LifecycleB shouldComponentUpdate')
        return true
    }

    getSnapshotBeforeUpdate() {
        console.log('LifecycleB getSnapShotBeforeUpdate')
        return null
    }

    componentDidUpdate() {
        console.log('LifecycleB componentDidUpdate')
    }



    render() {
        console.log('LifecycleB render')
        return (
            <div>
                LifeCycleB
            </div>
        )
    }
}

export default LifecycleB
