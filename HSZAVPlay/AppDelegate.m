//
//  AppDelegate.m
//  HSZAVPlay
//
//  Created by Ze Shao on 2020/10/21.
//

#import "AppDelegate.h"
#import "ViewController.h"

@interface AppDelegate ()


@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    
    self.window = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
    ViewController *viewVC = [[ViewController alloc] init];
    self.window.rootViewController = viewVC;
    [self.window makeKeyAndVisible];
    return YES;
}

@end
