/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString;

@interface OADTextListStyle : NSObject {

	NSMutableArray* mParagraphProperties;
	NSString* mLanguage;

}

@property (nonatomic,retain) NSString * language; 
+(id)defaultObject;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(id)propertiesForListLevel:(unsigned long long)arg1 ;
-(id)defaultProperties;
-(id)initWithDefaults;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
-(void)flatten;
-(void)overrideWithTextStyle:(id)arg1 ;
-(void)setPropertiesForListLevel:(unsigned long long)arg1 properties:(id)arg2 ;
-(void)enumerateParagraphPropertiesUsingBlock:(/*^block*/id)arg1 ;
-(void)removeUnnecessaryOverrides;
@end

