/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDynamicBehavior.h>

@class UIAttachmentBehavior;

@interface _UISpringBehavior : UIDynamicBehavior {

	UIAttachmentBehavior* _topLeft;
	UIAttachmentBehavior* _topRight;
	UIAttachmentBehavior* _bottomRight;
	UIAttachmentBehavior* _bottomLeft;
	double _damping;
	double _frequency;
	CGPoint _anchorPoint;

}

@property (assign,nonatomic) CGPoint anchorPoint;              //@synthesize anchorPoint=_anchorPoint - In the implementation block
@property (assign,nonatomic) double damping;                   //@synthesize damping=_damping - In the implementation block
@property (assign,nonatomic) double frequency;                 //@synthesize frequency=_frequency - In the implementation block
-(id)init;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(void)setDamping:(double)arg1 ;
-(CGPoint)anchorPoint;
-(double)damping;
-(double)frequency;
-(void)setFrequency:(double)arg1 ;
-(id)initWithItem:(id)arg1 anchorPoint:(CGPoint)arg2 ;
@end

