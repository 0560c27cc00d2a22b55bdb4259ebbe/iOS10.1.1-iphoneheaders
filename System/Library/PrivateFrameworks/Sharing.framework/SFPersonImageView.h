/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>

@interface SFPersonImageView : UIImageView {

	BOOL _overlay;
	BOOL _darkStyle;
	BOOL _isDevice;

}

@property (assign,nonatomic) BOOL overlay;                //@synthesize overlay=_overlay - In the implementation block
@property (assign,nonatomic) BOOL darkStyle;              //@synthesize darkStyle=_darkStyle - In the implementation block
@property (assign,nonatomic) BOOL isDevice;               //@synthesize isDevice=_isDevice - In the implementation block
-(void)layoutSubviews;
-(void)setImage:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)overlay;
-(BOOL)darkStyle;
-(void)setOverlay:(BOOL)arg1 ;
-(void)setDarkStyle:(BOOL)arg1 ;
-(BOOL)isDevice;
-(void)setIsDevice:(BOOL)arg1 ;
-(id)initWithPersonImageView:(id)arg1 ;
@end

