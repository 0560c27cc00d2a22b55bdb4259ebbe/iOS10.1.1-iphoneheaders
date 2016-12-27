/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UITextFieldRoundedRectBackgroundViewNeue.h>

@interface _UISearchBarSearchFieldBackgroundView : _UITextFieldRoundedRectBackgroundViewNeue {

	BOOL _backgroundContainer;
	long long _barStyle;
	unsigned long long _searchBarStyle;

}

@property (assign,nonatomic) long long barStyle;                             //@synthesize barStyle=_barStyle - In the implementation block
@property (assign,nonatomic) unsigned long long searchBarStyle;              //@synthesize searchBarStyle=_searchBarStyle - In the implementation block
@property (assign,nonatomic) BOOL backgroundContainer;                       //@synthesize backgroundContainer=_backgroundContainer - In the implementation block
-(void)setCornerRadius:(double)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(long long)barStyle;
-(id)initWithFrame:(CGRect)arg1 active:(BOOL)arg2 ;
-(id)_strokeColor:(BOOL)arg1 ;
-(id)_fillColor:(BOOL)arg1 ;
-(void)updateView;
-(void)setSearchBarStyle:(unsigned long long)arg1 ;
-(void)setBackgroundContainer:(BOOL)arg1 ;
-(unsigned long long)searchBarStyle;
-(id)initWithFrame:(CGRect)arg1 active:(BOOL)arg2 updateView:(BOOL)arg3 ;
-(BOOL)backgroundContainer;
@end

