/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel, NSNumberFormatter;

@interface PLSyncProgressView : UIView {

	UIActivityIndicatorView* _spinner;
	UILabel* _infoLabel;
	NSNumberFormatter* _countFormatter;
	int _style;
	int _progressType;
	unsigned long long _currentCount;
	unsigned long long _totalCount;

}

@property (nonatomic,readonly) int style;                                    //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) int progressType;                             //@synthesize progressType=_progressType - In the implementation block
@property (nonatomic,readonly) unsigned long long currentCount;              //@synthesize currentCount=_currentCount - In the implementation block
@property (nonatomic,readonly) unsigned long long totalCount;                //@synthesize totalCount=_totalCount - In the implementation block
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)style;
-(CGSize)intrinsicContentSize;
-(id)initWithStyle:(int)arg1 ;
-(unsigned long long)currentCount;
-(id)_progressDescription;
-(int)progressType;
-(void)setCurrentCount:(unsigned long long)arg1 totalCount:(unsigned long long)arg2 progressType:(int)arg3 ;
-(unsigned long long)totalCount;
@end

