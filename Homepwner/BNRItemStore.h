//
//  BNRItemStore.h
//  Homepwner
//
//  Created by Andrew Allen on 9/30/13.
//  Copyright (c) 2013 Andrew Allen. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BNRItem;

@interface BNRItemStore : NSObject
{
    NSMutableArray *allItems;
}

+ (BNRItemStore *)sharedStore;

- (NSArray *)allItems;
- (BNRItem *)createItem;
- (void)removeItem:(BNRItem *)item;
- (void)moveItemAtIndex:(int)from
                toIndex:(int)to;

@end
