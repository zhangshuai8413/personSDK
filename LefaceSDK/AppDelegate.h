//
//  AppDelegate.h
//  LefaceSDK
//
//  Created by 张帅 on 2018/4/1.
//  Copyright © 2018年 ZhangShuai. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

