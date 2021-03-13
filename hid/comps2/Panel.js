import React, { Component } from 'react'
import Counter from './counter'
import ImageSlider from './imageSlider'

class Panel extends Component {
    constructor(props) {
        super(props)

        this.state = {
            visible: false
        }
    }
    toggler = () => {
        this.setState({
            visible: !this.state.visible
        })
    }

    render() {
        const butt = this.state.visible ? <b>hide</b> : <b>show</b>;
        return (
            <div>
                <div style={this.state.visible ? {} : { display: 'none' }} >
                    <Counter />
                </div>

                <button onClick={this.toggler}>{butt}</button>
            </div>
        )
    }
}

export default Panel
