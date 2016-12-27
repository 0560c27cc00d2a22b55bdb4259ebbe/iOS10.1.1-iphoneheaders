/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIStatusBarStyleRequest, UIStatusBarForegroundStyleAttributes;

@interface UIStatusBarStyleAttributes : NSObject <NSCopying> {

	UIStatusBarStyleRequest* _request;
	UIStatusBarForegroundStyleAttributes* _foregroundStyle;
	BOOL _pulsingAnimationEnabled;

}

@property (assign,nonatomic) double foregroundAlpha; 
@property (assign,getter=isPulsingAnimationEnabled,nonatomic) BOOL pulsingAnimationEnabled;              //@synthesize pulsingAnimationEnabled=_pulsingAnimationEnabled - In the implementation block
-(id)init;
-(BOOL)isTranslucent;
-(double)heightForOrientation:(long long)arg1 ;
-(long long)style;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)foregroundStyle;
-(BOOL)isDoubleHeight;
-(long long)idiom;
-(BOOL)shouldShowInternalItemType:(int)arg1 withScreenCapabilities:(id)arg2 ;
-(double)heightForMetrics:(long long)arg1 ;
-(BOOL)isLockScreen;
-(id)initWithRequest:(id)arg1 ;
-(long long)legibilityStyle;
-(BOOL)isTransparent;
-(BOOL)shouldUseVisualAltitude;
-(id)backgroundColorWithTintColor:(id)arg1 ;
-(id)newForegroundStyleWithHeight:(double)arg1 ;
-(void)setPulsingAnimationEnabled:(BOOL)arg1 ;
-(double)foregroundAlpha;
-(void)setForegroundAlpha:(double)arg1 ;
-(BOOL)usesVerticalLayout;
-(BOOL)supportsRasterization;
-(int)cornerStyle;
-(BOOL)areTopCornersRounded;
-(id)backgroundImageName;
-(double)glowAnimationDuration;
-(long long)tapButtonType;
-(BOOL)isPulsingAnimationEnabled;
@end

