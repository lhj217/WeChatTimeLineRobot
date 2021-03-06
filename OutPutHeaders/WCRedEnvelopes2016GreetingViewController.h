/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "GKImagePickerDelegate.h"
#import "WCRedEnvelopesCdnManagerDelegate.h"
#import "MMUIViewController.h"
#import "IZCWScrollNumViewDelegate.h"

@class MMToastViewController, UIView, ZCWScrollNumView, WCRedEnvelopesControlData, UIImageView, NSString, UIButton, WCRedEnvelopesCdnManager, UIImage, NSArray, MMUILabel, SingleImageBrowser, GKImagePicker;
@protocol WCRedEnvelopes2016GreetingViewControllerDelegate;

@interface WCRedEnvelopes2016GreetingViewController : MMUIViewController <IZCWScrollNumViewDelegate, GKImagePickerDelegate, WCRedEnvelopesCdnManagerDelegate> {
	int m_currentNum;
	NSString* m_currentWish;
	NSString* m_nsStatusMsg;
	double m_numAnimationDuration;
	int m_currentMessIndex;
	NSArray* m_oMessArr;
	NSString* m_nsHeadUrl;
	NSString* m_nsSenderNickName;
	SingleImageBrowser* m_oImageBrowser;
	int m_enStatus;
	NSString* m_chatName;
	BOOL _m_bIsSender;
	BOOL _m_bScrollNum;
	BOOL _m_bPitcureEnable;
	BOOL _m_bIsCreate;
	BOOL _m_bFisrtLayout;
	id<WCRedEnvelopes2016GreetingViewControllerDelegate> _m_delegate;
	UIView* _m_coverView;
	UIView* _m_containerView;
	UIImageView* _m_containerBGImgView;
	UIButton* _m_closeBtn;
	UIButton* _m_cameraBtn;
	UIImageView* _m_pictureBGImgView;
	UIImageView* _m_pictureImgView;
	UIView* _m_pictureLoadingView;
	UIButton* _m_pictureDelBtn;
	MMUILabel* _m_greetingLabel;
	MMUILabel* _m_yuanLabel;
	ZCWScrollNumView* _m_numView;
	UIButton* _m_randomNextMoneyBtn;
	MMUILabel* _m_saveBalanceLabel;
	UIButton* _m_sendBtn;
	MMUILabel* _m_statusLabel;
	UIView* _m_senderView;
	WCRedEnvelopesControlData* _m_data;
	UIImage* _m_oImage;
	MMToastViewController* _m_toastView;
	GKImagePicker* _m_picker;
	WCRedEnvelopesCdnManager* _m_oCdnManager;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) WCRedEnvelopesCdnManager* m_oCdnManager;
@property(retain, nonatomic) GKImagePicker* m_picker;
@property(retain, nonatomic) MMToastViewController* m_toastView;
@property(assign, nonatomic) BOOL m_bFisrtLayout;
@property(retain, nonatomic) UIImage* m_oImage;
@property(assign, nonatomic) BOOL m_bIsCreate;
@property(assign, nonatomic) BOOL m_bPitcureEnable;
@property(assign, nonatomic) BOOL m_bScrollNum;
@property(assign, nonatomic) BOOL m_bIsSender;
@property(retain, nonatomic) WCRedEnvelopesControlData* m_data;
@property(retain, nonatomic) UIView* m_senderView;
@property(retain, nonatomic) MMUILabel* m_statusLabel;
@property(retain, nonatomic) UIButton* m_sendBtn;
@property(retain, nonatomic) MMUILabel* m_saveBalanceLabel;
@property(retain, nonatomic) UIButton* m_randomNextMoneyBtn;
@property(retain, nonatomic) ZCWScrollNumView* m_numView;
@property(retain, nonatomic) MMUILabel* m_yuanLabel;
@property(retain, nonatomic) MMUILabel* m_greetingLabel;
@property(retain, nonatomic) UIButton* m_pictureDelBtn;
@property(retain, nonatomic) UIView* m_pictureLoadingView;
@property(retain, nonatomic) UIImageView* m_pictureImgView;
@property(retain, nonatomic) UIImageView* m_pictureBGImgView;
@property(retain, nonatomic) UIButton* m_cameraBtn;
@property(retain, nonatomic) UIButton* m_closeBtn;
@property(retain, nonatomic) UIImageView* m_containerBGImgView;
@property(retain, nonatomic) UIView* m_containerView;
@property(retain, nonatomic) UIView* m_coverView;
@property(assign, nonatomic) __weak id<WCRedEnvelopes2016GreetingViewControllerDelegate> m_delegate;
-(void).cxx_destruct;
-(float)hb_height;
-(float)hb_width;
-(void)endAnimation;
-(void)showAnimation;
-(void)downloadImageWithFileId:(id)fileId aesKey:(id)key filePath:(id)path fileLength:(int)length clientMsgId:(id)anId;
-(void)uploadImage:(id)image;
-(void)onWcRedEnvelopesCdnManagerDidDownloadImage:(BOOL)onWcRedEnvelopesCdnManager fileId:(id)anId;
-(void)onWcRedEnvelopesCdnManagerUploadImagePercent:(double)percent;
-(void)onWcRedEnvelopesCdnManagerDidUploadImage:(BOOL)onWcRedEnvelopesCdnManager fileName:(id)name fileId:(id)anId aesKey:(id)key fileLength:(int)length;
-(void)imagePickerDidCancel:(id)imagePicker;
-(void)imagePicker:(id)picker pickedImage:(id)image;
-(void)onNumViewAnimationDidStop;
-(void)sendWithImage;
-(void)sendWithOutImage;
-(void)onImageTap:(id)tap;
-(void)onCoverTap:(id)tap;
-(void)onSendBtnClick:(id)click;
-(void)onNextLucyMoneyClick:(id)click;
-(void)onPictureDelBtnClick:(id)click;
-(void)onCameraBtnClick:(id)click;
-(void)onCloseClick:(id)click;
-(void)dismiss;
-(void)show;
-(void)setUploadingStatus:(BOOL)status;
-(void)showFailToastViewText:(id)text;
-(void)tryDownloadImage;
-(void)tryLoadImageForReceive;
-(void)tryLoadImageForSender;
-(void)genImage;
-(void)layoutExpiredView;
-(void)layoutReceiveView;
-(void)layoutSendView;
-(void)viewDidLayoutSubviews;
-(void)layoutViews;
-(void)viewDidLoad;
-(void)setupView;
-(void)centerButton:(id)button imageSpacing:(float)spacing;
-(void)configNumView:(id)view withNumber:(int)number font:(id)font;
-(BOOL)isMsgWrapHasImage;
-(id)initReceiveViewWithIsScrollNum:(BOOL)isScrollNum payData:(id)data;
-(id)initSendViewWithIsScrollNum:(BOOL)isScrollNum payData:(id)data;
@end

