/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/AccountsUI-Structs.h>
#import <UIKit/UIButton.h>

@class NSString;

@interface ACUILinkButton : UIButton {

	NSString* _acui_titleString;

}

@property (retain) NSString * acui_titleString;              //@synthesize acui_titleString=_acui_titleString - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setAcui_titleString:(NSString *)arg1 ;
-(id)_normalStringAttributes;
-(id)_highlightedStringAttributes;
-(NSString *)acui_titleString;
-(id)initWithText:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
@end

