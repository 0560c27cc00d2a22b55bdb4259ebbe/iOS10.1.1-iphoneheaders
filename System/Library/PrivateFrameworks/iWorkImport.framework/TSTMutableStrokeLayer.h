/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTStrokeLayer.h>

@interface TSTMutableStrokeLayer : TSTStrokeLayer

@property (assign,nonatomic) unsigned short columnOrRowIndex; 
-(void)flattenStrokeOrder;
-(void)invalidateRange:(TSTSimpleRange)arg1 ;
-(void)setStroke:(id)arg1 inRange:(TSTSimpleRange)arg2 order:(int)arg3 ;
-(void)insertSpaceAtRange:(TSTSimpleRange)arg1 ;
-(void)removeRange:(TSTSimpleRange)arg1 ;
-(void)swapSegmentAtIndex:(long long)arg1 withSegmentAtIndex:(long long)arg2 ;
-(void)appendStroke:(id)arg1 inRange:(TSTSimpleRange)arg2 order:(int)arg3 ;
-(void)invalidate;
-(void)moveRange:(NSRange)arg1 toIndex:(long long)arg2 ;
@end
