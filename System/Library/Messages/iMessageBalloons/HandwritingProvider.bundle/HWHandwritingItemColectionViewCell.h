/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/HandwritingProvider.bundle/HandwritingProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HandwritingProvider/HandwritingProvider-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIView, UIImageView, UIButton, NSString;

@interface HWHandwritingItemColectionViewCell : UICollectionViewCell {

	BOOL _editing;
	BOOL _jitter;
	UIView* _highlightOverlayView;
	UIView* _borderView;
	UIImageView* _imageView;
	UIButton* _deleteButton;
	NSString* _uuidString;

}

@property (nonatomic,retain) UIView * highlightOverlayView;              //@synthesize highlightOverlayView=_highlightOverlayView - In the implementation block
@property (nonatomic,retain) UIView * borderView;                        //@synthesize borderView=_borderView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                    //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIButton * deleteButton;                    //@synthesize deleteButton=_deleteButton - In the implementation block
@property (assign,nonatomic) BOOL editing;                               //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) BOOL jitter;                                //@synthesize jitter=_jitter - In the implementation block
@property (copy) NSString * uuidString;                                  //@synthesize uuidString=_uuidString - In the implementation block
+(id)_jitterPositionAnimation;
+(id)_jitterTransformAnimation;
-(UIView *)borderView;
-(void)setUuidString:(NSString *)arg1 ;
-(UIView *)highlightOverlayView;
-(void)setHighlightOverlayView:(UIView *)arg1 ;
-(void)setBorderView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_commonInit;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)editing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIButton *)deleteButton;
-(void)setDeleteButton:(UIButton *)arg1 ;
-(void)setJitter:(BOOL)arg1 ;
-(BOOL)jitter;
-(NSString *)uuidString;
@end

