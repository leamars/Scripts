//
//  StoryEntriesViewController.h
//  Scripts
//
//  Created by Maijid Moujaled on 9/20/13.
//  Copyright (c) 2013 Maijid Moujaled. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GCPlaceholderTextView.h>

@interface StoryEntriesViewController : UIViewController
@property (nonatomic, strong) PFObject *story;
@property (nonatomic, strong) NSString *entry;
@property (strong, nonatomic) IBOutlet GCPlaceholderTextView *entryField;

@end
