/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FitnessFriends.framework/FitnessFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/IDSBatchIDQueryControllerDelegate.h>

@protocol OS_dispatch_source;
@class NSSet, NSMutableSet, IDSBatchIDQueryController, NSObject, NSMutableDictionary, FFReachabilityStatusCache, NSString;

@interface FFReachabilityQueryOperation : NSOperation <IDSBatchIDQueryControllerDelegate> {

	BOOL _finished;
	BOOL _executing;
	NSSet* _destinations;
	NSMutableSet* _remainingDestinations;
	IDSBatchIDQueryController* _batchQueryController;
	NSObject*<OS_dispatch_source> timer;
	NSMutableDictionary* _rawIDSDestinationToOriginalDestination;
	NSMutableDictionary* _results;
	/*^block*/id _updateHandler;
	/*^block*/id _completionHandler;
	FFReachabilityStatusCache* _statusCache;
	NSString* _serviceIdentifier;

}

@property (nonatomic,copy) id updateHandler;                                              //@synthesize updateHandler=_updateHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                                          //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic,__weak) FFReachabilityStatusCache * statusCache;              //@synthesize statusCache=_statusCache - In the implementation block
@property (nonatomic,copy) NSSet * destinations;                                          //@synthesize destinations=_destinations - In the implementation block
@property (nonatomic,retain) NSString * serviceIdentifier;                                //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)start;
-(NSSet *)destinations;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)finish;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(BOOL)isAsynchronous;
-(BOOL)isConcurrent;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(void)setDestinations:(NSSet *)arg1 ;
-(void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2 ;
-(NSString *)serviceIdentifier;
-(void)_queryTimedOut;
-(FFReachabilityStatusCache *)statusCache;
-(void)setStatusCache:(FFReachabilityStatusCache *)arg1 ;
-(BOOL)isReady;
@end

