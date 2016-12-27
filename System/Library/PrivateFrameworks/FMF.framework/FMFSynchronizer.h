/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject, NSString;

@interface FMFSynchronizer : NSObject {

	BOOL _timeoutOccurred;
	double _timeout;
	NSObject*<OS_dispatch_semaphore> _sem;
	NSString* _info;

}

@property (assign,nonatomic) BOOL timeoutOccurred;                              //@synthesize timeoutOccurred=_timeoutOccurred - In the implementation block
@property (assign,nonatomic) double timeout;                                    //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSString * info;                                   //@synthesize info=_info - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> sem;              //@synthesize sem=_sem - In the implementation block
-(NSString *)info;
-(void)signal;
-(void)setInfo:(NSString *)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(id)initWithDescription:(id)arg1 andTimeout:(double)arg2 ;
-(NSObject*<OS_dispatch_semaphore>)sem;
-(void)setSem:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)loggingID;
-(BOOL)timeoutOccurred;
-(void)setTimeoutOccurred:(BOOL)arg1 ;
-(void)wait;
@end

