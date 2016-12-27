/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <SafariServices/_SFWebView.h>

@class NSTimer, UIImageView;

@interface SafariWebView : _SFWebView {

	NSTimer* _placeholderViewRemovalTimer;
	UIImageView* _placeholderView;
	UIEdgeInsets _hitTestInsets;

}

@property (assign,nonatomic) UIEdgeInsets hitTestInsets;              //@synthesize hitTestInsets=_hitTestInsets - In the implementation block
-(void)layoutSubviews;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setPlaceholderImage:(id)arg1 ;
-(void)_setObscuredInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)hitTestInsets;
-(void)setHitTestInsets:(UIEdgeInsets)arg1 ;
@end
