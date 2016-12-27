/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@interface SCRCStackQueue : NSObject {

	SCRCStackNode* _firstNode;
	SCRCStackNode* _lastNode;
	unsigned long long _count;

}
-(void)dealloc;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)description;
-(id)objectEnumerator;
-(BOOL)isEmpty;
-(void)enqueueObject:(id)arg1 ;
-(id)dequeueObject;
-(id)dequeueObjectRetained;
-(id)popObjectRetained;
-(void)pushArray:(id)arg1 ;
-(id)topObject;
-(void)pushObject:(id)arg1 ;
-(id)popObject;
@end

