//
//  ItemsViewController.h
//  Homepwner
//
//  Created by Andrew Allen on 9/30/13.
//  Copyright (c) 2013 Andrew Allen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ItemsViewController : UITableViewController
{
  IBOutlet UIView *headerView;
}

- (UIView *)headerView;
- (IBAction)addNewItem:(id)sender;
- (IBAction)toggleEditingMode:(id)sender;

@end
