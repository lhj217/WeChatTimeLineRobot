/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCActionSheetDelegate.h"
#import "MMObject.h"
#import "UIAlertViewDelegate.h"
#import "contactInfoDelegate.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "MMWebViewDelegate.h"

@class UIAlertView, UIViewController, NSString, NSMutableDictionary;

@interface MMURLHandler : MMObject <WCActionSheetDelegate, MFMailComposeViewControllerDelegate, contactInfoDelegate, MMWebViewDelegate, UIAlertViewDelegate> {
	UIViewController* m_viewController;
	NSMutableDictionary* m_urlToViewController;
	NSMutableDictionary* m_urlToBackupURL;
	NSString* m_url;
	unsigned long m_urlPermittedSet;
	BOOL m_bPresentViewController;
	BOOL m_isDisableShare;
	BOOL m_disalbeStartLoadGetA8Key;
	UIAlertView* alertView;
	BOOL m_isShouldShowGoBackBtn;
	int m_urlSource;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* m_url;
@property(assign, nonatomic) BOOL m_isShouldShowGoBackBtn;
@property(assign, nonatomic) unsigned long m_urlPermittedSet;
@property(assign, nonatomic) int m_urlSource;
@property(assign, nonatomic) BOOL m_disalbeStartLoadGetA8Key;
@property(assign, nonatomic) BOOL m_isDisableShare;
@property(assign, nonatomic) __weak UIViewController* m_viewController;
@property(assign, nonatomic) BOOL m_bPresentViewController;
+(BOOL)canHandleNativeUrl:(id)url;
+(id)grepTextNumber:(id)number;
+(id)grepPhoneNumber:(id)number;
+(id)grepString:(id)string withRegex:(id)regex;
+(BOOL)containsProtocalHead:(id)head;
+(BOOL)containsAppStoreLinkString:(id)string;
+(BOOL)containsTextLinkString:(id)string;
+(BOOL)containsPhoneLinkString:(id)string;
+(BOOL)containEmailString:(id)string;
+(BOOL)containsMoaString:(id)string;
+(BOOL)containsWXPayLinkString:(id)string;
+(BOOL)containsWeixinString:(id)string;
+(BOOL)containsLocalPathString:(id)string;
+(BOOL)containsHTTPString:(id)string;
+(BOOL)containsString:(id)string withRegex:(id)regex;
+(void)handleUrl:(id)url withBackupURL:(id)backupURL withExtraInfo:(id)extraInfo;
+(id)sharedInstance;
-(void).cxx_destruct;
-(void)nextFeedback:(id)feedback;
-(void)openRankSetting;
-(void)openRankMyHomepage;
-(void)openDeviceRankView;
-(void)openWeixinHB;
-(void)handleNativeUrl:(id)url withViewController:(id)viewController;
-(void)newMessageFromContactInfo:(id)contactInfo;
-(void)mailComposeController:(id)controller didFinishWithResult:(int)result error:(id)error;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)sendEmailTo:(id)to withSubject:(id)subject withBody:(id)body;
-(void)writeEmailWithSystemMail;
-(void)writeEmailWithQQMail;
-(BOOL)isURLRegistered:(id)registered;
-(void)handleURL:(id)url withBackupURL:(id)backupURL withExtraInfo:(id)extraInfo;
-(id)handlePreviewURL:(id)url withExtraInfo:(id)extraInfo;
-(void)handleURL:(id)url withExtraInfo:(id)extraInfo;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)handleOutterAppURL:(id)url;
-(void)handleSystemAppURL:(id)url;
-(void)handleInnerAppURL:(id)url;
-(void)handleInnerWXPayURL:(id)url;
-(BOOL)isSystemAppURL:(id)url;
-(BOOL)isInnerAppURL:(id)url;
-(BOOL)isInnerWXPayURL:(id)url;
-(void)handleLocalResource:(id)resource;
-(void)handleEmailURL:(id)url;
-(void)handleDeepLinkURL:(id)url withExtraInfo:(id)extraInfo;
-(void)handleHttpURL:(id)url withExtraInfo:(id)extraInfo;
-(void)handleInnerJumpURL:(id)url;
-(void)webViewReturn:(id)aReturn;
-(id)webViewFailToLoad:(id)load;
-(void)showAlert:(id)alert;
-(void)showAppStore;
-(id)showBlackList:(id)list;
-(id)openQQOfflineMsgPlugin:(id)plugin;
-(id)openPrivateMsgPlugin:(id)plugin;
-(id)openQQMailPlugin:(id)plugin;
-(id)constructSetHeaderImageViewController:(id)controller;
-(id)constructContactInfoView:(id)view withUserName:(id)userName;
-(void)popViewController:(id)controller;
-(id)getNavigationController;
-(id)getViewController;
-(id)init;
-(void)initData;
@end

