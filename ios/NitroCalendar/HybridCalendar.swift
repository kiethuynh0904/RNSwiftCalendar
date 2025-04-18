//
//  HybridCalendar.swift
//  RNSwiftCalendar
//
//  Created by kiet.huynh on 4/18/25.
//
import Foundation
import UIKit

class HybridCalendar: HybridCalendarSpec {
   // UIView
  var view = UIView()
  
  //Props
  
  var isBlue: Bool = false {
    didSet {
      view.backgroundColor = isBlue ? .systemBlue : .systemRed
    }
  }
  var colorScheme: ColorScheme = .light
  var someCallback: () -> Void = {}
  
  //Methods
  func someMethod() throws -> Void {
    someCallback()
  }
}

