/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCPersistedState.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface BRCFSEventsPersistedState : BRCPersistedState <NSCopying> {

	NSUUID* _streamUUID;
	unsigned long long _latestEventID;
	unsigned long long _rootID;

}

@property (nonatomic,retain) NSUUID * streamUUID;                           //@synthesize streamUUID=_streamUUID - In the implementation block
@property (assign,nonatomic) unsigned long long latestEventID;              //@synthesize latestEventID=_latestEventID - In the implementation block
@property (assign,nonatomic) unsigned long long rootID;                     //@synthesize rootID=_rootID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)loadFromClientStateInSession:(id)arg1 options:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)latestEventID;
-(NSUUID *)streamUUID;
-(unsigned long long)rootID;
-(id)initWithLatestEventID:(unsigned long long)arg1 streamUUID:(id)arg2 rootID:(unsigned long long)arg3 ;
-(void)setLatestEventID:(unsigned long long)arg1 ;
-(void)setStreamUUID:(NSUUID *)arg1 ;
-(void)setRootID:(unsigned long long)arg1 ;
@end

