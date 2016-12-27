/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDAdaptiveLayout
@required
-(void)beginDynamicAdaptiveLayout;
-(void)endDynamicAdaptiveLayout;
-(CGPoint*)adjustMappingPointForInfo:(id)arg1 fromPoint:(CGPoint)arg2;
-(BOOL)isSavedShiftForInfo:(id)arg1 equalToOffset:(CGPoint)arg2;
-(void)updateRootLayoutShiftFor:(id)arg1 offset:(CGPoint)arg2;
-(void)resetLayout:(id)arg1 forInfo:(id)arg2;
-(CGPoint*)applyAdaptiveLayoutTo:(id)arg1 info:(id)arg2 offset:(CGPoint)arg3;

@end

