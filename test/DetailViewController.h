//
//  DetailViewController.h
//  test
//
//  Created by David Hinds on 4/3/14.
//  Copyright (c) 2014 David Hinds. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
