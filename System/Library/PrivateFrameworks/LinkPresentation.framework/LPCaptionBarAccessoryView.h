/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>

@class UIView;

@interface LPCaptionBarAccessoryView : LPComponentView {

	long long _type;
	CGSize _size;
	UIView* _accessoryView;
	BOOL _shouldFlipHorizontally;

}

@property (nonatomic,readonly) CGSize size;              //@synthesize size=_size - In the implementation block
-(id)init;
-(CGSize)size;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutComponentView;
-(void)componentViewDidMoveToWindow;
-(id)_createImageViewWithImage:(id)arg1 ;
-(id)initWithType:(long long)arg1 side:(long long)arg2 ;
@end

