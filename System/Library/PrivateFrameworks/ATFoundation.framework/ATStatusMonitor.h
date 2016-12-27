/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, NSMapTable, NSMutableSet, NSMutableDictionary;

@interface ATStatusMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _statusQueue;
	NSHashTable* _statusObservers;
	NSMapTable* _observerDataClasses;
	NSMutableSet* _statuses;
	NSMutableDictionary* _statusDictionary;

}
+(id)sharedMonitor;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)allStatus;
-(void)setDataClasses:(id)arg1 forObserver:(id)arg2 ;
-(void)updateStatusWithValue:(id)arg1 forKey:(id)arg2 ;
-(void)updateStatus:(id)arg1 ;
-(void)updateStatusValuesWithDictionary:(id)arg1 ;
-(void)updateAssets:(id)arg1 ;
@end

