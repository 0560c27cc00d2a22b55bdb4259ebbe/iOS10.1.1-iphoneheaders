/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue;

@interface MCDGlobalQueueManager : NSObject {

	NSOperationQueue* _globalQueue;

}

@property (nonatomic,retain) NSOperationQueue * globalQueue;              //@synthesize globalQueue=_globalQueue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSOperationQueue *)globalQueue;
-(void)setGlobalQueue:(NSOperationQueue *)arg1 ;
@end
