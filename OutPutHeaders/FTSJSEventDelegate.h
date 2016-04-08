/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol FTSJSEventDelegate <NSObject>
@optional
-(void)onSearchInputChanged:(id)changed;
-(void)onClickRecmdWord:(id)word;
-(void)onOpenMsgSession:(id)session;
-(void)didFinishLoadWebView:(id)view;
-(void)onOpenSnsDetail:(id)detail;
-(void)onOpenContactError:(id)error withMessage:(id)message;
-(void)onOpenContact:(id)contact;
-(void)onBeginOnlineSearchContact:(id)contact;
-(void)onOpenBrandContact:(id)contact withParams:(id)params;
-(void)onLaunchPage:(id)page withParams:(id)params;
-(void)onLaunchDetailPage:(id)page;
-(void)onPreSearch:(id)search;
-(void)onSearchRecmdDataFail;
-(void)onFailReceiveJson;
-(void)onReceiveJson:(id)json;
@end
