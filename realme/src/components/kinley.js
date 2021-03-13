import React, { Component } from 'react'
import Contact from './contact'
import Navbar from './navbar'
import Comps from './comps'

export class kinley extends Component {
    constructor(props) {
        super(props)

        this.state = {
            phoneNo: 7004100975,
            email: "brijmohansah1978@gmail.com",
            address: "Mahila College Road, Madhubani.",
            companies: [{
                name: "Phillips",
                products: {
                    item: ["Switches", "Ceiling Fans", "MCB", "Metal Box", "Grid & Cover", "Indicator", "Trip Starter"],
                    img: ["https://bit.ly/3eDN2G6", "https://bit.ly/3rLSfzl", "mcbpcs", "metalboxpcs", "gcpics", "idpics", "tspics"],
                    idx: 0
                },
                start: "12th Sept 2020",
                image: "https://i1.wp.com/vashielectricals.com/wp-content/uploads/2020/05/Philips.png?fit=1000%2C1000&ssl=1",
                site: "https://www.philips.co.in/",
                show: false
            }, {
                name: "Cema",
                products: {
                    item: ["LED Bulbs"],
                    img: ["https://bit.ly/3rKOTg9"],
                    idx: 0
                },
                start: "12th May 2020",
                image: "https://bit.ly/2ORn4ny",
                site: "https://www.cemalighting.com/",
                show: false
            }, {
                name: "Finolex",
                products: {
                    item: ["Table Fans", "Ceiling Fans"],
                    img: ["https://bit.ly/3bGk7zs", "https://bit.ly/3rKuAPW"],
                    idx: 0
                },
                start: "12th Dec 2019",
                image: "https://bit.ly/3ewZKq2",
                site: "https://finolex.com/led-lightings/",
                show: false
            }, {
                name: "Lazer",
                products: {
                    item: ["Heater", "Blower"],
                    img: ["https://bit.ly/3vjADNB", "https://bit.ly/3cwgKdk"],
                    idx: 0
                },
                start: "17th Nov 2019",
                image: "https://bit.ly/3tdmSy4",
                site: "https://www.lazerindia.com/",
                show: false
            }, {
                name: "Pigeon",
                products: {
                    item: ["Utensils", "Home-Appliances", "Induction"],
                    img: ["https://bit.ly/2OkGemh", "https://bit.ly/3crDkUG", "https://bit.ly/3tixBYe"],
                    idx: 0
                },
                start: "23rd Jun 2018",
                image: "https://bit.ly/2OwvW2d",
                site: "https://www.stovekraft.com/pigeon/",
                show: false
            }, {
                name: "Sunflame",
                products: {
                    item: ["Gas Burner", "Geyser", "Mixer"],
                    img: ["https://bit.ly/3lcjzEx", "https://bit.ly/3vjFcY8", "https://bit.ly/3qMsNsa"],
                    idx: 0
                },
                start: "17th May 2018",
                image: "https://bit.ly/2OOqKGG",
                site: "https://www.sunflame.com/",
                show: false
            }
            ]
        }
    }
    producttoggler = name => {
        this.setState({
            companies: this.state.companies.map(comp => {
                if (comp.name === name) {
                    return {
                        ...comp,
                        show: !comp.show
                    }
                }
                else {
                    return comp;
                }
            })
        })
    }

    render() {
        return (
            <div style={{ backgroundColor: "antiquewhite" }}>
                <Navbar />
                <h2 style={{ backgroundColor: "aquamarine" }}>Our Products</h2>
                <Comps companies={this.state.companies} giggle={this.producttoggler} />
                <Contact phone={this.state.phoneNo} email={this.state.email} address={this.state.address} />
            </div>
        )
    }
}

export default kinley
