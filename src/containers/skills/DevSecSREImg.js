import React, { Component } from "react";

export default class DevSecSREImg extends Component {
  render() {
    const theme = this.props.theme;
    return (
      <img
        alt="Programmer Image"
        src={require(`../../assets/images/devsecops_1.svg`)}
      ></img>
    );
  }
}
