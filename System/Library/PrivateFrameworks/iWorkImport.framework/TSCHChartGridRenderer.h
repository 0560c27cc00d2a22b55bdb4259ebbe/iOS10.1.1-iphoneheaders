/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHRenderer.h>

@interface TSCHChartGridRenderer : TSCHRenderer
-(void)p_renderBackground:(CGContextRef)arg1 style:(id)arg2 ;
-(void)p_renderBackground:(CGContextRef)arg1 ;
-(void)p_renderGridlines:(CGContextRef)arg1 axis:(id)arg2 locations:(id)arg3 showProperty:(int)arg4 strokeProperty:(int)arg5 shadowProperty:(int)arg6 opacityProperty:(int)arg7 ;
-(void)p_renderIntoContext:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(id)init;
-(void)dealloc;
@end

