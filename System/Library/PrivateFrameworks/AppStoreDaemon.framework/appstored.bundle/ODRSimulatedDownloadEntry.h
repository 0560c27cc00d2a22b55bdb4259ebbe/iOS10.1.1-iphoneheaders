/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject, NSMutableArray, NSString, NSURL, NSArray;

@interface ODRSimulatedDownloadEntry : NSObject {

	double _duration;
	double _oneTick;
	unsigned long long _currentTickCount;
	NSObject*<OS_dispatch_source> _tickTimer;
	NSMutableArray* _requests;
	NSString* _destinationPath;
	NSURL* _sourceURL;

}

@property (readonly) NSArray * requests;                      //@synthesize requests=_requests - In the implementation block
@property (readonly) NSString * destinationPath;              //@synthesize destinationPath=_destinationPath - In the implementation block
@property (readonly) NSURL * sourceURL;                       //@synthesize sourceURL=_sourceURL - In the implementation block
-(void)didComplete;
-(id)_createDispatchTimerWithInterval:(double)arg1 dispatchQueue:(id)arg2 dispatchBlock:(/*^block*/id)arg3 ;
-(id)initWithSourceURL:(id)arg1 destinationPath:(id)arg2 duration:(double)arg3 ;
-(void)removeRequest:(id)arg1 ;
-(void)dealloc;
-(void)_startTimer;
-(void)addRequest:(id)arg1 ;
-(NSArray *)requests;
-(NSURL *)sourceURL;
-(void)_cancelTimer;
-(void)didFailWithError:(id)arg1 ;
-(NSString *)destinationPath;
@end

