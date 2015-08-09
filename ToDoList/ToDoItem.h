//
//  ToDoItem.h
//  ToDoList
//
//  Created by Benjamin Brunk on 8/6/15.
//  Copyright (c) 2015 Benjamin Brunk. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property  NSString *itemName;
@property   BOOL completed;
@property (readonly) NSDate *creationDate;
@end
