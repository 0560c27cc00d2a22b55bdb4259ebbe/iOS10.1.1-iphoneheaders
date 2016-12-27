/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CADisplayLink, NSMutableDictionary;

@interface _HandsDisplayLinkManager : NSObject {

	CADisplayLink* _displayLink;
	NSMutableDictionary* _handlers;
	unsigned long long _nextToken;
	BOOL _inForeground;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_updateDisplayLink;
-(void)_onDisplayLink:(id)arg1 ;
-(id)_nextToken;
-(void)stopUpdatesForToken:(id)arg1 ;
-(id)startUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)_backgrounded;
-(void)_foregrounded;
-(void)_invokeHandlers;
@end

