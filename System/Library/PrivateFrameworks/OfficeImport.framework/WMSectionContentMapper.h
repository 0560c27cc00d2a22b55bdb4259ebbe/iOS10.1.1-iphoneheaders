/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class WDText;

@interface WMSectionContentMapper : CMMapper {

	WDText* wdText;

}
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithWDText:(id)arg1 parent:(id)arg2 ;
-(void)updateTextFrameState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)mapTextFrameAt:(id)arg1 withState:(id)arg2 ;
-(id)paragraphAtIndex:(unsigned long long)arg1 ;
-(void)mapTextFrameStyleTo:(id)arg1 withState:(id)arg2 ;
@end

