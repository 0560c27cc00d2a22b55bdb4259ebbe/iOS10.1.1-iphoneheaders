/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableArray, NSMutableOrderedSet;

@interface DownloadErrorController : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableArray* _errors;
	NSMutableOrderedSet* _scheduledErrors;
	NSObject*<OS_dispatch_source> _scheduledErrorTimer;

}
+(id)sharedErrorController;
-(void)showDownloadError:(id)arg1 ;
-(void)_cancelErrorsPassingTest:(/*^block*/id)arg1 ;
-(void)_scheduleErrorDisplay:(id)arg1 ;
-(void)_displayScheduledErrors;
-(void)cancelDialogsWithDownloadIdentifier:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_networkTypeChangedNotification:(id)arg1 ;
@end

