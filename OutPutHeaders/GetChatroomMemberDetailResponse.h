/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSString, ChatRoomMemberData, BaseResponse;

@interface GetChatroomMemberDetailResponse : WXPBGeneratedMessage {
}
@property(retain, nonatomic) ChatRoomMemberData* newChatroomData;
@property(assign, nonatomic) unsigned serverVersion;
@property(retain, nonatomic) NSString* chatroomUserName;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end

