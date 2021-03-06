/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateModularSmallStackText : CLKComplicationTemplate {

	CLKTextProvider* _line1TextProvider;
	CLKTextProvider* _line2TextProvider;
	unsigned long long _highlightMode;

}

@property (assign,nonatomic) unsigned long long highlightMode;               //@synthesize highlightMode=_highlightMode - In the implementation block
@property (nonatomic,copy) CLKTextProvider * line1TextProvider;              //@synthesize line1TextProvider=_line1TextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * line2TextProvider;              //@synthesize line2TextProvider=_line2TextProvider - In the implementation block
@property (assign,nonatomic) BOOL highlightLine2; 
-(CLKTextProvider *)line1TextProvider;
-(CLKTextProvider *)line2TextProvider;
-(unsigned long long)highlightMode;
-(void)setHighlightMode:(unsigned long long)arg1 ;
-(void)setLine2TextProvider:(CLKTextProvider *)arg1 ;
-(void)setLine1TextProvider:(CLKTextProvider *)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
-(id)_initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2 ;
-(id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1 ;
-(void)setHighlightLine2:(BOOL)arg1 ;
-(BOOL)highlightLine2;
@end

