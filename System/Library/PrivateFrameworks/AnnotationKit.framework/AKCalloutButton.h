/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKit/UIButton.h>

@class AKCalloutBar;

@interface AKCalloutButton : UIButton {

	int _position;
	AKCalloutBar* _bar;

}

@property (assign,nonatomic) int position;                           //@synthesize position=_position - In the implementation block
@property (assign,nonatomic,__weak) AKCalloutBar * bar;              //@synthesize bar=_bar - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPosition:(int)arg1 ;
-(int)position;
-(void)setHighlighted:(BOOL)arg1 ;
-(AKCalloutBar *)bar;
-(void)setBar:(AKCalloutBar *)arg1 ;
@end

