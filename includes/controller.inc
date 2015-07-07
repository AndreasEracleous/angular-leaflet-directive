var app = angular.module('demoapp', ['leaflet-directive']);
app.controller('BasicCenterController', [ '$scope', function($scope) {
    angular.extend($scope, {
        center: {
            lat: 51.505,
            lng: -0.09,
            zoom: 4
        },
        tiles: {
            url: "http://{s}.tile.opencyclemap.org/cycle/{z}/{x}/{y}.png"
        }
    });
}]);