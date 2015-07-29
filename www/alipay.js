/*global cordova, module*/

module.exports = {
    pay: function (name, successCallback, errorCallback) {
        cordova.exec(successCallback, errorCallback, "AliPay", "pay", [name]);
    }
};
