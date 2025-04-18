import {getHostComponent, HybridRef} from 'react-native-nitro-modules';
import {CalendarMethods, CalendarProps} from '../specs/Calendar.nitro';
import CalendarConfig from '../../nitrogen/generated/shared/json/CalendarConfig.json';

export const Calendar = getHostComponent<CalendarProps, CalendarMethods>(
  'Calendar',
  () => CalendarConfig,
);

export type CalendarRef = HybridRef<CalendarProps, CalendarMethods>;
