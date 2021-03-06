/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecCardSection.h>

@class NSString;

@interface WBSParsecTitleCardSection : WBSParsecCardSection {

	NSString* _titleText;
	NSString* _subtitleText;

}

@property (nonatomic,copy,readonly) NSString * titleText;                 //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitleText;              //@synthesize subtitleText=_subtitleText - In the implementation block
+(id)_specializedCardSectionSchema;
-(id)_initWithDictionary:(id)arg1 ;
-(NSString *)titleText;
-(NSString *)subtitleText;
@end

