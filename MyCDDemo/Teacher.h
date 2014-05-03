//
//  Teacher.h
//  MyCDDemo
//
//  Created by 杨萧玉 on 14-5-3.
//  Copyright (c) 2014年 杨萧玉. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "Person.h"

@class Student;

@interface Teacher : Person

@property (nonatomic, retain) NSString * course;
@property (nonatomic, retain) NSSet *students;
@end

@interface Teacher (CoreDataGeneratedAccessors)

- (void)addStudentsObject:(Student *)value;
- (void)removeStudentsObject:(Student *)value;
- (void)addStudents:(NSSet *)values;
- (void)removeStudents:(NSSet *)values;

@end
