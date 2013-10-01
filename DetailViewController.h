//
//  DetailViewController.h
//  Homepwner
//
//  Created by Andrew Allen on 10/1/13.
//  Copyright (c) 2013 Andrew Allen. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BNRItem;

@interface DetailViewController : UIViewController
{
    __weak IBOutlet UITextField *nameField;
    __weak IBOutlet UITextField *serialNumberField;
    __weak IBOutlet UITextField *valueField;
    __weak IBOutlet UILabel *dateLabel;
    
}

@property (nonatomic, strong) BNRItem *item;

@end
