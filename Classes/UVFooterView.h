//
//  UVFooterView.h
//  UserVoice
//
//  Created by Mirko Froehlich on 1/12/10.
//  Copyright 2010 UserVoice Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class UVBaseViewController;

@interface UVFooterView : UIView <UITableViewDelegate, UITableViewDataSource> {
	UVBaseViewController *controller;
	UITableView *tableView;
}

@property (assign) UVBaseViewController *controller;
@property (nonatomic, retain) UITableView *tableView;

+ (CGFloat)heightForFooter;
+ (UVFooterView *)footerViewForController:(UVBaseViewController *)controller;

- (void)reloadFooter;

@end
