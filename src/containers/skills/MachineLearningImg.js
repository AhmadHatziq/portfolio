import React, { Component } from "react";

export default class MachineLearningImg extends Component {
  render() {
    const theme = this.props.theme;
    return (
      <img
        alt="Programmer Image"
        src={require(`../../assets/images/analytics_2.png`)}
      ></img>
    );
  }
}
