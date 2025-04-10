import React, { Component } from "react";

export default class ProgrammerImg extends Component {
  render() {
    const theme = this.props.theme;
    return (
      <img
        alt="Programmer Image"
        src={require(`../../assets/images/programmer.svg`)}
      ></img>
    );
  }
}
