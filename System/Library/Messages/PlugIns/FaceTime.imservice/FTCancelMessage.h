/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <FaceTime/FTFaceTimeMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSNumber;

@interface FTCancelMessage : FTFaceTimeMessage <NSCopying> {

	NSArray* _peers;
	NSNumber* _reason;

}

@property (copy) NSArray * peers;                //@synthesize peers=_peers - In the implementation block
@property (copy) NSNumber * reason;              //@synthesize reason=_reason - In the implementation block
-(id)messageBody;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)reason;
-(void)setPeers:(NSArray *)arg1 ;
-(NSArray *)peers;
-(id)requiredKeys;
-(void)setReason:(NSNumber *)arg1 ;
-(id)bagKey;
@end

