//
//  DetailViewController.h
//  MyCDDemo
//
//  Created by 杨萧玉 on 14-5-1.
//  Copyright (c) 2014年 杨萧玉. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
