/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"

@class WCListViewController;

@protocol WCListViewDelegate <NSObject>
@property(assign, nonatomic) WCListViewController* viewController;
-(void)reloadBackGround;
-(void)refreshFooterEnd:(unsigned long)end;
-(void)refreshHeaderEnd:(unsigned long)end;
-(void)onDataChanged:(id)changed;
-(void)shouldReloadData:(id)data;
@optional
-(void)didReceiveMemoryWarning;
-(void)onNoMoreDataWithRet:(int)ret;
@end

