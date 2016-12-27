/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKit/UIImageView.h>

@class UIImageView, UILabel, WebBookmark;

@interface _SFSiteIconView : UIImageView {

	UIImageView* _glyphView;
	UILabel* _monogramLabel;
	long long _state;
	id _touchIconRequestToken;
	WebBookmark* _bookmark;

}

@property (nonatomic,retain) WebBookmark * bookmark;              //@synthesize bookmark=_bookmark - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)_setState:(long long)arg1 ;
-(void)updateBookmarkData;
-(void)_cancelTouchIconRequest;
-(void)_updateMonogramLabelSizeAndFont;
-(void)_setSiteIcon:(id)arg1 ;
-(id)_tintedFolderImage;
-(void)_setGlyph:(id)arg1 withBackgroundColor:(id)arg2 ;
-(void)_updateSiteIconViewWithTouchIconResponse:(id)arg1 ;
-(void)_setMonogramWithString:(id)arg1 backgroundColor:(id)arg2 ;
-(long long)_inferredIconSize;
-(void)_clearGlyph;
-(WebBookmark *)bookmark;
-(void)setBookmark:(WebBookmark *)arg1 ;
@end
