/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MCPeerIDInternal : NSObject {

	NSString* _idString;
	unsigned long long _pid64;
	NSString* _displayName;

}

@property (nonatomic,readonly) NSString * idString;                   //@synthesize idString=_idString - In the implementation block
@property (nonatomic,readonly) unsigned long long pid64;              //@synthesize pid64=_pid64 - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                //@synthesize displayName=_displayName - In the implementation block
-(void)dealloc;
-(NSString *)displayName;
-(id)initWithIDString:(id)arg1 pid64:(unsigned long long)arg2 displayName:(id)arg3 ;
-(unsigned long long)pid64;
-(NSString *)idString;
@end

