/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/_SBFakeBlur.h>

@protocol _SBFakeBlurObserver;
@class SBFWallpaperView, UIImageView, NSString;

@interface _SBFakeBlurView : UIView <_SBFakeBlur> {

	unsigned long long _transformOptions;
	long long _requestedStyle;
	long long _effectiveStyle;
	SBFWallpaperView* _wallpaperView;
	BOOL _fullscreen;
	UIImageView* _imageView;
	id<_SBFakeBlurObserver> _observer;

}

@property (nonatomic,readonly) long long variant; 
@property (assign,nonatomic) BOOL fullscreen;                                  //@synthesize fullscreen=_fullscreen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<_SBFakeBlurObserver> observer;                 //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) unsigned long long transformOptions;              //@synthesize transformOptions=_transformOptions - In the implementation block
+(id)_imageForStyle:(inout long long*)arg1 withSource:(id)arg2 ;
-(id)initWithVariant:(long long)arg1 ;
-(void)reconfigureWithSource:(id)arg1 ;
-(void)updateImageWithSource:(id)arg1 ;
-(void)rotateToInterfaceOrientation:(long long)arg1 ;
-(void)_updateImageWithSource:(id)arg1 notifyObserver:(BOOL)arg2 ;
-(void)_setImage:(id)arg1 style:(long long)arg2 notify:(BOOL)arg3 ;
-(long long)effectiveStyle;
-(void)offsetWallpaperBy:(CGPoint)arg1 ;
-(BOOL)fullscreen;
-(void)layoutSubviews;
-(void)dealloc;
-(void)didMoveToWindow;
-(NSString *)description;
-(void)willMoveToWindow:(id)arg1 ;
-(void)requestStyle:(long long)arg1 ;
-(void)setObserver:(id<_SBFakeBlurObserver>)arg1 ;
-(id<_SBFakeBlurObserver>)observer;
-(void)setFullscreen:(BOOL)arg1 ;
-(void)setTransformOptions:(unsigned long long)arg1 ;
-(unsigned long long)transformOptions;
-(long long)variant;
@end

