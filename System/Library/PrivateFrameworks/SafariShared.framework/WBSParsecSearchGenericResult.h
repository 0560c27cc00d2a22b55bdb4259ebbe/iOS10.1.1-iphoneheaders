/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecSearchResult.h>

@class WBSParsecActionButton, NSNumber, NSArray, NSString, WBSParsecImageRepresentation, WBSParsecAuxiliaryInfo;

@interface WBSParsecSearchGenericResult : WBSParsecSearchResult {

	WBSParsecActionButton* _actionButton;
	NSNumber* _titleMaximumLines;
	NSArray* _descriptionRichTexts;
	NSString* _footnote;
	NSString* _secondaryTitle;
	WBSParsecImageRepresentation* _secondaryTitleGlyph;
	WBSParsecAuxiliaryInfo* _auxiliaryInfo;
	NSArray* _rowSections;
	WBSParsecImageRepresentation* _thumbnail;

}

@property (nonatomic,readonly) NSNumber * titleMaximumLines;                                    //@synthesize titleMaximumLines=_titleMaximumLines - In the implementation block
@property (nonatomic,copy,readonly) NSArray * descriptionRichTexts;                             //@synthesize descriptionRichTexts=_descriptionRichTexts - In the implementation block
@property (nonatomic,copy,readonly) NSString * footnote;                                        //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,copy,readonly) NSString * secondaryTitle;                                  //@synthesize secondaryTitle=_secondaryTitle - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * secondaryTitleGlyph;              //@synthesize secondaryTitleGlyph=_secondaryTitleGlyph - In the implementation block
@property (nonatomic,readonly) WBSParsecAuxiliaryInfo * auxiliaryInfo;                          //@synthesize auxiliaryInfo=_auxiliaryInfo - In the implementation block
@property (nonatomic,readonly) NSArray * rowSections;                                           //@synthesize rowSections=_rowSections - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * thumbnail;                        //@synthesize thumbnail=_thumbnail - In the implementation block
+(id)_specializedSchema;
-(id)initWithDictionary:(id)arg1 ;
-(WBSParsecImageRepresentation *)thumbnail;
-(NSString *)secondaryTitle;
-(id)thumbnailWithSession:(id)arg1 ;
-(NSNumber *)titleMaximumLines;
-(NSArray *)descriptionRichTexts;
-(NSString *)footnote;
-(WBSParsecImageRepresentation *)secondaryTitleGlyph;
-(WBSParsecAuxiliaryInfo *)auxiliaryInfo;
-(NSArray *)rowSections;
-(id)actionButton;
@end

