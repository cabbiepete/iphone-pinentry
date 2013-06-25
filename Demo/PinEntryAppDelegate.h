//
//  PinEntryAppDelegate.h
//  PinEntry
//
//  Created by Farcaller on 21.10.10.
//  Copyright 2010 Codeneedle. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PinEntryViewController;

@interface PinEntryAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    PinEntryViewController *viewController;
}

@property (nonatomic, strong) IBOutlet UIWindow *window;
@property (nonatomic, strong) IBOutlet PinEntryViewController *viewController;

@end

