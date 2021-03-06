/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIImageView.h"
#import "ICdnComMgrExt.h"

@class UIImage, NSString;

@interface MMCDNImageView : MMUIImageView <ICdnComMgrExt> {
	UIImage* _defaultImage;
	NSString* _localSrcPath;
	NSString* _cdnUrl;
	NSString* _aesKey;
	unsigned long _datasize;
	NSString* _clientID;
	BOOL _isCompressImage;
	BOOL _isloaded;
	BOOL _autoDownloadNoWifi;
	BOOL _isClipImage;
	BOOL _isNewFavList;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL autoDownloadNoWifi;
@property(assign, nonatomic) BOOL isNewFavList;
@property(assign, nonatomic) BOOL isClipImage;
@property(assign, nonatomic) BOOL isCompressImage;
@property(assign, nonatomic) unsigned long dataSize;
@property(retain, nonatomic) NSString* aesKey;
@property(retain, nonatomic) NSString* cdnUrl;
@property(retain, nonatomic) NSString* localSrcPath;
-(void).cxx_destruct;
-(void)dealloc;
-(void)OnCdnDownload:(id)download;
-(void)stopLoadingImage;
-(BOOL)startLoadingImage;
-(void)loadingImageWithGCD;
-(id)clipImage:(id)image;
-(id)compressImage:(id)image;
-(void)setDefaultImage:(id)image;
@end

