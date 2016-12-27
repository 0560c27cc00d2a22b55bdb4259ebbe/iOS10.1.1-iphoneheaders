/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <libobjc.A.dylib/CKAnimationTimerObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CKAttachmentCellDelegate;
@class UIImage, CKAnimatedImage, UIImageView, NSObject, CKAttachmentItem, NSArray, UITapGestureRecognizer, NSString;

@interface CKAttachmentCell : UICollectionViewCell <CKAnimationTimerObserver, UIGestureRecognizerDelegate> {

	BOOL _editing;
	BOOL _isIrisAsset;
	UIImage* _image;
	CKAnimatedImage* _animatedImage;
	UIImageView* _checkmarkView;
	NSObject*<CKAttachmentCellDelegate> _delegate;
	CKAttachmentItem* _representedObject;
	NSArray* _frames;
	UITapGestureRecognizer* _tapRecognizer;
	UIImageView* _irisBadgeView;

}

@property (nonatomic,copy) NSArray * frames;                                                   //@synthesize frames=_frames - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapRecognizer;                           //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (nonatomic,retain) UIImageView * irisBadgeView;                                      //@synthesize irisBadgeView=_irisBadgeView - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                  //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * iconImage; 
@property (nonatomic,retain) CKAnimatedImage * animatedImage;                                  //@synthesize animatedImage=_animatedImage - In the implementation block
@property (nonatomic,retain) UIImageView * checkmarkView;                                      //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CKAttachmentCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CKAttachmentItem * representedObject;                             //@synthesize representedObject=_representedObject - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                    //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) BOOL isIrisAsset;                                                 //@synthesize isIrisAsset=_isIrisAsset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setImage:(UIImage *)arg1 ;
-(void)setDelegate:(NSObject*<CKAttachmentCellDelegate>)arg1 ;
-(void)dealloc;
-(NSObject*<CKAttachmentCellDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UIImage *)image;
-(BOOL)isEditing;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)copy:(id)arg1 ;
-(void)delete:(id)arg1 ;
-(UIImage *)iconImage;
-(UIImageView *)checkmarkView;
-(CKAttachmentItem *)representedObject;
-(void)setRepresentedObject:(CKAttachmentItem *)arg1 ;
-(UITapGestureRecognizer *)tapRecognizer;
-(void)setIconImage:(UIImage *)arg1 ;
-(BOOL)isIrisAsset;
-(void)more:(id)arg1 ;
-(void)saveAttachment:(id)arg1 ;
-(void)setAnimatedImage:(CKAnimatedImage *)arg1 ;
-(void)setIsIrisAsset:(BOOL)arg1 ;
-(void)updateAnimationTimerObserving;
-(void)tapGestureRecognized:(id)arg1 ;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setCheckmarkView:(UIImageView *)arg1 ;
-(UIImageView *)irisBadgeView;
-(void)setFrames:(NSArray *)arg1 ;
-(CGImageRef)_cgImageForUIImage:(id)arg1 ;
-(NSArray *)frames;
-(void)setIrisBadgeView:(UIImageView *)arg1 ;
-(void)animationTimerFired:(unsigned long long)arg1 ;
-(CKAnimatedImage *)animatedImage;
@end

