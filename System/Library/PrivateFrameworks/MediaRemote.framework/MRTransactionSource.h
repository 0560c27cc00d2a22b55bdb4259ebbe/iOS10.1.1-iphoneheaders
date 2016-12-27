/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaRemote/MediaRemote-Structs.h>
@class NSObject, NSMutableDictionary;

@interface MRTransactionSource : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _originSources;
	unsigned long long _name;

}

@property (nonatomic,readonly) unsigned long long name;                  //@synthesize name=_name - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
-(void)dealloc;
-(BOOL)isActive;
-(unsigned long long)name;
-(id)initWithName:(unsigned long long)arg1 ;
-(void)removeOrigin:(MROriginRef)arg1 ;
-(void)sendPackets:(id)arg1 forOrigin:(MROriginRef)arg2 ;
@end

