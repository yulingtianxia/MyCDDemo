//
//  MasterViewController.h
//  MyCDDemo
//
//  Created by 杨萧玉 on 14-5-1.
//  Copyright (c) 2014年 杨萧玉. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
