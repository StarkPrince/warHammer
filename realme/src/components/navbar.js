import React, { Component } from 'react'
import { Navbar, Form, Nav, FormControl, Button } from 'react-bootstrap'

export class navbar extends Component {
    render() {
        return (
            <div>
                <Navbar bg="primary" variant="dark">
                    <Navbar.Brand href="#home">Usha Galaxy</Navbar.Brand>
                    <Nav className="mr-auto">
                        <Nav.Link href="#home">Home</Nav.Link>
                        <Nav.Link href="#features">Features</Nav.Link>
                        <Nav.Link href="#pricing">Pricing</Nav.Link>
                        <Nav.Link href="#contact">Reach Us</Nav.Link>
                    </Nav>
                </Navbar>
                <br />
            </div>
        )
    }
}

export default navbar
