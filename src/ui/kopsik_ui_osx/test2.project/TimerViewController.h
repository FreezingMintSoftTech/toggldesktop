//
//  TimerViewController.h
//  kopsik_ui_osx
//
//  Created by Tanel Lebedev on 19/09/2013.
//  Copyright (c) 2013 kopsik developers. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface TimerViewController : NSViewController
@property (weak) IBOutlet NSTextField *descriptionTextField;
@property (weak) IBOutlet NSTextField *projectTextField;
@property (weak) IBOutlet NSTextField *durationTextField;
@property (weak) IBOutlet NSButton *stopButton;
- (IBAction)stopButtonClicked:(id)sender;
- (void)timerFired:(NSTimer *)timer;
@end
