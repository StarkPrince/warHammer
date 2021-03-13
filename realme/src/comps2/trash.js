import React, { Component } from 'react'

const defaultState = {
    name: "",
        email: "",
        password: "",
        nameError: "",
        emailError: "",
        passwordError: "",
}

class trash extends Component {
    state = {
        name: "",
        email: "",
        password: "",
        nameError: "",
        emailError: "",
        passwordError: "",
    }
    changing = (event) => {
        this.setState({
            [event.target.name]: event.target.value
        })
    }
    validate = () => {
        let nameError = ""
        let emailError = ""
        let passwordError = ""
        if (!this.state.name) {
            nameError = "Name shouldn't be blank"
        }
        if (!this.state.email.includes('@')) {
            emailError = "gotcha Email Error"
        }
        if (!this.state.password) {
            passwordError = "Use a valid Password"
        }
        if (nameError || emailError || passwordError) {
            this.setState({ nameError,emailError,passwordError })
            return false
        }
        return true
    }
    submit = (event) => {
        event.preventDefault();
        const isValid = this.validate()
        if (isValid) {
            console.log(this.state)
            this.setState(defaultState)
        }
    }

    render() {
        return (
            <form onSubmit={this.submit}>
                <div>
                    <input type="text" value={this.state.name} name="name" autoComplete="username" onChange={this.changing} placeholder="Name" />
                </div>
                <div style={{ fontSize: "12px", color: "red" }}><b>{this.state.nameError}</b></div>
                <div>
                    <input type="text" value={this.state.email} autoComplete="" name="email" onChange={this.changing} placeholder="Email" />
                </div>
                <div style={{ fontSize: "12px", color: "red" }}><b>{this.state.emailError}</b></div>
                <div>
                    <input type="password" autoComplete="current-password" value={this.state.password} name="password" onChange={this.changing} placeholder="Password" />
                </div>
                <div style={{ fontSize: "12px", color: "red" }}><b>{this.state.passwordError}</b></div>
                <button type="submit">Submit</button>
            </form>
        )
    }
}

export default trash
