/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/LPCSSText.h>
#import <libobjc.A.dylib/NSCopying.h>

@class LPPointUnit;

@interface LPPadding : NSObject <LPCSSText, NSCopying> {

	LPPointUnit* _top;
	LPPointUnit* _leading;
	LPPointUnit* _bottom;
	LPPointUnit* _trailing;

}

@property (nonatomic,retain) LPPointUnit * top;                   //@synthesize top=_top - In the implementation block
@property (nonatomic,retain) LPPointUnit * leading;               //@synthesize leading=_leading - In the implementation block
@property (nonatomic,retain) LPPointUnit * bottom;                //@synthesize bottom=_bottom - In the implementation block
@property (nonatomic,retain) LPPointUnit * trailing;              //@synthesize trailing=_trailing - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(LPPointUnit *)leading;
-(void)setLeading:(LPPointUnit *)arg1 ;
-(LPPointUnit *)top;
-(LPPointUnit *)bottom;
-(void)setTop:(LPPointUnit *)arg1 ;
-(void)setBottom:(LPPointUnit *)arg1 ;
-(id)_lp_CSSText;
-(LPPointUnit *)trailing;
-(UIEdgeInsets)asInsetsForView:(id)arg1 ;
-(void)setTrailing:(LPPointUnit *)arg1 ;
@end

