/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIMotionEffectGroup, UIView;

@interface _UIInterfaceActionRepresentationViewContext_AppleTV : NSObject {

	UIMotionEffectGroup* _installedHighlightedActionMotionEffectsGroup;
	BOOL _highlighted;
	UIView* _highlightTransformTargetView;

}

@property (assign,nonatomic,__weak) UIView * highlightTransformTargetView;              //@synthesize highlightTransformTargetView=_highlightTransformTargetView - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                          //@synthesize highlighted=_highlighted - In the implementation block
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithHighlightTransformTargetView:(id)arg1 ;
-(BOOL)highlighted;
-(void)_applyHighlightTransform;
-(CATransform3D)_enlargedTransformForSize:(CGSize)arg1 ;
-(void)_insertMotionEffects;
-(void)_removeMotionEffects;
-(id)_newMotionEffectsGroupForHighlightedAction;
-(UIView *)highlightTransformTargetView;
-(void)setHighlightTransformTargetView:(UIView *)arg1 ;
@end

