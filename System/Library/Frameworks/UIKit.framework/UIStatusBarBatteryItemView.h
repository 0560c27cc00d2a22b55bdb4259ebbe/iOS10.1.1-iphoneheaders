/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIStatusBarItemView.h>

@class UIView, _UILegibilityImageSet;

@interface UIStatusBarBatteryItemView : UIStatusBarItemView {

	int _capacity;
	int _state;
	BOOL _batterySaverModeActive;
	UIView* _accessoryView;
	BOOL _cachedImageHasAccessoryImage;
	int _cachedCapacity;
	_UILegibilityImageSet* _cachedImageSet;
	unsigned long long _cachedBatteryStyle;

}

@property (nonatomic,retain) _UILegibilityImageSet * cachedImageSet;              //@synthesize cachedImageSet=_cachedImageSet - In the implementation block
@property (assign,nonatomic) int cachedCapacity;                                  //@synthesize cachedCapacity=_cachedCapacity - In the implementation block
@property (assign,nonatomic) BOOL cachedImageHasAccessoryImage;                   //@synthesize cachedImageHasAccessoryImage=_cachedImageHasAccessoryImage - In the implementation block
@property (assign,nonatomic) unsigned long long cachedBatteryStyle;               //@synthesize cachedBatteryStyle=_cachedBatteryStyle - In the implementation block
-(double)extraRightPadding;
-(id)contentsImage;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(double)legibilityStrength;
-(void)_updateAccessoryImage;
-(BOOL)_needsAccessoryImage;
-(_UILegibilityImageSet *)cachedImageSet;
-(int)cachedCapacity;
-(BOOL)cachedImageHasAccessoryImage;
-(unsigned long long)cachedBatteryStyle;
-(id)_accessoryImage;
-(CGSize)_batteryOffsetWithBackground:(id)arg1 ;
-(void)setCachedImageSet:(_UILegibilityImageSet *)arg1 ;
-(void)setCachedCapacity:(int)arg1 ;
-(void)setCachedImageHasAccessoryImage:(BOOL)arg1 ;
-(void)setCachedBatteryStyle:(unsigned long long)arg1 ;
-(id)_contentsImage;
@end
