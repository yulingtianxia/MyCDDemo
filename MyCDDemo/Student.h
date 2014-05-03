//
//  Student.h
//  MyCDDemo
//
//  Created by 杨萧玉 on 14-5-3.
//  Copyright (c) 2014年 杨萧玉. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "Person.h"

@class Teacher;

@interface Student : Person

@property (nonatomic, retain) NSNumber * grade;
@property (nonatomic, retain) NSSet *teachers;
@end

@interface Student (CoreDataGeneratedAccessors)

- (void)addTeachersObject:(Teacher *)value;
- (void)removeTeachersObject:(Teacher *)value;
- (void)addTeachers:(NSSet *)values;
- (void)removeTeachers:(NSSet *)values;

@end
