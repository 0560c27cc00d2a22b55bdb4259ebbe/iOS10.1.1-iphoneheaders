/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <UIKit/UIImageView.h>

@class UIView;

@interface SFAirDropActiveIconView : UIImageView {

	UIView* _circleMaskView;
	BOOL _masked;

}

@property (assign,getter=isMasked,nonatomic) BOOL masked;              //@synthesize masked=_masked - In the implementation block
+(id)baseImage;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 grayscale:(BOOL)arg2 ;
-(void)setMasked:(BOOL)arg1 ;
-(BOOL)isMasked;
@end

