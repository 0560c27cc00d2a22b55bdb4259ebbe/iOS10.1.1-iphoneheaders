/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableArray;

@interface VCDispatchQueue : NSObject {

	opaque_pthread_mutex_t _lock;
	NSMutableArray* _rootQueues;

}
+(id)defaultManager;
-(id)init;
-(void)dealloc;
-(id)getCustomRootQueueWithPriority:(int)arg1 isFixedPriority:(BOOL)arg2 ;
@end

