/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <Social/SLSheetImagePreviewView.h>

@class UIImage, SLURLPreviewGenerator, UIView, UIImageView;

@interface SLSheetURLPreviewView : SLSheetImagePreviewView {

	UIImage* _shadowImage;
	SLURLPreviewGenerator* _webPreviewGenerator;
	UIView* _placeholderPreviewView;
	UIImageView* _placeholderGlyphView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)setImage:(id)arg1 ;
-(BOOL)generatePreviewImageFromAttachments;
-(void)ensurePlaceholderPreviewImage;
-(void)_generateAutomaticPreviewForURL:(id)arg1 ;
@end

