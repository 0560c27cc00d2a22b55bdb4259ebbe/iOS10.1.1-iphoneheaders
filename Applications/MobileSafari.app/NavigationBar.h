/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <SafariServices/_SFNavigationBar.h>

@class BrowserToolbar, UnifiedField;

@interface NavigationBar : _SFNavigationBar

@property (nonatomic,readonly) BrowserToolbar * toolbar; 
@property (nonatomic,readonly) UnifiedField * textField; 
-(BrowserToolbar *)toolbar;
-(UnifiedField *)textField;
-(double)URLFieldHorizontalMargin;
-(id)toolbarPlacedOnTop;
-(id)newTextField;
-(double)placeholderHorizontalInset;
-(void)setExpanded:(BOOL)arg1 textFieldSelectionRange:(NSRange)arg2 ;
-(void)setTextFieldPlaceHolderColor:(id)arg1 ;
-(void)updateToobarTintColor;
@end

