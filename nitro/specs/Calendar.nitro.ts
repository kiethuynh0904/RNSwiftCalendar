import {
  HybridView,
  HybridViewMethods,
  HybridViewProps,
} from 'react-native-nitro-modules';

export type ColorScheme = 'light' | 'dark';

export interface CalendarProps extends HybridViewProps {
  colorScheme: ColorScheme;
  isBlue: boolean;
  someCallback: () => void;
}

export interface CalendarMethods extends HybridViewMethods {
  someMethod(): void;
}

export type Calendar = HybridView<CalendarProps, CalendarMethods>;
