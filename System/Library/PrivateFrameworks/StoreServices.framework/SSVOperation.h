/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:38:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSOperation, NSMutableArray, NSObject, NSError;

@interface SSVOperation : NSOperation {

	NSOperation* _childOperation;
	NSMutableArray* _childRequests;
	NSObject*<OS_dispatch_queue> _serialQueue;
	BOOL _success;
	NSError* _error;

}

@property (assign,nonatomic) BOOL success;               //@synthesize success=_success - In the implementation block
@property (nonatomic,copy) NSError * error;              //@synthesize error=_error - In the implementation block
-(void)addChildRequest:(id)arg1 ;
-(void)removeChildRequest:(id)arg1 ;
-(id)init;
-(void)cancel;
-(void)setSuccess:(BOOL)arg1 ;
-(void)dispatchSync:(/*^block*/id)arg1 ;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(void)runChildOperation:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)success;
@end

