/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecCardSection.h>

@class NSString, NSNumber, WBSParsecImageRepresentation;

@interface WBSParsecDescriptionCardSection : WBSParsecCardSection {

	BOOL _titleTextCanWrap;
	BOOL _descriptionCanBeExpanded;
	NSString* _titleText;
	NSNumber* _titleWeight;
	NSString* _descriptionText;
	NSNumber* _descriptionMaximumNumberOfLines;
	NSNumber* _descriptionSize;
	NSNumber* _descriptionWeight;
	NSString* _descriptionExpandText;
	WBSParsecImageRepresentation* _image;
	long long _imageAlignment;

}

@property (nonatomic,copy,readonly) NSString * titleText;                               //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,readonly) BOOL titleTextCanWrap;                                   //@synthesize titleTextCanWrap=_titleTextCanWrap - In the implementation block
@property (nonatomic,readonly) NSNumber * titleWeight;                                  //@synthesize titleWeight=_titleWeight - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptionText;                         //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,readonly) NSNumber * descriptionMaximumNumberOfLines;              //@synthesize descriptionMaximumNumberOfLines=_descriptionMaximumNumberOfLines - In the implementation block
@property (nonatomic,readonly) NSNumber * descriptionSize;                              //@synthesize descriptionSize=_descriptionSize - In the implementation block
@property (nonatomic,readonly) NSNumber * descriptionWeight;                            //@synthesize descriptionWeight=_descriptionWeight - In the implementation block
@property (nonatomic,readonly) BOOL descriptionCanBeExpanded;                           //@synthesize descriptionCanBeExpanded=_descriptionCanBeExpanded - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptionExpandText;                   //@synthesize descriptionExpandText=_descriptionExpandText - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * image;                    //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) long long imageAlignment;                                //@synthesize imageAlignment=_imageAlignment - In the implementation block
+(id)_specializedCardSectionSchema;
-(WBSParsecImageRepresentation *)image;
-(id)_initWithDictionary:(id)arg1 ;
-(NSString *)titleText;
-(NSString *)descriptionText;
-(BOOL)titleTextCanWrap;
-(NSNumber *)titleWeight;
-(NSNumber *)descriptionMaximumNumberOfLines;
-(NSNumber *)descriptionSize;
-(NSNumber *)descriptionWeight;
-(BOOL)descriptionCanBeExpanded;
-(NSString *)descriptionExpandText;
-(long long)imageAlignment;
@end

