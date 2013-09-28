//
//  DetailViewController.h
//  ControllingSource
//
//  Created by macbook on 28/09/13.
//  Copyright (c) 2013 Felix Angel Abalia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
