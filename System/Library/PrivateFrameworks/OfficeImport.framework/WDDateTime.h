/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties, NSDate;

@interface WDDateTime : WDRun {

	WDCharacterProperties* mProperties;
	NSDate* mDate;

}
-(void)dealloc;
-(id)description;
-(id)date;
-(void)setProperties:(id)arg1 ;
-(id)properties;
-(int)runType;
-(id)initWithParagraph:(id)arg1 date:(id)arg2 ;
-(void)clearProperties;
@end

