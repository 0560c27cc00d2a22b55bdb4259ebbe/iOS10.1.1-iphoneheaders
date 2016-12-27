/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _PRMonogramFontSpec : NSObject {

	NSString* _fontName;
	double _baseSize;
	double _tracking;

}

@property (nonatomic,readonly) NSString * fontName;              //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,readonly) double baseSize;                  //@synthesize baseSize=_baseSize - In the implementation block
@property (nonatomic,readonly) double tracking;                  //@synthesize tracking=_tracking - In the implementation block
+(id)specForFontWithName:(id)arg1 baseSize:(double)arg2 tracking:(double)arg3 ;
-(NSString *)fontName;
-(double)tracking;
-(double)baseSize;
@end

