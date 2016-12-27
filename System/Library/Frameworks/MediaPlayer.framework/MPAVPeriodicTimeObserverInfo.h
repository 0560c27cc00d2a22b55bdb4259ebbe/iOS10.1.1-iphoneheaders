/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSObject;

@interface MPAVPeriodicTimeObserverInfo : NSObject {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;
	SCD_Struct_MP12 _interval;

}

@property (nonatomic,copy,readonly) id block;                                   //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MP12 interval;                        //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(SCD_Struct_MP12)interval;
-(id)initWithInterval:(SCD_Struct_MP12)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)block;
@end

