//
//  CreateStoryViewController.h
//  Scripts
//
//  Created by Maijid Moujaled on 9/20/13.
//  Copyright (c) 2013 Maijid Moujaled. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GCPlaceholderTextView.h>

@interface CreateStoryViewController : UIViewController <UITextViewDelegate>

@property (strong, nonatomic) IBOutlet UITextField *titleField;
@property (strong, nonatomic) IBOutlet GCPlaceholderTextView *firstEntryField;
@property (strong, nonatomic) IBOutlet GCPlaceholderTextView *summaryField;

-(IBAction)submit:(id)sender;

@end
