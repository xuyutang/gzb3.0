//
//  PatrolDetailReplyCell.m
//  SalesManager
//
//  Created by liuxueyan on 15-5-29.
//  Copyright (c) 2015年 liu xueyan. All rights reserved.
//

#import "PatrolDetailReplyCell.h"

@implementation PatrolDetailReplyCell

- (void)awakeFromNib {
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (void)dealloc {
    [_icon release];
    [_name release];
    [_time release];
    [_content release];
    [super dealloc];
}
@end
