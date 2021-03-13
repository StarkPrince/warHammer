import React, { Component } from 'react'
import axios from 'axios'


export class FetchRandomUser extends Component {
    state = {
        loading: true,
        people: []
    }

    async componentDidMount() {
        let res = await axios.get("http://api.randomuser.me/?results=8")
        this.setState({ people: res.data.results })
    }

    render() {
        return (
            <div>
                {this.state.people ?
                    this.state.people.map(person => (
                        <div key={person.login.uuid}>
                            <h3 style={{ color: "purple" }}><b>{person.name.title} {person.name.first} {person.name.last}</b></h3>
                            <img src={person.picture.large}></img>
                            <div>From: <span style={{ color: "blue" }}>{person.location.city},{person.location.state}</span> in <span style={{ color: "red" }}>{person.location.country}</span></div>
                            <div>Contact: {person.email}</div>
                            {/* <hr /> */}
                        </div>
                    ))
                    : <div>hello</div>}
            </div>
        )
    }
}

export default FetchRandomUser
