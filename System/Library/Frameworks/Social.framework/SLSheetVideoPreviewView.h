/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <Social/SLSheetImagePreviewView.h>

@class UIView, UIImageView, UILabel;

@interface SLSheetVideoPreviewView : SLSheetImagePreviewView {

	UIView* _infoBar;
	UIImageView* _videoGlyphView;
	UILabel* _durationLabel;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setVideoDuration:(double)arg1 ;
-(void)_applyConstraints;
@end

