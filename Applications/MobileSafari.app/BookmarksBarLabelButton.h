/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@class WebBookmark;

@interface BookmarksBarLabelButton : UIButton {

	BOOL _usesLightControls;
	WebBookmark* _bookmark;

}

@property (nonatomic,retain) WebBookmark * bookmark;              //@synthesize bookmark=_bookmark - In the implementation block
@property (assign,nonatomic) BOOL usesLightControls;              //@synthesize usesLightControls=_usesLightControls - In the implementation block
+(id)labelButton;
-(void)setUsesLightControls:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)usesLightControls;
-(WebBookmark *)bookmark;
-(void)setBookmark:(WebBookmark *)arg1 ;
@end
