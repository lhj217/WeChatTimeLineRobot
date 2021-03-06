/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIView.h"

@class NSMutableArray;
@protocol FavTagEditViewDelegate;

@interface FavTagTableView : MMUIView {
	NSMutableArray* m_arrTagListView;
	NSMutableArray* m_arrHeaders;
	id<FavTagEditViewDelegate> m_delegate;
	BOOL autoAdjustHeight;
	BOOL addSepLine;
}
@property(assign, nonatomic) BOOL addSepLine;
@property(assign, nonatomic) BOOL autoAdjustHeight;
@property(assign, nonatomic) __weak id<FavTagEditViewDelegate> m_delegate;
-(void).cxx_destruct;
-(void)onTouchHeaderBlankView:(id)view;
-(void)unHighLightAllButtons;
-(void)highLightButtons:(id)buttons;
-(void)setButtonHighLight:(BOOL)light named:(id)named;
-(void)addTags:(id)tags titled:(id)titled;
-(void)addSeperatorLine:(id)line withRect:(CGRect)rect;
-(void)layoutSubviews;
-(void)initData;
-(id)initWithFrame:(CGRect)frame;
@end

