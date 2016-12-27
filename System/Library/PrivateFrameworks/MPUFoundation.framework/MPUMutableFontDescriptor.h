/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <MPUFoundation/MPUFontDescriptor.h>

@interface MPUMutableFontDescriptor : MPUFontDescriptor

@property (assign,nonatomic) long long textStyle; 
@property (assign,nonatomic) double systemFontSize; 
@property (assign,nonatomic) long long weight; 
@property (assign,nonatomic) long long leadingAdjustment; 
@property (assign,nonatomic) BOOL usesItalic; 
@property (assign,nonatomic) BOOL wantsMonospaceNumbers; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTextStyle:(long long)arg1 ;
-(void)setWeight:(long long)arg1 ;
-(void)setLeadingAdjustment:(long long)arg1 ;
-(void)setSystemFontSize:(double)arg1 ;
-(void)_resetToDefaultValues;
-(id)_copyAllowingGlobalCacheLookup:(BOOL)arg1 ;
-(void)setUsesItalic:(BOOL)arg1 ;
-(void)setWantsMonospaceNumbers:(BOOL)arg1 ;
@end

