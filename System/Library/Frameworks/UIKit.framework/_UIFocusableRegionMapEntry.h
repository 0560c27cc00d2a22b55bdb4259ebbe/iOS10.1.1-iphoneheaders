/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIFocusRegionMapEntry.h>

@protocol _UILegacyFocusRegion;
@interface _UIFocusableRegionMapEntry : _UIFocusRegionMapEntry {

	BOOL _isFocusGuide;
	BOOL _focusCandidate;
	id<_UILegacyFocusRegion> _focusableRegion;

}

@property (assign,nonatomic,__weak) id<_UILegacyFocusRegion> focusableRegion;              //@synthesize focusableRegion=_focusableRegion - In the implementation block
@property (assign,nonatomic) BOOL isFocusGuide;                                            //@synthesize isFocusGuide=_isFocusGuide - In the implementation block
@property (assign,getter=isFocusCandidate,nonatomic) BOOL focusCandidate;                  //@synthesize focusCandidate=_focusCandidate - In the implementation block
-(id)description;
-(void)setFocusCandidate:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFocusableRegion:(id<_UILegacyFocusRegion>)arg1 ;
-(void)setIsFocusGuide:(BOOL)arg1 ;
-(id<_UILegacyFocusRegion>)focusableRegion;
-(BOOL)isFocusGuide;
-(void)drawVisualRepresentationInContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 isFinal:(BOOL)arg3 ;
-(id)visualRepresentationColor;
-(BOOL)isFocusCandidate;
@end

