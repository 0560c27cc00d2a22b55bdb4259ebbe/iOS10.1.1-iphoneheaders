/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriCore/SiriCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMapTable;

@interface SiriCorePingInfo : NSObject <NSCopying> {

	NSMapTable* _outstandingPings;
	long long _pingCount;
	double _avgPingTime;

}

@property (nonatomic,readonly) long long pingCount;              //@synthesize pingCount=_pingCount - In the implementation block
@property (nonatomic,readonly) double avgPingTime;               //@synthesize avgPingTime=_avgPingTime - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)pingCount;
-(void)markPingSentWithIndex:(long long)arg1 ;
-(void)markPongReceivedWithIndex:(long long)arg1 ;
-(unsigned long long)numberOfUnacknowledgedPings;
-(double)avgPingTime;
@end

