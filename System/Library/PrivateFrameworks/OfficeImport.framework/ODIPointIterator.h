/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface ODIPointIterator : NSObject
+(id)processAttributes:(id)arg1 startingPoint:(id)arg2 isLast:(BOOL)arg3 ;
+(id)pointsForSpecification:(id)arg1 startingPoint:(id)arg2 isLast:(BOOL)arg3 ;
+(void)processSelfAxisFromPoint:(id)arg1 state:(ODIPointIteratorState*)arg2 ;
+(void)processChildAxisFromPoint:(id)arg1 state:(ODIPointIteratorState*)arg2 ;
+(void)processFollowingSiblingAxisFromPoint:(id)arg1 state:(ODIPointIteratorState*)arg2 ;
+(BOOL)isDoneForState:(ODIPointIteratorState*)arg1 ;
+(BOOL)isPoint:(id)arg1 ofType:(int)arg2 ;
+(BOOL)addPoint:(id)arg1 state:(ODIPointIteratorState*)arg2 ;
@end

