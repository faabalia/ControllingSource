//
//  MasterViewController.h
//  ControllingSource
//
//  Created by macbook on 28/09/13.
//  Copyright (c) 2013 Felix Angel Abalia. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
