/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSString;

@interface SendSightRequest : WXPBGeneratedMessage {
}
@property(assign, nonatomic) int thumbWidth;
@property(assign, nonatomic) int thumbHeight;
@property(assign, nonatomic) int playtime;
@property(assign, nonatomic) int thumbLength;
@property(assign, nonatomic) int videoLength;
@property(retain, nonatomic) NSString* url;
@property(retain, nonatomic) NSString* aesKey;
@property(retain, nonatomic) NSString* md5;
@property(retain, nonatomic) NSString* clientId;
@property(retain, nonatomic) NSMutableArray* tousers;
+(void)initialize;
@end

