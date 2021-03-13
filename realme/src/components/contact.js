import React from 'react'

function contact(props) {
    return (
        <div style={{backgroundColor:"white"}}>
            <div style={{ border: "25px inset #2BAE66FF" }}>
                <h2>Contact Us</h2>
                <p style={{ textDecoration: "" }}>
                    <b>Phone No: </b>{props.phone}
                </p>
                <p>
                    <b>Email: </b>{props.email}
                </p>
                <p>
                    <b>Address: </b>{props.address}
                </p>
                <hr />
            </div>
        </div>
    )
}

export default contact
