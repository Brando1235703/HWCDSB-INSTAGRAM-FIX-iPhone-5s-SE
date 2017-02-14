//
//  AppDelegate.h
//  HWCDSB INSTAGRAM FIX iPhone 5s,SE
//
//  Created by Brandon Withall on 2017-01-18.
//  Copyright © 2017 Brando1235703. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

