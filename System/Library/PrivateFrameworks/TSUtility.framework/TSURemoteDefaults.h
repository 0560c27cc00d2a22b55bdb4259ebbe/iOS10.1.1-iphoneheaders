/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface TSURemoteDefaults : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_source> _updateTimer;

}
+(id)sharedDefaults;
-(double)timeIntervalUntilNextUpdate;
-(id)URLForKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)URLRequest;
-(void)registerDefaults;
-(id)initInternal;
-(void)checkForUpdate;
-(void)processResponse:(id)arg1 data:(id)arg2 error:(id)arg3 ;
@end

