/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIImageView.h>

@class NSArray;

@interface MusicUberArtworkView : UIImageView {

	CGRect _focusRect;
	NSArray* _focusRegions;

}

@property (nonatomic,copy) NSArray * focusRegions;              //@synthesize focusRegions=_focusRegions - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setImage:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(NSArray *)focusRegions;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
-(void)setFocusRegions:(NSArray *)arg1 ;
-(void)_musicArtworkViewCommonInitialization;
-(void)_updateFocusRect;
@end

