//
//  ToDoItem.h
//  ToDoList
//
//  Created by Gonzalo on 3/19/15.
//  Copyright (c) 2015 OLX. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
