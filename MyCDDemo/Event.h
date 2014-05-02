//
//  Event.h
//  MyCDDemo
//
//  Created by 杨萧玉 on 14-5-2.
//  Copyright (c) 2014年 杨萧玉. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Event : NSManagedObject

@property (nonatomic, retain) NSDate * timeStamp;

@end
