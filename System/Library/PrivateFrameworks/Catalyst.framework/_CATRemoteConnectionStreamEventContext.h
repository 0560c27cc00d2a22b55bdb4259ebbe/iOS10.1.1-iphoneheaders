/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSStream;

@interface _CATRemoteConnectionStreamEventContext : NSObject {

	NSStream* _stream;
	unsigned long long _event;

}

@property (nonatomic,retain) NSStream * stream;                     //@synthesize stream=_stream - In the implementation block
@property (assign,nonatomic) unsigned long long event;              //@synthesize event=_event - In the implementation block
-(unsigned long long)event;
-(void)setEvent:(unsigned long long)arg1 ;
-(NSStream *)stream;
-(void)setStream:(NSStream *)arg1 ;
@end

