/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSURL, NSString, NSData, NSNumber;

@interface MCWebClipPayload : MCPayload {

	NSURL* _URL;
	NSString* _label;
	NSData* _iconData;
	BOOL _isRemovable;
	BOOL _precomposed;
	BOOL _fullScreen;
	NSString* _savedIdentifier;
	NSNumber* _isRemovableNum;
	NSNumber* _precomposedNum;
	NSNumber* _fullScreenNum;

}

@property (nonatomic,readonly) NSNumber * isRemovableNum;              //@synthesize isRemovableNum=_isRemovableNum - In the implementation block
@property (nonatomic,readonly) NSNumber * precomposedNum;              //@synthesize precomposedNum=_precomposedNum - In the implementation block
@property (nonatomic,readonly) NSNumber * fullScreenNum;               //@synthesize fullScreenNum=_fullScreenNum - In the implementation block
@property (nonatomic,retain,readonly) NSURL * URL;                     //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain,readonly) NSString * label;                //@synthesize label=_label - In the implementation block
@property (nonatomic,retain,readonly) NSData * iconData;               //@synthesize iconData=_iconData - In the implementation block
@property (nonatomic,readonly) BOOL isRemovable;                       //@synthesize isRemovable=_isRemovable - In the implementation block
@property (nonatomic,readonly) BOOL precomposed;                       //@synthesize precomposed=_precomposed - In the implementation block
@property (nonatomic,readonly) BOOL fullScreen;                        //@synthesize fullScreen=_fullScreen - In the implementation block
@property (nonatomic,retain) NSString * savedIdentifier;               //@synthesize savedIdentifier=_savedIdentifier - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(BOOL)isRemovable;
-(NSString *)savedIdentifier;
-(BOOL)precomposed;
-(void)setSavedIdentifier:(NSString *)arg1 ;
-(NSNumber *)isRemovableNum;
-(NSNumber *)precomposedNum;
-(NSNumber *)fullScreenNum;
-(id)description;
-(id)title;
-(NSURL *)URL;
-(NSString *)label;
-(BOOL)fullScreen;
-(NSData *)iconData;
@end

