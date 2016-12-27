/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CalendarUIKit/CalendarUIKit-Structs.h>
@interface CUIKCalendarApplicationIcon : NSObject
+(void)drawIconInContext:(CGContextRef)arg1 imageSize:(CGSize)arg2 iconBase:(id)arg3 date:(id)arg4 calendar:(id)arg5 format:(int)arg6 ;
+(id)_iconImageWithFormat:(int)arg1 square:(BOOL)arg2 outline:(BOOL)arg3 drawBlock:(/*^block*/id)arg4 ;
+(void)drawIconInContext:(CGContextRef)arg1 imageSize:(CGSize)arg2 iconBase:(id)arg3 dateComponents:(id)arg4 dateNameFormatType:(long long)arg5 format:(long long)arg6 showGrid:(BOOL)arg7 ;
+(double)_imageScaleForApplicationIconFormat:(int)arg1 ;
+(id)getUnmaskedIconImage:(int)arg1 ;
+(BOOL)formatSupportsDynamicIcon:(int)arg1 ;
+(int)_iconVariantForFormat:(int)arg1 scale:(double)arg2 outline:(BOOL)arg3 ;
+(id)croppedIconImage:(id)arg1 format:(int)arg2 ;
+(long long)dynamicIconFormat:(int)arg1 ;
+(long long)_iconDateNameFormatTypeForDate:(id)arg1 calendar:(id)arg2 format:(int)arg3 ;
+(id)_dayNumberStringFromDate:(id)arg1 calendar:(id)arg2 ;
+(id)_dateNameFromDate:(id)arg1 calendar:(id)arg2 type:(long long)arg3 style:(long long)arg4 ;
+(void)_drawIconInContext:(CGContextRef)arg1 imageSize:(CGSize)arg2 iconBase:(id)arg3 calendar:(id)arg4 dayNumberString:(id)arg5 dateNameBlock:(/*^block*/id)arg6 dateNameFormatType:(long long)arg7 format:(long long)arg8 showGrid:(BOOL)arg9 ;
+(id)_dayNumberStringFromDateComponents:(id)arg1 ;
+(id)_dateNameFromDateComponents:(id)arg1 type:(long long)arg2 style:(long long)arg3 ;
+(void)_fillContextWithWhiteBackgroundIfNeededForFormat:(long long)arg1 context:(CGContextRef)arg2 frame:(CGRect)arg3 ;
+(void)_drawGridInContext:(CGContextRef)arg1 size:(CGSize)arg2 ;
+(BOOL)_isDate:(id)arg1 withinPreviousWeekOfDate:(id)arg2 calendar:(id)arg3 ;
+(BOOL)_isDate:(id)arg1 withinNextWeekOfDate:(id)arg2 calendar:(id)arg3 ;
+(long long)_iconDateNameFormatTypeForNotificationsWithDate:(id)arg1 calendar:(id)arg2 ;
+(BOOL)_isWithinPreviousWeek:(id)arg1 calendar:(id)arg2 ;
+(BOOL)_isWithinNextWeek:(id)arg1 calendar:(id)arg2 ;
+(id)iconImageWithDateComponents:(id)arg1 dateNameFormatType:(long long)arg2 format:(int)arg3 square:(BOOL)arg4 showGrid:(BOOL)arg5 ;
+(id)iconImageWithDate:(id)arg1 calendar:(id)arg2 format:(int)arg3 outline:(BOOL)arg4 ;
+(id)iconImageWithDate:(id)arg1 calendar:(id)arg2 format:(int)arg3 ;
@end

