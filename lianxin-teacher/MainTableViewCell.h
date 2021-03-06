//
//  MainTableViewCell.h
//  lianxin-teacher
//
//  Created by 朱子江 on 17/5/17.
//  Copyright © 2017年 com.zzj. All rights reserved.
//

#import <UIKit/UIKit.h>
@interface MainTableViewCell : UITableViewCell
@property (nonatomic,weak) UIImageView *iconView;
@property (nonatomic,weak)  UILabel *nameLabel;
@property (nonatomic,weak) UILabel *gradeLabel;
@property (nonatomic,weak) UILabel *courseLabel;
@property (nonatomic,weak) UILabel *distanceLabel;
@property (nonatomic,weak) UILabel *realnameLabel;
@property (nonatomic,weak) UILabel *priceLabel;

+(instancetype)cellWithTableView:(UITableView *)tableview;
@end
