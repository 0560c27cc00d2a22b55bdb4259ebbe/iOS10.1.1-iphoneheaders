/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosExtras/VideosExtras-Structs.h>
#import <UIKit/UIViewController.h>

@class NSArray, IKImageElement, MPUArtworkView, NSTimer, UIImageView;

@interface VideosExtrasBackgroundViewController : UIViewController {

	NSArray* _backgroundElements;
	IKImageElement* _displayedImageElement;
	NSArray* _imageConstraints;
	MPUArtworkView* _imageView;
	NSTimer* _updateTimer;
	UIImageView* _vignetteView;
	unsigned long long _vignetteType;

}

@property (nonatomic,readonly) NSArray * backgroundElements;               //@synthesize backgroundElements=_backgroundElements - In the implementation block
@property (assign,nonatomic) unsigned long long vignetteType;              //@synthesize vignetteType=_vignetteType - In the implementation block
+(id)vignetteImageForType:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_updateImage;
-(void)_invalidateTimer;
-(void)setVignetteType:(unsigned long long)arg1 ;
-(void)_initVignette;
-(void)_scheduleTimerIfNeeded;
-(void)_didReceiveImage:(id)arg1 ;
-(void)_updateConstraintsForImageSize:(CGSize)arg1 position:(unsigned long long)arg2 ;
-(id)initWithBackgroundElement:(id)arg1 ;
-(id)initWithBackgroundElements:(id)arg1 ;
-(NSArray *)backgroundElements;
-(unsigned long long)vignetteType;
@end

