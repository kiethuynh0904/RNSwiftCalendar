/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 */

import React from 'react';
import {StyleSheet, useColorScheme} from 'react-native';
import {Calendar} from './nitro/views/Calendar';

function App(): React.JSX.Element {
  const isDarkMode = useColorScheme() === 'dark';

  return (
    <Calendar
      colorScheme={isDarkMode ? 'dark' : 'light'}
      isBlue={true}
      someCallback={{f: () => console.log('hi')}}
      style={styles.view}
    />
  );
}

const styles = StyleSheet.create({
  view: {
    width: 100,
    height: 100,
  },
});

export default App;
