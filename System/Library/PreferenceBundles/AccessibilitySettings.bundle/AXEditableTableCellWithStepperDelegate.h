/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXEditableTableCellWithStepperDelegate <NSObject>
@optional
-(id)unitsStringForSpecifier:(id)arg1;
-(long long)keyboardTypeforSpecifier:(id)arg1;

@required
-(id)stringValueForSpecifier:(id)arg1;
-(double)minimumValueForSpecifier:(id)arg1;
-(void)specifier:(id)arg1 setValue:(double)arg2;
-(double)stepValueForSpecifier:(id)arg1;
-(double)maximumValueForSpecifier:(id)arg1;
-(double)valueForSpecifier:(id)arg1;

@end

