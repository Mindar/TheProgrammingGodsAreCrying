const path = require('path');

module.exports = {
  mode: 'development',
  entry: './test2.js',
  output: {
    path: path.resolve(__dirname, '.'),
    filename: 'bundle.js',
  },
};