//
//  CreatePage.m
//  SalesManager
//
//  Created by iOS-Dev on 2017/11/21.
//  Copyright © 2017年 liu xueyan. All rights reserved.
//

#import "CreatePage.h"
#import "WorklogViewController.h"
#import "AttencePageViewController.h"
#import "WifiAttenceViewController.h"
@implementation CreatePage

+(CreatePage*)createPage {
    static CreatePage *createPage = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        createPage = [[CreatePage alloc] init];
    });
    return createPage;
}

-(void)createViewControllwithFunValue:(NSString*)funValue navControl:(UIViewController*)controller{
    if ([funValue isEqualToString:@"WORKLOG"]) {
        WorklogViewController *workVC = [[WorklogViewController alloc] init];
        [controller.navigationController pushViewController:workVC animated:YES];
        
    }
    if ([funValue isEqualToString:@"ATTENDANCE"]) {
        WifiAttenceViewController *attenceVC = [[WifiAttenceViewController alloc] init];
        [controller.navigationController pushViewController:attenceVC animated:YES];

    }
}


@end
