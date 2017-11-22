//
//  MyinfoCell.m
//  SalesManager
//
//  Created by iOS-Dev on 2017/11/22.
//  Copyright © 2017年 liu xueyan. All rights reserved.
//

#import "MyinfoCell.h"

@implementation MyinfoCell

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (void)dealloc {
    [_nameLab release];
    [_tellLab release];
    [_departMentLab release];
    [_companyLab release];
    [_IconImagView release];
    [super dealloc];
}
@end
