/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextWrap.h>

@interface TSWPInteriorTextWrapController : NSObject <TSWPTextWrap>
+(id)sharedInteriorTextWrapController;
-(BOOL)checkForUnobstructedSpan:(CGRect)arg1 wrappableAttachments:(id)arg2 userInfo:(id)arg3 ;
-(id)beginWrappingToColumn:(id)arg1 target:(id)arg2 hasWrapables:(BOOL*)arg3 ;
-(double)nextUnobstructedSpanStartingAt:(CGRect)arg1 wrappableAttachments:(id)arg2 userInfo:(id)arg3 ;
-(unsigned)splitLine:(CGRect)arg1 lineSegmentRects:(out CGRect)arg2 wrappableAttachments:(id)arg3 ignoreFloatingGraphics:(BOOL)arg4 canvasCausedWrap:(out BOOL*)arg5 skipHint:(out double*)arg6 userInfo:(id)arg7 ;
@end

