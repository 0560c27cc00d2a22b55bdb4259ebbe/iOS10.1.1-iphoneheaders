/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSMutableArray;

@interface TSUAggregateEnumerator : NSEnumerator {

	NSMutableArray* _objects;

}
+(id)aggregateEnumeratorWithObjects:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)addObject:(id)arg1 ;
-(id)initWithObjects:(id)arg1 ;
-(id)nextObject;
-(id)initWithFirstObject:(id)arg1 argumentList:(char*)arg2 ;
@end

