import React, { PureComponent } from 'react'

class pureComp extends PureComponent {
    render() {
        console.log('**********Pure Component Rendered********')
        return (
            <div>
                PureComponent {this.props.name}
            </div>
        )
    }
}

export default pureComp
