/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFScheduler : NSObject
+(id)_globalAsyncSchedulerWithQualityOfService:(long long)arg1 ;
+(id)serialDispatchQueueSchedulerWithName:(id)arg1 ;
+(id)operationQueueSchedulerWithMaxConcurrentOperationCount:(unsigned long long)arg1 ;
+(id)mainThreadScheduler;
+(id)globalAsyncScheduler;
+(id)serialDispatchQueueSchedulerWithName:(id)arg1 qualityOfService:(long long)arg2 ;
+(id)immediateScheduler;
+(id)globalAsyncSchedulerWithQualityOfService:(long long)arg1 ;
@end

