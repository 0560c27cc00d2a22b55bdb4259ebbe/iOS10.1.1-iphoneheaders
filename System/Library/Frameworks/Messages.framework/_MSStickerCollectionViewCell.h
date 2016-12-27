/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>

@protocol MSSticker;
@class MSStickerView, CALayer;

@interface _MSStickerCollectionViewCell : UICollectionViewCell {

	MSStickerView* _stickerView;
	id<MSSticker> _sticker;
	CALayer* _borderLayer;

}

@property (nonatomic,retain) CALayer * borderLayer;                      //@synthesize borderLayer=_borderLayer - In the implementation block
@property (nonatomic,retain) id<MSSticker> sticker;                      //@synthesize sticker=_sticker - In the implementation block
@property (nonatomic,readonly) MSStickerView * stickerView;              //@synthesize stickerView=_stickerView - In the implementation block
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setAnimating:(BOOL)arg1 ;
-(MSStickerView *)stickerView;
-(void)setSticker:(id<MSSticker>)arg1 ;
-(CALayer *)borderLayer;
-(void)showCellBorder:(BOOL)arg1 ;
-(id<MSSticker>)sticker;
-(void)setBorderLayer:(CALayer *)arg1 ;
@end

