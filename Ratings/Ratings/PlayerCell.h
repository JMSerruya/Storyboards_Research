//
//  PlayerCell.h
//  Ratings
//
//  Created by Juan Manuel Serruya on 12/27/12.
//  Copyright (c) 2012 Juan Manuel Serruya. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayerCell : UITableViewCell

@property (nonatomic, strong) IBOutlet UILabel *nameLabel;
@property (nonatomic, strong) IBOutlet UILabel *gameLabel;
@property (nonatomic, strong) IBOutlet UIImageView
*ratingImageView;

@end
