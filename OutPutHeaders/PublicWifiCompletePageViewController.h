/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMWebViewController.h"

@class APBase;
@protocol PublicWifiCompletePageViewControllerDelegate;

@interface PublicWifiCompletePageViewController : MMWebViewController {
	id<PublicWifiCompletePageViewControllerDelegate> _delegate;
	APBase* _apBase;
	int _followFlag;
}
@property(assign, nonatomic) int followFlag;
@property(retain, nonatomic) APBase* apBase;
@property(assign, nonatomic) __weak id<PublicWifiCompletePageViewControllerDelegate> delegate;
-(void).cxx_destruct;
-(void)webViewDidFinishLoad:(id)webView;
-(void)updateFollowFlag:(int)flag;
-(BOOL)isShouldUpdateFollowFlagWithUserName:(id)is;
-(void)onBack;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(void)onDone;
-(void)viewDidLoad;
-(id)initWithApBase:(id)apBase;
@end

