//
//  LogInViewController.h
//  SmarterQueue
//
//  Created by Rod Matveev on 01/12/2015.
//  Copyright © 2015 SmarterQueue. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TutorialContentViewController.h"

@interface LogInViewController : UIViewController <UIWebViewDelegate>

@property (strong, nonatomic) IBOutlet NSLayoutConstraint *leftMarginOfBackgroundView;
@property (strong, nonatomic) IBOutlet NSLayoutConstraint *rightMarginOfBackgroundView;

@property (strong, nonatomic) IBOutlet UIWebView *logInWebView;

@end
