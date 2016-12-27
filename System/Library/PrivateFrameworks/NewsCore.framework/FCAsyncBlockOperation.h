/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@interface FCAsyncBlockOperation : NSOperation {

	BOOL _executing;
	BOOL _finished;
	/*^block*/id _block;

}

@property (nonatomic,copy,readonly) id block;              //@synthesize block=_block - In the implementation block
+(id)asyncBlockOperationWithBlock:(/*^block*/id)arg1 ;
+(id)asyncBlockOperationWithMainThreadBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)block;
@end

