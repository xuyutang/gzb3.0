//
//  GiftProductCell.m
//  SalesManager
//
//  Created by 章力 on 14-9-18.
//  Copyright (c) 2014年 liu xueyan. All rights reserved.
//

#import "GiftProductCell.h"
#import "Constant.h"
#import <QuartzCore/QuartzCore.h>

@implementation GiftProductCell
@synthesize productName,productModel,count,unit,price;

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];
    
    // Configure the view for the selected state
}

- (void)initSubviews{
    [super initSubviews];
    productName = [[UILabel alloc] initWithFrame:CGRectMake(10,7,290,20)];
    [productName setFont:[UIFont systemFontOfSize:15]];
    productName.backgroundColor = [UIColor clearColor];
    [self addSubview:productName];
    
    productModel = [[UILabel alloc] initWithFrame:CGRectMake(10,30,290,20)];
    [productModel setFont:[UIFont systemFontOfSize:13]];
    productModel.backgroundColor = [UIColor clearColor];
    [self addSubview:productModel];
    
    UILabel *lblCount = [[UILabel alloc] initWithFrame:CGRectMake(10, 51, 51, 20)];
    [lblCount setText:@"数量:"];
    [lblCount setFont:[UIFont systemFontOfSize:14]];
    lblCount.backgroundColor = [UIColor clearColor];
    [self addSubview:lblCount];
    [lblCount release];
    
    count = [[UITextField alloc] initWithFrame:CGRectMake(48, 49, 80, 30)];
    [count setFont:[UIFont systemFontOfSize:14]];
    [count setTextColor:RGBA(65, 105, 225, 1.0)];
    [count setBackground:[UIImage imageNamed:@"bg_edit_text"]];
    [count setBorderStyle:UITextBorderStyleNone];
    [count setKeyboardType:UIKeyboardTypeDecimalPad];
    [count setTextAlignment:NSTextAlignmentCenter];
    count.backgroundColor = [UIColor clearColor];
    [self addSubview:count];
    
    
    unit = [[UILabel alloc] initWithFrame:CGRectMake(135, 51, 42, 20)];
    [unit setFont:[UIFont systemFontOfSize:14]];
    unit.backgroundColor = [UIColor clearColor];
    [self addSubview:unit];
    int x1;
    if (iPhoneX) {
        x1 =163 + 40;
    }else {
        x1 =163;
    }
    UILabel *lblPrice = [[UILabel alloc] initWithFrame:CGRectMake(x1, 51, 45, 20)];
    [lblPrice setFont:[UIFont systemFontOfSize:14]];
    [lblPrice setText:@"单价:"];
    lblPrice.backgroundColor = [UIColor clearColor];
    [self addSubview:lblPrice];
    [lblPrice release];
    
    int x2;
    if (iPhoneX) {
        x2 =210 + 40;
    }else {
        x2 =210;
    }
    price = [[UITextField alloc] initWithFrame:CGRectMake(x2, 49, 80, 30)];
    [price setFont:[UIFont systemFontOfSize:14]];
    [price setTextColor:RGBA(65, 105, 225, 1.0)];
    [price setBackground:[UIImage imageNamed:@"bg_edit_text"]];
    [price setBorderStyle:UITextBorderStyleNone];
    [price setKeyboardType:UIKeyboardTypeDecimalPad];
    [price setTextAlignment:NSTextAlignmentCenter];
    price.backgroundColor = [UIColor clearColor];
    [self addSubview:price];
    
    int x3;
    if (iPhoneX) {
        x3 =288 + 40;
    }else {
        x3 =288;
    }
    UILabel *lblUnit = [[UILabel alloc] initWithFrame:CGRectMake(x3, 51, 30, 20)];
    [lblUnit setFont:[UIFont systemFontOfSize:14]];
    [lblUnit setText:@"元"];
    lblUnit.backgroundColor = [UIColor clearColor];
    [self addSubview:lblUnit];
    [lblUnit release];
    
}

- (void)dealloc {
    [productName release];
    [count release];
    [unit release];
    [price release];
    [super dealloc];
}

@end
