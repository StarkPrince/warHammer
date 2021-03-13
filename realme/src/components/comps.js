import React, { Component } from 'react'
import { Card, ListGroupItem, ListGroup, Button } from 'react-bootstrap'


class comps extends Component {
    constructor(props) {
        super(props)

        this.state = {
            idx: 0
        }
    }

    render() {
        return (
            <div style={{ alignItems: "center", justifyContent: "center", display: "flex", flexWrap: "wrap", backgroundColor: "#c8c8ff", borderRadius: "50% 20% / 10% 40%" }}>
                {this.props.companies.map(comp =>
                (<Card style={{ width: '26rem', borderColor: "red cyan black gold", marginBottom: "16px", borderWidth: "20px", borderRadius: "5%" }} key={comp.name}>
                    <Card.Img variant="top" src={comp.image} height="180px" alt={comp.name} />
                    <Card.Body >
                        <div style={{ fontSize: "24px" }}><a href={comp.site}>{comp.name} </a></div>
                        <div style={{ paddingTop: "10px" }}><Button variant={comp.show ? "secondary" : "success"} size="sm" active onClick={() => this.props.giggle(comp.name)}> {comp.show ? "Hide Product" : "Show Products"}</Button></div>
                    </Card.Body>
                    {comp.show ? <ListGroup className="list-group-flush">
                        <div>
                            <ListGroupItem><b>{comp.products.item[this.state.idx]}</b></ListGroupItem>
                            <ListGroupItem><img src={comp.products.img[this.state.idx]} alt={"image not found"} height="170px" /></ListGroupItem>
                            <section style={{ display: "flex", justifyContent: "space-around" }}>
                                <Button onClick={() => (
                                    this.setState({
                                        idx: this.state.idx - 1
                                    }))}>Prev</Button>
                                <Button onClick={() => (
                                    this.setState({
                                        idx: this.state.idx + 1
                                    }))}>Next</Button>
                            </section>
                        </div>
                    </ListGroup> : null}
                    <Card.Footer className="text-muted">Since: {comp.start}</Card.Footer>
                </Card>
                ))}
            </div>
        )
    }
}

export default comps


