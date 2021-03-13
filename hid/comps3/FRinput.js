import React from 'react'

const FRinput = React.forwardRef((props,ref) => {
    return (
        <div><input type='text' ref={ref}/></div>
    )
})

export default FRinput
