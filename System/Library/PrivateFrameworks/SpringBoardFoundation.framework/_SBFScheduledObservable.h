/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBFObservable.h>

@protocol SBFObservable, SBFScheduler;
@interface _SBFScheduledObservable : SBFObservable {

	id<SBFObservable> _observable;
	id<SBFScheduler> _scheduler;

}
-(id)subscribe:(id)arg1 ;
-(id)initWithObservable:(id)arg1 scheduler:(id)arg2 ;
@end

