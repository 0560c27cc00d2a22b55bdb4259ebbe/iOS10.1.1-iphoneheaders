/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecCardSection.h>

@class NSArray, WBSParsecImageRepresentation;

@interface WBSParsecKeyValueDataCardSection : WBSParsecCardSection {

	NSArray* _keys;
	NSArray* _values;
	WBSParsecImageRepresentation* _accessoryImageRepresentation;

}

@property (nonatomic,copy,readonly) NSArray * keys;                                                           //@synthesize keys=_keys - In the implementation block
@property (nonatomic,copy,readonly) NSArray * values;                                                         //@synthesize values=_values - In the implementation block
@property (nonatomic,copy,readonly) WBSParsecImageRepresentation * accessoryImageRepresentation;              //@synthesize accessoryImageRepresentation=_accessoryImageRepresentation - In the implementation block
+(id)_specializedCardSectionSchema;
-(NSArray *)values;
-(NSArray *)keys;
-(id)_initWithDictionary:(id)arg1 ;
-(WBSParsecImageRepresentation *)accessoryImageRepresentation;
@end

