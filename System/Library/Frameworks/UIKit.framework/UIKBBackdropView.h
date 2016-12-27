/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIBackdropView.h>

@class NSMutableArray, UIImage;

@interface UIKBBackdropView : _UIBackdropView {

	BOOL _primaryBackdrop;
	NSMutableArray* _secondaryBackdrops;
	BOOL _hasUpdatedFrame;
	UIImage* _imageForCorners;

}

@property (nonatomic,readonly) BOOL _hasUpdatedFrame;                //@synthesize hasUpdatedFrame=_hasUpdatedFrame - In the implementation block
@property (nonatomic,retain) UIImage * imageForCorners;              //@synthesize imageForCorners=_imageForCorners - In the implementation block
+(id)unconditionalTriggerNotificationNames;
+(void)overlayRelevantSettings:(id)arg1 ontoSettings:(id)arg2 ;
+(id)triggerNotificationNames;
+(void)_registerSecondaryBackdropView:(id)arg1 ;
+(void)_unregisterSecondaryBackdropView:(id)arg1 ;
+(void)_updatedSecondaryBackdropsWithSettings:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)applySettings:(id)arg1 ;
-(void)triggerUpdate:(id)arg1 ;
-(id)_generateCornerContentsImage:(int)arg1 ;
-(void)transitionToStyle:(long long)arg1 ;
-(void)_setRenderConfig:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 primaryBackdrop:(BOOL)arg3 ;
-(void)updateFrame:(CGRect)arg1 withCorners:(int)arg2 ;
-(void)setImageForCorners:(UIImage *)arg1 ;
-(int)textEffectsVisibilityLevel;
-(void)willCallRenderInContextOnBackdropViewLayer;
-(void)didCallRenderInContextOnBackdropViewLayer;
-(BOOL)_hasUpdatedFrame;
-(UIImage *)imageForCorners;
@end

