//
//  CreatePage.h
//  SalesManager
//
//  Created by iOS-Dev on 2017/11/21.
//  Copyright © 2017年 liu xueyan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CreatePage : NSObject

@property(nonatomic,strong) UIViewController *parentVC;
+(CreatePage*)createPage;

-(void)createViewControllwithFunValue:(NSString*)funValue navControl:(UIViewController*)controller;
@end
