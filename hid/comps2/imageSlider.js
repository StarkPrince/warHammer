import React, { Component } from 'react'

class imageSlider extends Component {
    constructor(props) {
        super(props)
    
        this.state = {
            image: [
                'https://bit.ly/3roniRx',
                'https://bit.ly/30eWaZq',
                'https://bit.ly/2OnQNo6',
                'https://bit.ly/38bzf5C',
                'https://bit.ly/3qhJcEJ',
                'https://bit.ly/30fKWDR'
            ],
            idx: 0
        }
    }
    nextImage = () => {
        this.setState({
            idx : this.state.idx+1
        })
    }
    prevImage = () => {
        this.setState({
            idx : this.state.idx-1
        })
    }
    
    render() {
        return (
            <div>
                <p>Image No : {this.state.idx + 1}</p>
                <img style={{ width: 300, height: 300}} src={this.state.image[this.state.idx]} />
                <div>
                    <button onClick={this.prevImage}>prev</button>
                    <button onClick={this.nextImage}>next</button>
                </div>
            </div>
        )
    }
}

export default imageSlider
