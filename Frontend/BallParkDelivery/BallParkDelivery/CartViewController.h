//
//  CartViewController.h
//  BallParkDelivery
//
//  Created by Seth  Thompson on 4/5/12.
//  Copyright (c) 2012 Bradley University. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Cart;


@protocol CartDelegate

- (void) orderPlaced:(id)sender;  
- (void) orderCancelled:(id)sender;

@end

@interface CartViewController : UIViewController<UITableViewDataSource,UITableViewDelegate,UIAlertViewDelegate>

@property (weak, nonatomic) IBOutlet UILabel *total;
@property (weak, nonatomic) IBOutlet UIButton *order;
@property (weak, nonatomic) IBOutlet UIButton *cancel;
@property (weak, nonatomic) IBOutlet UITableView *tableview;

@property (strong, nonatomic) NSMutableArray *orders;

@property (strong, nonatomic) UIAlertView *emptyAlert;
@property (strong, nonatomic) UIAlertView *orderAlert;

@property (strong, nonatomic) Cart *cart;

@property(nonatomic, assign) id<CartDelegate> delegate;

@property(strong, nonatomic) NSString *userKey;

-(IBAction)placeOrder:(id)sender;
-(IBAction)cancelOrder:(id)sender;
-(float) getPriceTotal;
-(void) setTotalPrice;

@end
