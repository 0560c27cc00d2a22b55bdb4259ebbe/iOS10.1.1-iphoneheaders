/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FTServices/FTServices-Structs.h>
#import <FTServices/IDSFaceTimeMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSNumber, NSData;

@interface IDSSendMessage : IDSFaceTimeMessage <NSCopying> {

	NSArray* _peers;
	NSNumber* _reason;
	NSData* _selfPushToken;

}

@property (copy) NSArray * peers;                     //@synthesize peers=_peers - In the implementation block
@property (copy) NSNumber * reason;                   //@synthesize reason=_reason - In the implementation block
@property (copy) NSData * selfPushToken;              //@synthesize selfPushToken=_selfPushToken - In the implementation block
-(id)messageBody;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)reason;
-(NSData *)selfPushToken;
-(void)setSelfPushToken:(NSData *)arg1 ;
-(void)setPeers:(NSArray *)arg1 ;
-(NSArray *)peers;
-(id)requiredKeys;
-(void)setReason:(NSNumber *)arg1 ;
-(id)bagKey;
@end

