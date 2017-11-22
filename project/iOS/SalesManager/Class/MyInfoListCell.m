//
//  MyInfoListCell.m
//  SalesManager
//
//  Created by iOS-Dev on 2017/11/22.
//  Copyright © 2017年 liu xueyan. All rights reserved.
//

#import "MyInfoListCell.h"

@implementation MyInfoListCell

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (void)dealloc {
    [_titleLab release];
    [_numberLab release];
    [_infoImagView release];
    [super dealloc];
}
@end
