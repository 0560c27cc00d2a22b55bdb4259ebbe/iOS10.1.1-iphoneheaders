/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, NSArray;

@interface SteppingTransitArtworkView : UIView {

	double _preferredMaxLayoutWidth;
	NSMutableArray* _layoutConstraints;
	double _totalImageWidth;
	double _maxImageHeight;
	NSArray* _imageSources;

}

@property (nonatomic,retain) NSMutableArray * layoutConstraints;              //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (assign,nonatomic) double totalImageWidth;                          //@synthesize totalImageWidth=_totalImageWidth - In the implementation block
@property (assign,nonatomic) double maxImageHeight;                           //@synthesize maxImageHeight=_maxImageHeight - In the implementation block
@property (nonatomic,copy) NSArray * imageSources;                            //@synthesize imageSources=_imageSources - In the implementation block
@property (assign,nonatomic) double preferredMaxLayoutWidth;                  //@synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)setImageSources:(NSArray *)arg1 ;
-(double)totalImageWidth;
-(CGSize)sizeThatFitsWidth:(double)arg1 ;
-(void)_resetLayoutConstraints;
-(double)_totalImageWidthWithSpacing;
-(double)maxImageHeight;
-(void)resetConstraints;
-(void)setMaxImageHeight:(double)arg1 ;
-(void)setTotalImageWidth:(double)arg1 ;
-(NSArray *)imageSources;
-(double)_imageScaleFactorForAvailableWidth:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setPreferredMaxLayoutWidth:(double)arg1 ;
-(double)preferredMaxLayoutWidth;
-(void)_updateSubviews;
-(NSMutableArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSMutableArray *)arg1 ;
@end

