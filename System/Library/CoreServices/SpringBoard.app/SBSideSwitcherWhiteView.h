/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBAppSwitcherPageContentView.h>
#import <SpringBoard/SBAppViewBackgroundView.h>

@class SBDisplayItem, NSString;

@interface SBSideSwitcherWhiteView : UIView <SBAppSwitcherPageContentView, SBAppViewBackgroundView> {

	SBDisplayItem* _displayItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long wallpaperStyle; 
-(id)initWithFrame:(CGRect)arg1 displayItem:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
@end

