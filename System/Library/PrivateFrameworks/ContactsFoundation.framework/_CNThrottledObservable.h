/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable, CNScheduler, CNCancelable;
@class CNObservable;

@interface _CNThrottledObservable : CNObservable {

	id<CNObservable> _observable;
	double _interval;
	id<CNScheduler> _observerScheduler;
	id<CNScheduler> _resourceLock;
	id _mostRecentResult;
	id<CNCancelable> _delayToken;

}

@property (readonly) CNObservable * observable;                      //@synthesize observable=_observable - In the implementation block
@property (readonly) double interval;                                //@synthesize interval=_interval - In the implementation block
@property (readonly) id<CNScheduler> observerScheduler;              //@synthesize observerScheduler=_observerScheduler - In the implementation block
@property (readonly) id<CNScheduler> resourceLock;                   //@synthesize resourceLock=_resourceLock - In the implementation block
@property (retain) id mostRecentResult;                              //@synthesize mostRecentResult=_mostRecentResult - In the implementation block
@property (retain) id<CNCancelable> delayToken;                      //@synthesize delayToken=_delayToken - In the implementation block
-(void)dealloc;
-(double)interval;
-(id<CNScheduler>)resourceLock;
-(id)initWithInterval:(double)arg1 observable:(id)arg2 schedulerProvider:(id)arg3 ;
-(id<CNScheduler>)observerScheduler;
-(CNObservable *)observable;
-(id<CNCancelable>)delayToken;
-(void)setMostRecentResult:(id)arg1 ;
-(void)observerScheduler_sendResultToObserver:(id)arg1 ;
-(void)setDelayToken:(id<CNCancelable>)arg1 ;
-(id)mostRecentResult;
-(id)subscribe:(id)arg1 ;
@end

