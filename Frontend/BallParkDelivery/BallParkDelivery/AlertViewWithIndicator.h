//
//  AlertViewWithIndicator.h
//  BallParkDelivery
//
//  Created by Seth  Thompson on 4/5/12.
//  Copyright (c) 2012 Bradley University. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AlertViewWithIndicator : UIAlertView

@property (nonatomic, retain) UIActivityIndicatorView *indicator;
@property BOOL shouldAnimate;

@end
