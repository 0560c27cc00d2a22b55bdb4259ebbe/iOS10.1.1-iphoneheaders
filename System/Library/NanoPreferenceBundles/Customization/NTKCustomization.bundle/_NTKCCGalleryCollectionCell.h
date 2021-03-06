/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/NTKCustomization.bundle/NTKCustomization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NTKCustomization/NTKCustomization-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class NTKCCFaceContainerView, UIView, UILabel, UIImageView, NSString, UIImage;

@interface _NTKCCGalleryCollectionCell : UICollectionViewCell {

	NTKCCFaceContainerView* _faceContainerView;
	UIView* _highlightedView;
	UILabel* _nameLabel;
	UIImageView* _nameImageView;
	BOOL _active;
	NSString* _calloutName;
	UIImage* _calloutImage;

}

@property (nonatomic,retain) UIView * faceView; 
@property (nonatomic,copy) NSString * calloutName;                //@synthesize calloutName=_calloutName - In the implementation block
@property (nonatomic,retain) UIImage * calloutImage;              //@synthesize calloutImage=_calloutImage - In the implementation block
@property (assign,nonatomic) BOOL active;                         //@synthesize active=_active - In the implementation block
+(CGSize)itemSizeWithCalloutName:(BOOL)arg1 andCalloutImage:(BOOL)arg2 ;
+(id)reuseIdentifier;
-(void)setFaceView:(UIView *)arg1 ;
-(void)_highlight;
-(void)setCalloutImage:(UIImage *)arg1 ;
-(void)setCalloutName:(NSString *)arg1 ;
-(UIImage *)calloutImage;
-(NSString *)calloutName;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(UIView *)faceView;
@end

