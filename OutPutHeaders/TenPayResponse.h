/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinBuffer_t, NSString, BaseResponse;

@interface TenPayResponse : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* tenpayErrMsg;
@property(assign, nonatomic) int tenpayErrType;
@property(assign, nonatomic) int cgiCmdid;
@property(retain, nonatomic) NSString* platMsg;
@property(assign, nonatomic) int platRet;
@property(retain, nonatomic) SKBuiltinBuffer_t* retText;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end

