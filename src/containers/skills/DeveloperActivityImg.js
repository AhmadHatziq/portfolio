import React, { Component } from "react";

export default class DeveloperActivityImg extends Component {
  render() {
    const theme = this.props.theme;
    return (
      <img
        alt="Programmer Image"
        src={require(`../../assets/images/developer_activity.svg`)}
      ></img>
    );
  }
}
