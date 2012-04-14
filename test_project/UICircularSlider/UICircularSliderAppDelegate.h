//
//  UICircularSliderAppDelegate.h
//  ZMCircularSlider
//
//  Created by Zouhair Mahieddine on 02/03/12.
//  Copyright (c) 2012 Zouhair Mahieddine.
//  http://www.zedenem.com
//  
//  This file is part of the ZMCircularSlider Library.
//  
//  ZMCircularSlider is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//  
//  ZMCircularSlider is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//  
//  You should have received a copy of the GNU General Public License
//  along with ZMCircularSlider.  If not, see <http://www.gnu.org/licenses/>.
//

#import <UIKit/UIKit.h>

@class UICircularSliderViewController;

@interface UICircularSliderAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) UICircularSliderViewController *viewController;

@end
