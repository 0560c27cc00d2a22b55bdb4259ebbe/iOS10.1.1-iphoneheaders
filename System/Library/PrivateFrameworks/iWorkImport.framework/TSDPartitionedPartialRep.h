/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDRep.h>

@interface TSDPartitionedPartialRep : TSDRep
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(CGRect)layerFrameInScaledCanvas;
-(UIEdgeInsets)p_edgeInsetsForClipping;
-(CGRect)p_clipRect;
-(CGRect)p_convertBaseToNaturalRect:(CGRect)arg1 ;
-(CGImageRef)p_newImageForCachingBaseRep;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)willBeRemoved;
-(CGRect)clipRect;
@end

