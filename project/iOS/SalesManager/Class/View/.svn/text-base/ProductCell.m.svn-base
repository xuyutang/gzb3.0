//
//  ProductCell.m
//  SalesManager
//
//  Created by ZhangLi on 14-1-15.
//  Copyright (c) 2014年 liu xueyan. All rights reserved.
//

#import "ProductCell.h"
#import "Constant.h"

@implementation ProductCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

-(void)layoutSubviews {
    [super layoutSubviews];
    if (iPhoneX) {
        _priceLabel.x = MAINWIDTH/2 + 10;
        _price.x = _priceLabel.x + _priceLabel.width + 15;
        _RMBLabel.x = MAINWIDTH - _RMBLabel.width - 20;
    }
}
- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (void)dealloc {
    [_product release];
    [_price release];
    [_count release];
    [_price release];
    [_countLabel release];
    [_unit release];
    [_priceLabel release];
    [_RMBLabel release];
    [_count release];
    [super dealloc];
}
@end
